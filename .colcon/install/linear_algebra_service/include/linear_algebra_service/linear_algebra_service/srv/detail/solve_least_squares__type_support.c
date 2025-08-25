// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from linear_algebra_service:srv/SolveLeastSquares.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "linear_algebra_service/srv/detail/solve_least_squares__rosidl_typesupport_introspection_c.h"
#include "linear_algebra_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "linear_algebra_service/srv/detail/solve_least_squares__functions.h"
#include "linear_algebra_service/srv/detail/solve_least_squares__struct.h"


// Include directives for member types
// Member `a`
// Member `b`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  linear_algebra_service__srv__SolveLeastSquares_Request__init(message_memory);
}

void linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_fini_function(void * message_memory)
{
  linear_algebra_service__srv__SolveLeastSquares_Request__fini(message_memory);
}

size_t linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Request__a(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Request__a(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Request__a(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Request__a(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Request__a(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Request__a(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Request__a(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Request__a(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Request__b(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Request__b(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Request__b(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Request__b(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Request__b(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Request__b(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Request__b(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Request__b(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_message_member_array[2] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service__srv__SolveLeastSquares_Request, a),  // bytes offset in struct
    NULL,  // default value
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Request__a,  // size() function pointer
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Request__a,  // get_const(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Request__a,  // get(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Request__a,  // fetch(index, &value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Request__a,  // assign(index, value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Request__a  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service__srv__SolveLeastSquares_Request, b),  // bytes offset in struct
    NULL,  // default value
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Request__b,  // size() function pointer
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Request__b,  // get_const(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Request__b,  // get(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Request__b,  // fetch(index, &value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Request__b,  // assign(index, value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Request__b  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_message_members = {
  "linear_algebra_service__srv",  // message namespace
  "SolveLeastSquares_Request",  // message name
  2,  // number of fields
  sizeof(linear_algebra_service__srv__SolveLeastSquares_Request),
  linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_message_member_array,  // message members
  linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_message_type_support_handle = {
  0,
  &linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_linear_algebra_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, linear_algebra_service, srv, SolveLeastSquares_Request)() {
  if (!linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_message_type_support_handle.typesupport_identifier) {
    linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &linear_algebra_service__srv__SolveLeastSquares_Request__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "linear_algebra_service/srv/detail/solve_least_squares__rosidl_typesupport_introspection_c.h"
// already included above
// #include "linear_algebra_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "linear_algebra_service/srv/detail/solve_least_squares__functions.h"
// already included above
// #include "linear_algebra_service/srv/detail/solve_least_squares__struct.h"


// Include directives for member types
// Member `x_solution`
// Member `x_transform`
// Member `r_transform`
// Member `d_transform`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  linear_algebra_service__srv__SolveLeastSquares_Response__init(message_memory);
}

void linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_fini_function(void * message_memory)
{
  linear_algebra_service__srv__SolveLeastSquares_Response__fini(message_memory);
}

size_t linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Response__x_solution(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__x_solution(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__x_solution(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Response__x_solution(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__x_solution(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Response__x_solution(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__x_solution(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Response__x_solution(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Response__x_transform(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__x_transform(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__x_transform(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Response__x_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__x_transform(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Response__x_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__x_transform(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Response__x_transform(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Response__r_transform(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__r_transform(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__r_transform(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Response__r_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__r_transform(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Response__r_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__r_transform(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Response__r_transform(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Response__d_transform(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__d_transform(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__d_transform(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Response__d_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__d_transform(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Response__d_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__d_transform(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Response__d_transform(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_message_member_array[4] = {
  {
    "x_solution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service__srv__SolveLeastSquares_Response, x_solution),  // bytes offset in struct
    NULL,  // default value
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Response__x_solution,  // size() function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__x_solution,  // get_const(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__x_solution,  // get(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Response__x_solution,  // fetch(index, &value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Response__x_solution,  // assign(index, value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Response__x_solution  // resize(index) function pointer
  },
  {
    "x_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service__srv__SolveLeastSquares_Response, x_transform),  // bytes offset in struct
    NULL,  // default value
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Response__x_transform,  // size() function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__x_transform,  // get_const(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__x_transform,  // get(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Response__x_transform,  // fetch(index, &value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Response__x_transform,  // assign(index, value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Response__x_transform  // resize(index) function pointer
  },
  {
    "r_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service__srv__SolveLeastSquares_Response, r_transform),  // bytes offset in struct
    NULL,  // default value
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Response__r_transform,  // size() function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__r_transform,  // get_const(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__r_transform,  // get(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Response__r_transform,  // fetch(index, &value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Response__r_transform,  // assign(index, value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Response__r_transform  // resize(index) function pointer
  },
  {
    "d_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(linear_algebra_service__srv__SolveLeastSquares_Response, d_transform),  // bytes offset in struct
    NULL,  // default value
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__size_function__SolveLeastSquares_Response__d_transform,  // size() function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_const_function__SolveLeastSquares_Response__d_transform,  // get_const(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__get_function__SolveLeastSquares_Response__d_transform,  // get(index) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__fetch_function__SolveLeastSquares_Response__d_transform,  // fetch(index, &value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__assign_function__SolveLeastSquares_Response__d_transform,  // assign(index, value) function pointer
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__resize_function__SolveLeastSquares_Response__d_transform  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_message_members = {
  "linear_algebra_service__srv",  // message namespace
  "SolveLeastSquares_Response",  // message name
  4,  // number of fields
  sizeof(linear_algebra_service__srv__SolveLeastSquares_Response),
  linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_message_member_array,  // message members
  linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_message_type_support_handle = {
  0,
  &linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_linear_algebra_service
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, linear_algebra_service, srv, SolveLeastSquares_Response)() {
  if (!linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_message_type_support_handle.typesupport_identifier) {
    linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &linear_algebra_service__srv__SolveLeastSquares_Response__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "linear_algebra_service/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "linear_algebra_service/srv/detail/solve_least_squares__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers linear_algebra_service__srv__detail__solve_least_squares__rosidl_typesupport_introspection_c__SolveLeastSquares_service_members = {
  "linear_algebra_service__srv",  // service namespace
  "SolveLeastSquares",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // linear_algebra_service__srv__detail__solve_least_squares__rosidl_typesupport_introspection_c__SolveLeastSquares_Request_message_type_support_handle,
  NULL  // response message
  // linear_algebra_service__srv__detail__solve_least_squares__rosidl_typesupport_introspection_c__SolveLeastSquares_Response_message_type_support_handle
};

static rosidl_service_type_support_t linear_algebra_service__srv__detail__solve_least_squares__rosidl_typesupport_introspection_c__SolveLeastSquares_service_type_support_handle = {
  0,
  &linear_algebra_service__srv__detail__solve_least_squares__rosidl_typesupport_introspection_c__SolveLeastSquares_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, linear_algebra_service, srv, SolveLeastSquares_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, linear_algebra_service, srv, SolveLeastSquares_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_linear_algebra_service
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, linear_algebra_service, srv, SolveLeastSquares)() {
  if (!linear_algebra_service__srv__detail__solve_least_squares__rosidl_typesupport_introspection_c__SolveLeastSquares_service_type_support_handle.typesupport_identifier) {
    linear_algebra_service__srv__detail__solve_least_squares__rosidl_typesupport_introspection_c__SolveLeastSquares_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)linear_algebra_service__srv__detail__solve_least_squares__rosidl_typesupport_introspection_c__SolveLeastSquares_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, linear_algebra_service, srv, SolveLeastSquares_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, linear_algebra_service, srv, SolveLeastSquares_Response)()->data;
  }

  return &linear_algebra_service__srv__detail__solve_least_squares__rosidl_typesupport_introspection_c__SolveLeastSquares_service_type_support_handle;
}
