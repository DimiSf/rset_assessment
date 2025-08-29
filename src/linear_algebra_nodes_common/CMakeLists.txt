cmake_minimum_required(VERSION 3.8)
project(linear_algebra_nodes_common)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(linear_algebra_service REQUIRED)
find_package(yaml-cpp REQUIRED)
find_package(geometry_msgs REQUIRED)

# >>> ADD THESE TWO LINES <<<
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

# Executables
add_executable(server_node src/server_node.cpp)
ament_target_dependencies(server_node
  rclcpp
  linear_algebra_service
  geometry_msgs
)
# >>> ADD THIS LINE <<<
target_link_libraries(server_node Eigen3::Eigen)

install(TARGETS
  server_node
  DESTINATION lib/${PROJECT_NAME}
)

add_executable(client_node src/client_node.cpp)
ament_target_dependencies(client_node
  rclcpp
  linear_algebra_service
  geometry_msgs
)
# already linking yaml-cpp, now also link Eigen:
target_link_libraries(client_node Eigen3::Eigen yaml-cpp)

install(TARGETS
  client_node
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
