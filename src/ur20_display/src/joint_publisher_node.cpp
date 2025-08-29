#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>

#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_eigen/tf2_eigen.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>

#include <Eigen/Geometry>

class UR20DisplayNode : public rclcpp::Node
{
public:
    UR20DisplayNode()
    : Node("ur20_display_node"),
      tf_buffer_(this->get_clock()),
      tf_listener_(tf_buffer_)
    {
        // Publisher for /joint_states
        joint_pub_ = this->create_publisher<sensor_msgs::msg::JointState>("joint_states", 10);

        // Timer at 10 Hz
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100),
            std::bind(&UR20DisplayNode::timer_callback, this));
    }

private:
    void timer_callback()
    {
        // 1. Publish a fixed joint configuration
        auto msg = sensor_msgs::msg::JointState();
        msg.header.stamp = this->now();
        msg.name = {"shoulder_pan_joint", "shoulder_lift_joint", "elbow_joint",
                    "wrist_1_joint", "wrist_2_joint", "wrist_3_joint"};
        msg.position = {0.0, -1.0, 1.0, -1.0, 1.0, 0.0};
        joint_pub_->publish(msg);

        // 2. Try to lookup TFs
        try {
            auto tf_world_elbow = tf_buffer_.lookupTransform("world", "forearm_link", tf2::TimePointZero);
            auto tf_elbow_gripper = tf_buffer_.lookupTransform("forearm_link", "gripper", tf2::TimePointZero);
            auto tf_world_gripper = tf_buffer_.lookupTransform("world", "gripper", tf2::TimePointZero);

            // Convert to Eigen::Isometry3d
            Eigen::Isometry3d T_world_elbow = tf2::transformToEigen(tf_world_elbow);
            Eigen::Isometry3d T_elbow_gripper = tf2::transformToEigen(tf_elbow_gripper);
            Eigen::Isometry3d T_world_gripper = tf2::transformToEigen(tf_world_gripper);

            // Verify multiplication consistency
            Eigen::Isometry3d T_check = T_world_elbow * T_elbow_gripper;
            double error = (T_world_gripper.translation() - T_check.translation()).norm();

            RCLCPP_INFO_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
                                 "Transform error norm: %f", error);

        } catch (const tf2::TransformException & ex) {
            RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
                                 "TF lookup failed: %s", ex.what());
        }
    }

    // Members
    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr joint_pub_;
    rclcpp::TimerBase::SharedPtr timer_;
    tf2_ros::Buffer tf_buffer_;
    tf2_ros::TransformListener tf_listener_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<UR20DisplayNode>());
    rclcpp::shutdown();
    return 0;
}
