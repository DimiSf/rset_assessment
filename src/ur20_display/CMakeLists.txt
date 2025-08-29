cmake_minimum_required(VERSION 3.8)
project(ur20_display)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_eigen REQUIRED)
find_package(Eigen3 REQUIRED)

# Executable
add_executable(joint_publisher_node src/joint_publisher_node.cpp)
ament_target_dependencies(joint_publisher_node
  rclcpp
  sensor_msgs
  tf2
  tf2_ros
  tf2_eigen
  Eigen3
)

# Install
install(TARGETS
  joint_publisher_node
  DESTINATION lib/${PROJECT_NAME})

ament_package()
