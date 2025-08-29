#include <rclcpp/rclcpp.hpp>
#include <vector>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <Eigen/Dense>
#include <Eigen/Geometry>
#include <cmath>
#include <random>

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
    // Mx3 A from Vector3[] rows
    const size_t M = req->a.size();
    if (M < 3) {
      RCLCPP_ERROR(this->get_logger(), "Need at least 3 rows (M>=3), got %zu", M);
      // Fill something sane and return
      res->x_solution.x = res->x_solution.y = res->x_solution.z = 0.0;
      res->x_transform = res->x_solution;
      res->r_transform = {1,0,0, 0,1,0, 0,0,1};
      res->d_transform.x = res->d_transform.y = res->d_transform.z = 0.0;
      return;
    }

    Eigen::MatrixXd A(M, 3);
    for (size_t i = 0; i < M; ++i) {
      A(i,0) = req->a[i].x;
      A(i,1) = req->a[i].y;
      A(i,2) = req->a[i].z;
    }

    // 3x1 b from Vector3 (not an array)
    Eigen::Vector3d b(req->b.x, req->b.y, req->b.z);

    // Least-squares solution x = argmin ||Ax - b||
    Eigen::Vector3d x = A.colPivHouseholderQr().solve(b);

    // Random rotation R' and displacement d'
    std::mt19937 rng(std::random_device{}());
    std::uniform_real_distribution<double> U(0.0, 1.0);

    Eigen::Vector3d axis(U(rng), U(rng), U(rng));
    if (axis.norm() < 1e-12) axis = Eigen::Vector3d(1,0,0);
    axis.normalize();
    double angle = 2.0 * M_PI * U(rng);
    Eigen::Matrix3d Rprime = Eigen::AngleAxisd(angle, axis).toRotationMatrix();

    Eigen::Vector3d dprime(U(rng), U(rng), U(rng));
    Eigen::Vector3d xprime = Rprime * x + dprime;

    // Fill response (Vector3 needs .x/.y/.z assignments)
    res->x_solution.x = x(0);
    res->x_solution.y = x(1);
    res->x_solution.z = x(2);

    res->x_transform.x = xprime(0);
    res->x_transform.y = xprime(1);
    res->x_transform.z = xprime(2);

    // Row-major 3x3 (9 elements)
    res->r_transform = {
      Rprime(0,0), Rprime(0,1), Rprime(0,2),
      Rprime(1,0), Rprime(1,1), Rprime(1,2),
      Rprime(2,0), Rprime(2,1), Rprime(2,2)
    };

    res->d_transform.x = dprime(0);
    res->d_transform.y = dprime(1);
    res->d_transform.z = dprime(2);

    RCLCPP_INFO(this->get_logger(), "Solved LSQ with M=%zu; sent x', R', d'", M);
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
