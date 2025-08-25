#include <rclcpp/rclcpp.hpp>
int main(int a,char**v){rclcpp::init(a,v); RCLCPP_INFO(rclcpp::get_logger("server"), "server stub"); rclcpp::shutdown(); return 0;}
