#include "rclcpp/rclcpp.hpp"
#include "linear_algebra_service/srv/solve_least_squares.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include <yaml-cpp/yaml.h>

#include <Eigen/Dense>     // for Eigen::Vector3d, Map
#include <memory>
#include <vector>
#include <fstream>

using SolveLSQ = linear_algebra_service::srv::SolveLeastSquares;
using Vector3  = geometry_msgs::msg::Vector3;

class ClientNode : public rclcpp::Node
{
public:
  ClientNode() : Node("client_node")
  {
    client_ = this->create_client<SolveLSQ>("/solve_lsq");

    while (!client_->wait_for_service(std::chrono::seconds(1))) {
      RCLCPP_INFO(this->get_logger(), "Waiting for /solve_lsq service...");
    }

    // Publisher for the recovered x (after inverting R' and d')
    publisher_ = this->create_publisher<Vector3>("/x_solution", 10);

    // Load YAML (you can parametrize this if you like)
    const std::string cfg_path =
      "/ros2_ws/src/linear_algebra_nodes_common/config/matrix_vector.yaml";
    YAML::Node config = YAML::LoadFile(cfg_path);

    if (!config["A"] || !config["b"]) {
      RCLCPP_ERROR(this->get_logger(), "YAML must contain keys A and b");
      return;
    }

    // Build request
    auto request = std::make_shared<SolveLSQ::Request>();

    // A: array of Vector3 rows
    if (!config["A"].IsSequence()) {
      RCLCPP_ERROR(this->get_logger(), "A must be a sequence of rows");
      return;
    }
    for (std::size_t i = 0; i < config["A"].size(); ++i) {
      auto rowNode = config["A"][i];
      if (!rowNode.IsSequence() || rowNode.size() != 3) {
        RCLCPP_ERROR(this->get_logger(), "A row %zu must have 3 numbers", i);
        return;
      }
      Vector3 row;
      row.x = rowNode[0].as<double>();
      row.y = rowNode[1].as<double>();
      row.z = rowNode[2].as<double>();
      request->a.push_back(row);
    }

    // b: single Vector3
    if (!config["b"].IsSequence() || config["b"].size() != 3) {
      RCLCPP_ERROR(this->get_logger(), "b must have exactly 3 numbers");
      return;
    }
    request->b.x = config["b"][0].as<double>();
    request->b.y = config["b"][1].as<double>();
    request->b.z = config["b"][2].as<double>();

    // Send request async; compute inverse transform in the callback and publish x
    (void)client_->async_send_request(
      request,
      std::bind(&ClientNode::handle_response, this, std::placeholders::_1)
    );
  }

private:
  void handle_response(rclcpp::Client<SolveLSQ>::SharedFuture future)
  {
    auto response = future.get();

    // Unpack x' (x_transform), R', d'
    Eigen::Vector3d xprime(response->x_transform.x,
                           response->x_transform.y,
                           response->x_transform.z);
    Eigen::Vector3d d(response->d_transform.x,
                      response->d_transform.y,
                      response->d_transform.z);

    // Map R' (row-major 3x3) into Eigen
    Eigen::Map<const Eigen::Matrix<double,3,3,Eigen::RowMajor>> R(response->r_transform.data());

    // Invert: x = R'^T (x' - d')
    Eigen::Vector3d x = R.transpose() * (xprime - d);

    // Publish recovered x
    Vector3 msg;
    msg.x = x.x();
    msg.y = x.y();
    msg.z = x.z();
    publisher_->publish(msg);

    RCLCPP_INFO(this->get_logger(),
      "Published x = [%.3f, %.3f, %.3f] to /x_solution", x.x(), x.y(), x.z());

    // (Optional) Compare with server's x_solution just for sanity:
    RCLCPP_INFO(this->get_logger(),
      "Server x_solution (for reference): [%.3f, %.3f, %.3f]",
      response->x_solution.x, response->x_solution.y, response->x_solution.z);
  }

  rclcpp::Client<SolveLSQ>::SharedPtr client_;
  rclcpp::Publisher<Vector3>::SharedPtr publisher_;
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ClientNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
