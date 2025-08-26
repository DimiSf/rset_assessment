#include <rclcpp/rclcpp.hpp>
#include <vector>
#include <thread>
#include <mutex>
#include <condition_variable>

#include "linear_algebra_service/srv/solve_least_squares.hpp"
#include "geometry_msgs/msg/vector3.hpp"

using Solve = linear_algebra_service::srv::SolveLeastSquares;
using Vector3 = geometry_msgs::msg::Vector3;

class ServerNode : public rclcpp::Node
{
public:
  ServerNode() : Node("lsq_server"), data_ready_(false)
  {
    // Service
    service_ = this->create_service<Solve>(
      "/solve_lsq",
      std::bind(&ServerNode::handle_service, this,
                std::placeholders::_1, std::placeholders::_2)
    );

    // Subscriber
    subscription_ = this->create_subscription<Vector3>(
      "/x_solution", 10,
      std::bind(&ServerNode::handle_topic, this, std::placeholders::_1)
    );

    // Start worker thread
    worker_thread_ = std::thread(&ServerNode::worker_loop, this);

    RCLCPP_INFO(this->get_logger(),
                "Server ready: service on /solve_lsq and subscriber on /x_solution");
  }

  ~ServerNode()
  {
    if (worker_thread_.joinable()) {
      worker_thread_.detach();  // or join if you want clean exit
    }
  }

private:
  // Service callback
  void handle_service(const std::shared_ptr<Solve::Request> req,
                      std::shared_ptr<Solve::Response> res)
  {
    const size_t a_size = req->a.size();
    const size_t b_size = req->b.size();

    if (a_size == 0 || (a_size % 3) != 0) {
      RCLCPP_WARN(this->get_logger(),
                  "Invalid 'a' size=%zu (must be multiple of 3).", a_size);
    }
    if (b_size != 3) {
      RCLCPP_WARN(this->get_logger(),
                  "Invalid 'b' size=%zu (must be exactly 3).", b_size);
    }

    const size_t M = (a_size / 3);
    RCLCPP_INFO(this->get_logger(), "Request: A=(%zux3), b=(%zu)", M, b_size);

    // Placeholders (will be Eigen math later)
    res->x_solution  = {0.0, 0.0, 0.0};
    res->r_transform = {1.0,0.0,0.0, 0.0,1.0,0.0, 0.0,0.0,1.0};
    res->d_transform = {0.0, 0.0, 0.0};
    res->x_transform = res->x_solution;

    RCLCPP_INFO(this->get_logger(), "Responded with placeholder solution.");
  }

  // Subscriber callback
  void handle_topic(const Vector3::SharedPtr msg)
  {
    std::lock_guard<std::mutex> lock(mtx_);
    latest_x_ = *msg;
    data_ready_ = true;
    cv_.notify_one();  // wake up worker thread
  }

  // Worker thread loop
  void worker_loop()
  {
    std::unique_lock<std::mutex> lock(mtx_);
    while (rclcpp::ok()) {
      cv_.wait(lock, [this] { return data_ready_; }); // wait until notified
      RCLCPP_INFO(this->get_logger(),
                  "Worker thread woke up: latest x_solution = [%f, %f, %f]",
                  latest_x_.x, latest_x_.y, latest_x_.z);
      data_ready_ = false;  // reset flag
    }
  }

  // Members
  rclcpp::Service<Solve>::SharedPtr service_;
  rclcpp::Subscription<Vector3>::SharedPtr subscription_;

  std::thread worker_thread_;
  std::mutex mtx_;
  std::condition_variable cv_;
  bool data_ready_;
  Vector3 latest_x_;
};
  
int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ServerNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
