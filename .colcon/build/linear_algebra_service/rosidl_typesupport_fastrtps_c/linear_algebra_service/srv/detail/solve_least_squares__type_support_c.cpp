// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from linear_algebra_service:srv/SolveLeastSquares.idl
// generated code does not contain a copyright notice
#include "linear_algebra_service/srv/detail/solve_least_squares__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "linear_algebra_service/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "linear_algebra_service/srv/detail/solve_least_squares__struct.h"
#include "linear_algebra_service/srv/detail/solve_least_squares__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // a, b
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // a, b

// forward declare type support functions


using _SolveLeastSquares_Request__ros_msg_type = linear_algebra_service__srv__SolveLeastSquares_Request;

static bool _SolveLeastSquares_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SolveLeastSquares_Request__ros_msg_type * ros_message = static_cast<const _SolveLeastSquares_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    size_t size = ros_message->a.size;
    auto array_ptr = ros_message->a.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: b
  {
    size_t size = ros_message->b.size;
    auto array_ptr = ros_message->b.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SolveLeastSquares_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SolveLeastSquares_Request__ros_msg_type * ros_message = static_cast<_SolveLeastSquares_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: a
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->a.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->a);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->a, size)) {
      fprintf(stderr, "failed to create array for field 'a'");
      return false;
    }
    auto array_ptr = ros_message->a.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: b
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->b.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->b);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->b, size)) {
      fprintf(stderr, "failed to create array for field 'b'");
      return false;
    }
    auto array_ptr = ros_message->b.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_linear_algebra_service
size_t get_serialized_size_linear_algebra_service__srv__SolveLeastSquares_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SolveLeastSquares_Request__ros_msg_type * ros_message = static_cast<const _SolveLeastSquares_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name a
  {
    size_t array_size = ros_message->a.size;
    auto array_ptr = ros_message->a.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b
  {
    size_t array_size = ros_message->b.size;
    auto array_ptr = ros_message->b.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SolveLeastSquares_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_linear_algebra_service__srv__SolveLeastSquares_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_linear_algebra_service
size_t max_serialized_size_linear_algebra_service__srv__SolveLeastSquares_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: a
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = linear_algebra_service__srv__SolveLeastSquares_Request;
    is_plain =
      (
      offsetof(DataType, b) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SolveLeastSquares_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_linear_algebra_service__srv__SolveLeastSquares_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SolveLeastSquares_Request = {
  "linear_algebra_service::srv",
  "SolveLeastSquares_Request",
  _SolveLeastSquares_Request__cdr_serialize,
  _SolveLeastSquares_Request__cdr_deserialize,
  _SolveLeastSquares_Request__get_serialized_size,
  _SolveLeastSquares_Request__max_serialized_size
};

static rosidl_message_type_support_t _SolveLeastSquares_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SolveLeastSquares_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, linear_algebra_service, srv, SolveLeastSquares_Request)() {
  return &_SolveLeastSquares_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "linear_algebra_service/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "linear_algebra_service/srv/detail/solve_least_squares__struct.h"
// already included above
// #include "linear_algebra_service/srv/detail/solve_least_squares__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // d_transform, r_transform, x_solution, x_transform
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // d_transform, r_transform, x_solution, x_transform

// forward declare type support functions


using _SolveLeastSquares_Response__ros_msg_type = linear_algebra_service__srv__SolveLeastSquares_Response;

static bool _SolveLeastSquares_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SolveLeastSquares_Response__ros_msg_type * ros_message = static_cast<const _SolveLeastSquares_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x_solution
  {
    size_t size = ros_message->x_solution.size;
    auto array_ptr = ros_message->x_solution.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: x_transform
  {
    size_t size = ros_message->x_transform.size;
    auto array_ptr = ros_message->x_transform.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: r_transform
  {
    size_t size = ros_message->r_transform.size;
    auto array_ptr = ros_message->r_transform.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: d_transform
  {
    size_t size = ros_message->d_transform.size;
    auto array_ptr = ros_message->d_transform.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SolveLeastSquares_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SolveLeastSquares_Response__ros_msg_type * ros_message = static_cast<_SolveLeastSquares_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x_solution
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_solution.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->x_solution);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->x_solution, size)) {
      fprintf(stderr, "failed to create array for field 'x_solution'");
      return false;
    }
    auto array_ptr = ros_message->x_solution.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: x_transform
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_transform.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->x_transform);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->x_transform, size)) {
      fprintf(stderr, "failed to create array for field 'x_transform'");
      return false;
    }
    auto array_ptr = ros_message->x_transform.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: r_transform
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->r_transform.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->r_transform);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->r_transform, size)) {
      fprintf(stderr, "failed to create array for field 'r_transform'");
      return false;
    }
    auto array_ptr = ros_message->r_transform.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: d_transform
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->d_transform.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->d_transform);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->d_transform, size)) {
      fprintf(stderr, "failed to create array for field 'd_transform'");
      return false;
    }
    auto array_ptr = ros_message->d_transform.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_linear_algebra_service
size_t get_serialized_size_linear_algebra_service__srv__SolveLeastSquares_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SolveLeastSquares_Response__ros_msg_type * ros_message = static_cast<const _SolveLeastSquares_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_solution
  {
    size_t array_size = ros_message->x_solution.size;
    auto array_ptr = ros_message->x_solution.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_transform
  {
    size_t array_size = ros_message->x_transform.size;
    auto array_ptr = ros_message->x_transform.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name r_transform
  {
    size_t array_size = ros_message->r_transform.size;
    auto array_ptr = ros_message->r_transform.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name d_transform
  {
    size_t array_size = ros_message->d_transform.size;
    auto array_ptr = ros_message->d_transform.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SolveLeastSquares_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_linear_algebra_service__srv__SolveLeastSquares_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_linear_algebra_service
size_t max_serialized_size_linear_algebra_service__srv__SolveLeastSquares_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: x_solution
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x_transform
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: r_transform
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: d_transform
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = linear_algebra_service__srv__SolveLeastSquares_Response;
    is_plain =
      (
      offsetof(DataType, d_transform) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SolveLeastSquares_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_linear_algebra_service__srv__SolveLeastSquares_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SolveLeastSquares_Response = {
  "linear_algebra_service::srv",
  "SolveLeastSquares_Response",
  _SolveLeastSquares_Response__cdr_serialize,
  _SolveLeastSquares_Response__cdr_deserialize,
  _SolveLeastSquares_Response__get_serialized_size,
  _SolveLeastSquares_Response__max_serialized_size
};

static rosidl_message_type_support_t _SolveLeastSquares_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SolveLeastSquares_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, linear_algebra_service, srv, SolveLeastSquares_Response)() {
  return &_SolveLeastSquares_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "linear_algebra_service/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "linear_algebra_service/srv/solve_least_squares.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SolveLeastSquares__callbacks = {
  "linear_algebra_service::srv",
  "SolveLeastSquares",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, linear_algebra_service, srv, SolveLeastSquares_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, linear_algebra_service, srv, SolveLeastSquares_Response)(),
};

static rosidl_service_type_support_t SolveLeastSquares__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SolveLeastSquares__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, linear_algebra_service, srv, SolveLeastSquares)() {
  return &SolveLeastSquares__handle;
}

#if defined(__cplusplus)
}
#endif
