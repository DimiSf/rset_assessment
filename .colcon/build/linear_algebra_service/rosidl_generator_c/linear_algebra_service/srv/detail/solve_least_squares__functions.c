// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from linear_algebra_service:srv/SolveLeastSquares.idl
// generated code does not contain a copyright notice
#include "linear_algebra_service/srv/detail/solve_least_squares__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `a`
// Member `b`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
linear_algebra_service__srv__SolveLeastSquares_Request__init(linear_algebra_service__srv__SolveLeastSquares_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  if (!rosidl_runtime_c__double__Sequence__init(&msg->a, 0)) {
    linear_algebra_service__srv__SolveLeastSquares_Request__fini(msg);
    return false;
  }
  // b
  if (!rosidl_runtime_c__double__Sequence__init(&msg->b, 0)) {
    linear_algebra_service__srv__SolveLeastSquares_Request__fini(msg);
    return false;
  }
  return true;
}

void
linear_algebra_service__srv__SolveLeastSquares_Request__fini(linear_algebra_service__srv__SolveLeastSquares_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  rosidl_runtime_c__double__Sequence__fini(&msg->a);
  // b
  rosidl_runtime_c__double__Sequence__fini(&msg->b);
}

bool
linear_algebra_service__srv__SolveLeastSquares_Request__are_equal(const linear_algebra_service__srv__SolveLeastSquares_Request * lhs, const linear_algebra_service__srv__SolveLeastSquares_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->a), &(rhs->a)))
  {
    return false;
  }
  // b
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->b), &(rhs->b)))
  {
    return false;
  }
  return true;
}

bool
linear_algebra_service__srv__SolveLeastSquares_Request__copy(
  const linear_algebra_service__srv__SolveLeastSquares_Request * input,
  linear_algebra_service__srv__SolveLeastSquares_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->a), &(output->a)))
  {
    return false;
  }
  // b
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->b), &(output->b)))
  {
    return false;
  }
  return true;
}

linear_algebra_service__srv__SolveLeastSquares_Request *
linear_algebra_service__srv__SolveLeastSquares_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  linear_algebra_service__srv__SolveLeastSquares_Request * msg = (linear_algebra_service__srv__SolveLeastSquares_Request *)allocator.allocate(sizeof(linear_algebra_service__srv__SolveLeastSquares_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(linear_algebra_service__srv__SolveLeastSquares_Request));
  bool success = linear_algebra_service__srv__SolveLeastSquares_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
linear_algebra_service__srv__SolveLeastSquares_Request__destroy(linear_algebra_service__srv__SolveLeastSquares_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    linear_algebra_service__srv__SolveLeastSquares_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
linear_algebra_service__srv__SolveLeastSquares_Request__Sequence__init(linear_algebra_service__srv__SolveLeastSquares_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  linear_algebra_service__srv__SolveLeastSquares_Request * data = NULL;

  if (size) {
    data = (linear_algebra_service__srv__SolveLeastSquares_Request *)allocator.zero_allocate(size, sizeof(linear_algebra_service__srv__SolveLeastSquares_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = linear_algebra_service__srv__SolveLeastSquares_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        linear_algebra_service__srv__SolveLeastSquares_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
linear_algebra_service__srv__SolveLeastSquares_Request__Sequence__fini(linear_algebra_service__srv__SolveLeastSquares_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      linear_algebra_service__srv__SolveLeastSquares_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

linear_algebra_service__srv__SolveLeastSquares_Request__Sequence *
linear_algebra_service__srv__SolveLeastSquares_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  linear_algebra_service__srv__SolveLeastSquares_Request__Sequence * array = (linear_algebra_service__srv__SolveLeastSquares_Request__Sequence *)allocator.allocate(sizeof(linear_algebra_service__srv__SolveLeastSquares_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = linear_algebra_service__srv__SolveLeastSquares_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
linear_algebra_service__srv__SolveLeastSquares_Request__Sequence__destroy(linear_algebra_service__srv__SolveLeastSquares_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    linear_algebra_service__srv__SolveLeastSquares_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
linear_algebra_service__srv__SolveLeastSquares_Request__Sequence__are_equal(const linear_algebra_service__srv__SolveLeastSquares_Request__Sequence * lhs, const linear_algebra_service__srv__SolveLeastSquares_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!linear_algebra_service__srv__SolveLeastSquares_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
linear_algebra_service__srv__SolveLeastSquares_Request__Sequence__copy(
  const linear_algebra_service__srv__SolveLeastSquares_Request__Sequence * input,
  linear_algebra_service__srv__SolveLeastSquares_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(linear_algebra_service__srv__SolveLeastSquares_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    linear_algebra_service__srv__SolveLeastSquares_Request * data =
      (linear_algebra_service__srv__SolveLeastSquares_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!linear_algebra_service__srv__SolveLeastSquares_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          linear_algebra_service__srv__SolveLeastSquares_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!linear_algebra_service__srv__SolveLeastSquares_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `x_solution`
// Member `x_transform`
// Member `r_transform`
// Member `d_transform`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
linear_algebra_service__srv__SolveLeastSquares_Response__init(linear_algebra_service__srv__SolveLeastSquares_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x_solution
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x_solution, 0)) {
    linear_algebra_service__srv__SolveLeastSquares_Response__fini(msg);
    return false;
  }
  // x_transform
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x_transform, 0)) {
    linear_algebra_service__srv__SolveLeastSquares_Response__fini(msg);
    return false;
  }
  // r_transform
  if (!rosidl_runtime_c__double__Sequence__init(&msg->r_transform, 0)) {
    linear_algebra_service__srv__SolveLeastSquares_Response__fini(msg);
    return false;
  }
  // d_transform
  if (!rosidl_runtime_c__double__Sequence__init(&msg->d_transform, 0)) {
    linear_algebra_service__srv__SolveLeastSquares_Response__fini(msg);
    return false;
  }
  return true;
}

void
linear_algebra_service__srv__SolveLeastSquares_Response__fini(linear_algebra_service__srv__SolveLeastSquares_Response * msg)
{
  if (!msg) {
    return;
  }
  // x_solution
  rosidl_runtime_c__double__Sequence__fini(&msg->x_solution);
  // x_transform
  rosidl_runtime_c__double__Sequence__fini(&msg->x_transform);
  // r_transform
  rosidl_runtime_c__double__Sequence__fini(&msg->r_transform);
  // d_transform
  rosidl_runtime_c__double__Sequence__fini(&msg->d_transform);
}

bool
linear_algebra_service__srv__SolveLeastSquares_Response__are_equal(const linear_algebra_service__srv__SolveLeastSquares_Response * lhs, const linear_algebra_service__srv__SolveLeastSquares_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_solution
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->x_solution), &(rhs->x_solution)))
  {
    return false;
  }
  // x_transform
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->x_transform), &(rhs->x_transform)))
  {
    return false;
  }
  // r_transform
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->r_transform), &(rhs->r_transform)))
  {
    return false;
  }
  // d_transform
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->d_transform), &(rhs->d_transform)))
  {
    return false;
  }
  return true;
}

bool
linear_algebra_service__srv__SolveLeastSquares_Response__copy(
  const linear_algebra_service__srv__SolveLeastSquares_Response * input,
  linear_algebra_service__srv__SolveLeastSquares_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x_solution
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->x_solution), &(output->x_solution)))
  {
    return false;
  }
  // x_transform
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->x_transform), &(output->x_transform)))
  {
    return false;
  }
  // r_transform
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->r_transform), &(output->r_transform)))
  {
    return false;
  }
  // d_transform
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->d_transform), &(output->d_transform)))
  {
    return false;
  }
  return true;
}

linear_algebra_service__srv__SolveLeastSquares_Response *
linear_algebra_service__srv__SolveLeastSquares_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  linear_algebra_service__srv__SolveLeastSquares_Response * msg = (linear_algebra_service__srv__SolveLeastSquares_Response *)allocator.allocate(sizeof(linear_algebra_service__srv__SolveLeastSquares_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(linear_algebra_service__srv__SolveLeastSquares_Response));
  bool success = linear_algebra_service__srv__SolveLeastSquares_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
linear_algebra_service__srv__SolveLeastSquares_Response__destroy(linear_algebra_service__srv__SolveLeastSquares_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    linear_algebra_service__srv__SolveLeastSquares_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
linear_algebra_service__srv__SolveLeastSquares_Response__Sequence__init(linear_algebra_service__srv__SolveLeastSquares_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  linear_algebra_service__srv__SolveLeastSquares_Response * data = NULL;

  if (size) {
    data = (linear_algebra_service__srv__SolveLeastSquares_Response *)allocator.zero_allocate(size, sizeof(linear_algebra_service__srv__SolveLeastSquares_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = linear_algebra_service__srv__SolveLeastSquares_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        linear_algebra_service__srv__SolveLeastSquares_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
linear_algebra_service__srv__SolveLeastSquares_Response__Sequence__fini(linear_algebra_service__srv__SolveLeastSquares_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      linear_algebra_service__srv__SolveLeastSquares_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

linear_algebra_service__srv__SolveLeastSquares_Response__Sequence *
linear_algebra_service__srv__SolveLeastSquares_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  linear_algebra_service__srv__SolveLeastSquares_Response__Sequence * array = (linear_algebra_service__srv__SolveLeastSquares_Response__Sequence *)allocator.allocate(sizeof(linear_algebra_service__srv__SolveLeastSquares_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = linear_algebra_service__srv__SolveLeastSquares_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
linear_algebra_service__srv__SolveLeastSquares_Response__Sequence__destroy(linear_algebra_service__srv__SolveLeastSquares_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    linear_algebra_service__srv__SolveLeastSquares_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
linear_algebra_service__srv__SolveLeastSquares_Response__Sequence__are_equal(const linear_algebra_service__srv__SolveLeastSquares_Response__Sequence * lhs, const linear_algebra_service__srv__SolveLeastSquares_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!linear_algebra_service__srv__SolveLeastSquares_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
linear_algebra_service__srv__SolveLeastSquares_Response__Sequence__copy(
  const linear_algebra_service__srv__SolveLeastSquares_Response__Sequence * input,
  linear_algebra_service__srv__SolveLeastSquares_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(linear_algebra_service__srv__SolveLeastSquares_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    linear_algebra_service__srv__SolveLeastSquares_Response * data =
      (linear_algebra_service__srv__SolveLeastSquares_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!linear_algebra_service__srv__SolveLeastSquares_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          linear_algebra_service__srv__SolveLeastSquares_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!linear_algebra_service__srv__SolveLeastSquares_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
