// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from linear_algebra_service:srv/SolveLeastSquares.idl
// generated code does not contain a copyright notice

#ifndef LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "linear_algebra_service/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "linear_algebra_service/srv/detail/solve_least_squares__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace linear_algebra_service
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_linear_algebra_service
cdr_serialize(
  const linear_algebra_service::srv::SolveLeastSquares_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_linear_algebra_service
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  linear_algebra_service::srv::SolveLeastSquares_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_linear_algebra_service
get_serialized_size(
  const linear_algebra_service::srv::SolveLeastSquares_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_linear_algebra_service
max_serialized_size_SolveLeastSquares_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace linear_algebra_service

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_linear_algebra_service
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, linear_algebra_service, srv, SolveLeastSquares_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "linear_algebra_service/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "linear_algebra_service/srv/detail/solve_least_squares__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace linear_algebra_service
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_linear_algebra_service
cdr_serialize(
  const linear_algebra_service::srv::SolveLeastSquares_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_linear_algebra_service
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  linear_algebra_service::srv::SolveLeastSquares_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_linear_algebra_service
get_serialized_size(
  const linear_algebra_service::srv::SolveLeastSquares_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_linear_algebra_service
max_serialized_size_SolveLeastSquares_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace linear_algebra_service

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_linear_algebra_service
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, linear_algebra_service, srv, SolveLeastSquares_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "linear_algebra_service/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_linear_algebra_service
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, linear_algebra_service, srv, SolveLeastSquares)();

#ifdef __cplusplus
}
#endif

#endif  // LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
