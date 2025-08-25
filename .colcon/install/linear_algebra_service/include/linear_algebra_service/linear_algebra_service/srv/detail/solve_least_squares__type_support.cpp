// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from linear_algebra_service:srv/SolveLeastSquares.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "linear_algebra_service/srv/detail/solve_least_squares__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace linear_algebra_service
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SolveLeastSquares_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) linear_algebra_service::srv::SolveLeastSquares_Request(_init);
}

void SolveLeastSquares_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<linear_algebra_service::srv::SolveLeastSquares_Request *>(message_memory);
  typed_message->~SolveLeastSquares_Request();
}

size_t size_function__SolveLeastSquares_Request__a(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SolveLeastSquares_Request__a(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SolveLeastSquares_Request__a(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SolveLeastSquares_Request__a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SolveLeastSquares_Request__a(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SolveLeastSquares_Request__a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SolveLeastSquares_Request__a(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SolveLeastSquares_Request__a(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SolveLeastSquares_Request__b(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SolveLeastSquares_Request__b(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SolveLeastSquares_Request__b(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SolveLeastSquares_Request__b(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SolveLeastSquares_Request__b(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SolveLeastSquares_Request__b(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SolveLeastSquares_Request__b(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SolveLeastSquares_Request__b(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SolveLeastSquares_Request_message_member_array[2] = {
  {
    "a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service::srv::SolveLeastSquares_Request, a),  // bytes offset in struct
    nullptr,  // default value
    size_function__SolveLeastSquares_Request__a,  // size() function pointer
    get_const_function__SolveLeastSquares_Request__a,  // get_const(index) function pointer
    get_function__SolveLeastSquares_Request__a,  // get(index) function pointer
    fetch_function__SolveLeastSquares_Request__a,  // fetch(index, &value) function pointer
    assign_function__SolveLeastSquares_Request__a,  // assign(index, value) function pointer
    resize_function__SolveLeastSquares_Request__a  // resize(index) function pointer
  },
  {
    "b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service::srv::SolveLeastSquares_Request, b),  // bytes offset in struct
    nullptr,  // default value
    size_function__SolveLeastSquares_Request__b,  // size() function pointer
    get_const_function__SolveLeastSquares_Request__b,  // get_const(index) function pointer
    get_function__SolveLeastSquares_Request__b,  // get(index) function pointer
    fetch_function__SolveLeastSquares_Request__b,  // fetch(index, &value) function pointer
    assign_function__SolveLeastSquares_Request__b,  // assign(index, value) function pointer
    resize_function__SolveLeastSquares_Request__b  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SolveLeastSquares_Request_message_members = {
  "linear_algebra_service::srv",  // message namespace
  "SolveLeastSquares_Request",  // message name
  2,  // number of fields
  sizeof(linear_algebra_service::srv::SolveLeastSquares_Request),
  SolveLeastSquares_Request_message_member_array,  // message members
  SolveLeastSquares_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SolveLeastSquares_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SolveLeastSquares_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SolveLeastSquares_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace linear_algebra_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<linear_algebra_service::srv::SolveLeastSquares_Request>()
{
  return &::linear_algebra_service::srv::rosidl_typesupport_introspection_cpp::SolveLeastSquares_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, linear_algebra_service, srv, SolveLeastSquares_Request)() {
  return &::linear_algebra_service::srv::rosidl_typesupport_introspection_cpp::SolveLeastSquares_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "linear_algebra_service/srv/detail/solve_least_squares__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace linear_algebra_service
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SolveLeastSquares_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) linear_algebra_service::srv::SolveLeastSquares_Response(_init);
}

void SolveLeastSquares_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<linear_algebra_service::srv::SolveLeastSquares_Response *>(message_memory);
  typed_message->~SolveLeastSquares_Response();
}

size_t size_function__SolveLeastSquares_Response__x_solution(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SolveLeastSquares_Response__x_solution(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SolveLeastSquares_Response__x_solution(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SolveLeastSquares_Response__x_solution(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SolveLeastSquares_Response__x_solution(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SolveLeastSquares_Response__x_solution(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SolveLeastSquares_Response__x_solution(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SolveLeastSquares_Response__x_solution(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SolveLeastSquares_Response__x_transform(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SolveLeastSquares_Response__x_transform(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SolveLeastSquares_Response__x_transform(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SolveLeastSquares_Response__x_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SolveLeastSquares_Response__x_transform(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SolveLeastSquares_Response__x_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SolveLeastSquares_Response__x_transform(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SolveLeastSquares_Response__x_transform(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SolveLeastSquares_Response__r_transform(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SolveLeastSquares_Response__r_transform(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SolveLeastSquares_Response__r_transform(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SolveLeastSquares_Response__r_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SolveLeastSquares_Response__r_transform(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SolveLeastSquares_Response__r_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SolveLeastSquares_Response__r_transform(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SolveLeastSquares_Response__r_transform(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SolveLeastSquares_Response__d_transform(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SolveLeastSquares_Response__d_transform(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SolveLeastSquares_Response__d_transform(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SolveLeastSquares_Response__d_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SolveLeastSquares_Response__d_transform(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SolveLeastSquares_Response__d_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SolveLeastSquares_Response__d_transform(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SolveLeastSquares_Response__d_transform(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SolveLeastSquares_Response_message_member_array[4] = {
  {
    "x_solution",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service::srv::SolveLeastSquares_Response, x_solution),  // bytes offset in struct
    nullptr,  // default value
    size_function__SolveLeastSquares_Response__x_solution,  // size() function pointer
    get_const_function__SolveLeastSquares_Response__x_solution,  // get_const(index) function pointer
    get_function__SolveLeastSquares_Response__x_solution,  // get(index) function pointer
    fetch_function__SolveLeastSquares_Response__x_solution,  // fetch(index, &value) function pointer
    assign_function__SolveLeastSquares_Response__x_solution,  // assign(index, value) function pointer
    resize_function__SolveLeastSquares_Response__x_solution  // resize(index) function pointer
  },
  {
    "x_transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service::srv::SolveLeastSquares_Response, x_transform),  // bytes offset in struct
    nullptr,  // default value
    size_function__SolveLeastSquares_Response__x_transform,  // size() function pointer
    get_const_function__SolveLeastSquares_Response__x_transform,  // get_const(index) function pointer
    get_function__SolveLeastSquares_Response__x_transform,  // get(index) function pointer
    fetch_function__SolveLeastSquares_Response__x_transform,  // fetch(index, &value) function pointer
    assign_function__SolveLeastSquares_Response__x_transform,  // assign(index, value) function pointer
    resize_function__SolveLeastSquares_Response__x_transform  // resize(index) function pointer
  },
  {
    "r_transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service::srv::SolveLeastSquares_Response, r_transform),  // bytes offset in struct
    nullptr,  // default value
    size_function__SolveLeastSquares_Response__r_transform,  // size() function pointer
    get_const_function__SolveLeastSquares_Response__r_transform,  // get_const(index) function pointer
    get_function__SolveLeastSquares_Response__r_transform,  // get(index) function pointer
    fetch_function__SolveLeastSquares_Response__r_transform,  // fetch(index, &value) function pointer
    assign_function__SolveLeastSquares_Response__r_transform,  // assign(index, value) function pointer
    resize_function__SolveLeastSquares_Response__r_transform  // resize(index) function pointer
  },
  {
    "d_transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service::srv::SolveLeastSquares_Response, d_transform),  // bytes offset in struct
    nullptr,  // default value
    size_function__SolveLeastSquares_Response__d_transform,  // size() function pointer
    get_const_function__SolveLeastSquares_Response__d_transform,  // get_const(index) function pointer
    get_function__SolveLeastSquares_Response__d_transform,  // get(index) function pointer
    fetch_function__SolveLeastSquares_Response__d_transform,  // fetch(index, &value) function pointer
    assign_function__SolveLeastSquares_Response__d_transform,  // assign(index, value) function pointer
    resize_function__SolveLeastSquares_Response__d_transform  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SolveLeastSquares_Response_message_members = {
  "linear_algebra_service::srv",  // message namespace
  "SolveLeastSquares_Response",  // message name
  4,  // number of fields
  sizeof(linear_algebra_service::srv::SolveLeastSquares_Response),
  SolveLeastSquares_Response_message_member_array,  // message members
  SolveLeastSquares_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SolveLeastSquares_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SolveLeastSquares_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SolveLeastSquares_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace linear_algebra_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<linear_algebra_service::srv::SolveLeastSquares_Response>()
{
  return &::linear_algebra_service::srv::rosidl_typesupport_introspection_cpp::SolveLeastSquares_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, linear_algebra_service, srv, SolveLeastSquares_Response)() {
  return &::linear_algebra_service::srv::rosidl_typesupport_introspection_cpp::SolveLeastSquares_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "linear_algebra_service/srv/detail/solve_least_squares__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace linear_algebra_service
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SolveLeastSquares_service_members = {
  "linear_algebra_service::srv",  // service namespace
  "SolveLeastSquares",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<linear_algebra_service::srv::SolveLeastSquares>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SolveLeastSquares_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SolveLeastSquares_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace linear_algebra_service


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<linear_algebra_service::srv::SolveLeastSquares>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::linear_algebra_service::srv::rosidl_typesupport_introspection_cpp::SolveLeastSquares_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::linear_algebra_service::srv::SolveLeastSquares_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::linear_algebra_service::srv::SolveLeastSquares_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, linear_algebra_service, srv, SolveLeastSquares)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<linear_algebra_service::srv::SolveLeastSquares>();
}

#ifdef __cplusplus
}
#endif
