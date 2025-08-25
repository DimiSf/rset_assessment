// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from linear_algebra_service:srv/SolveLeastSquares.idl
// generated code does not contain a copyright notice

#ifndef LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__STRUCT_H_
#define LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'a'
// Member 'b'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SolveLeastSquares in the package linear_algebra_service.
typedef struct linear_algebra_service__srv__SolveLeastSquares_Request
{
  rosidl_runtime_c__double__Sequence a;
  rosidl_runtime_c__double__Sequence b;
} linear_algebra_service__srv__SolveLeastSquares_Request;

// Struct for a sequence of linear_algebra_service__srv__SolveLeastSquares_Request.
typedef struct linear_algebra_service__srv__SolveLeastSquares_Request__Sequence
{
  linear_algebra_service__srv__SolveLeastSquares_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} linear_algebra_service__srv__SolveLeastSquares_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'x_solution'
// Member 'x_transform'
// Member 'r_transform'
// Member 'd_transform'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SolveLeastSquares in the package linear_algebra_service.
typedef struct linear_algebra_service__srv__SolveLeastSquares_Response
{
  rosidl_runtime_c__double__Sequence x_solution;
  rosidl_runtime_c__double__Sequence x_transform;
  rosidl_runtime_c__double__Sequence r_transform;
  rosidl_runtime_c__double__Sequence d_transform;
} linear_algebra_service__srv__SolveLeastSquares_Response;

// Struct for a sequence of linear_algebra_service__srv__SolveLeastSquares_Response.
typedef struct linear_algebra_service__srv__SolveLeastSquares_Response__Sequence
{
  linear_algebra_service__srv__SolveLeastSquares_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} linear_algebra_service__srv__SolveLeastSquares_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__STRUCT_H_
