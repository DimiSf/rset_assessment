#include "rclcpp/rclcpp.hpp"
#include "linear_algebra_service/srv/solve_least_squares.hpp"
#include "geometry_msgs/msg/vector3.hpp"   // NEW
#include <memory>
#include <vector>
#include <yaml-cpp/yaml.h>
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

    // Publisher for x_solution
    publisher_ = this->create_publisher<Vector3>("/x_solution", 10);

    // Load YAML file
    YAML::Node config = YAML::LoadFile("/ros2_ws/src/linear_algebra_nodes_common/config/matrix_vector.yaml");

    auto request = std::make_shared<SolveLSQ::Request>();

    for (auto row : config["A"]) {
      for (auto val : row) {
        request->a.push_back(val.as<double>());
      }
    }
    for (auto val : config["b"]) {
      request->b.push_back(val.as<double>());
    }

    // Send request async
    auto future_result = client_->async_send_request(
      request,
      std::bind(&ClientNode::handle_response, this, std::placeholders::_1)
    );
  }

private:
  void handle_response(rclcpp::Client<SolveLSQ>::SharedFuture future)
  {
    auto response = future.get();
    RCLCPP_INFO(this->get_logger(), "Received response:");

    // Log values
    RCLCPP_INFO(this->get_logger(), "x_solution: [%f, %f, %f]",
                response->x_solution[0], response->x_solution[1], response->x_solution[2]);

    // Publish x_solution
    Vector3 msg;
    msg.x = response->x_solution[0];
    msg.y = response->x_solution[1];
    msg.z = response->x_solution[2];
    publisher_->publish(msg);

    RCLCPP_INFO(this->get_logger(), "Published x_solution to /x_solution");
  }

  rclcpp::Client<SolveLSQ>::SharedPtr client_;
  rclcpp::Publisher<Vector3>::SharedPtr publisher_;  // NEW
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ClientNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
