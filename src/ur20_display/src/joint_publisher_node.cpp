#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joint_state.hpp>

#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_eigen/tf2_eigen.h>
#include <Eigen/Geometry>

class Ur20DisplayNode : public rclcpp::Node
{
public:
    Ur20DisplayNode()
    : Node("ur20_display_node"),
      tf_buffer_(this->get_clock()),  // buffer uses this node's clock
      tf_listener_(tf_buffer_)        // attach listener to buffer
    {
        // Publisher to /joint_states
        pub_ = this->create_publisher<sensor_msgs::msg::JointState>("/joint_states", 10);

        // Timer: publish joint states every 100 ms
        joint_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100),
            std::bind(&Ur20DisplayNode::publish_joint_state, this));

        // Timer: check TFs every 2 seconds
        tf_timer_ = this->create_wall_timer(
            std::chrono::seconds(2),
            std::bind(&Ur20DisplayNode::check_transforms, this));
    }

private:
    // ---- Joint state publisher ----
    void publish_joint_state()
    {
        auto msg = sensor_msgs::msg::JointState();
        msg.header.stamp = this->get_clock()->now();

        // UR20 has 6 revolute joints
        msg.name = {
            "shoulder_pan_joint", "shoulder_lift_joint", "elbow_joint",
            "wrist_1_joint", "wrist_2_joint", "wrist_3_joint"
        };

        msg.position = {0.0, -1.57, 0.0, -1.57, 0.0, 0.0};

        pub_->publish(msg);
    }

    // ---- TF listener check ----
    void check_transforms()
    {
        try {
            // Important: URDF has "forearm_link" not "elbow_link"
            auto tf_world_elbow =
                tf_buffer_.lookupTransform("world", "forearm_link", tf2::TimePointZero);
            auto tf_elbow_gripper =
                tf_buffer_.lookupTransform("forearm_link", "gripper", tf2::TimePointZero);
            auto tf_world_gripper =
                tf_buffer_.lookupTransform("world", "gripper", tf2::TimePointZero);

            // Convert to Eigen
            Eigen::Isometry3d eig_world_elbow = tf2::transformToEigen(tf_world_elbow);
            Eigen::Isometry3d eig_elbow_gripper = tf2::transformToEigen(tf_elbow_gripper);
            Eigen::Isometry3d eig_world_gripper = tf2::transformToEigen(tf_world_gripper);

            // Verify relation: world->elbow * elbow->gripper ≈ world->gripper
            Eigen::Isometry3d check = eig_world_elbow * eig_elbow_gripper;
            double error_norm =
                (check.translation() - eig_world_gripper.translation()).norm();

            RCLCPP_INFO(this->get_logger(),
                "TF check: world->gripper error norm = %.6e", error_norm);

        } catch (tf2::TransformException &ex) {
            RCLCPP_WARN(this->get_logger(),
                "Transform unavailable: %s", ex.what());
        }
    }

    // Members
    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr pub_;
    rclcpp::TimerBase::SharedPtr joint_timer_;
    rclcpp::TimerBase::SharedPtr tf_timer_;

    tf2_ros::Buffer tf_buffer_;
    tf2_ros::TransformListener tf_listener_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Ur20DisplayNode>());
    rclcpp::shutdown();
    return 0;
}

