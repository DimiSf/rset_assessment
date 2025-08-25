// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from linear_algebra_service:srv/SolveLeastSquares.idl
// generated code does not contain a copyright notice

#ifndef LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__STRUCT_HPP_
#define LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__linear_algebra_service__srv__SolveLeastSquares_Request __attribute__((deprecated))
#else
# define DEPRECATED__linear_algebra_service__srv__SolveLeastSquares_Request __declspec(deprecated)
#endif

namespace linear_algebra_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SolveLeastSquares_Request_
{
  using Type = SolveLeastSquares_Request_<ContainerAllocator>;

  explicit SolveLeastSquares_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SolveLeastSquares_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _a_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _a_type a;
  using _b_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__linear_algebra_service__srv__SolveLeastSquares_Request
    std::shared_ptr<linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__linear_algebra_service__srv__SolveLeastSquares_Request
    std::shared_ptr<linear_algebra_service::srv::SolveLeastSquares_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolveLeastSquares_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolveLeastSquares_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolveLeastSquares_Request_

// alias to use template instance with default allocator
using SolveLeastSquares_Request =
  linear_algebra_service::srv::SolveLeastSquares_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace linear_algebra_service


#ifndef _WIN32
# define DEPRECATED__linear_algebra_service__srv__SolveLeastSquares_Response __attribute__((deprecated))
#else
# define DEPRECATED__linear_algebra_service__srv__SolveLeastSquares_Response __declspec(deprecated)
#endif

namespace linear_algebra_service
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SolveLeastSquares_Response_
{
  using Type = SolveLeastSquares_Response_<ContainerAllocator>;

  explicit SolveLeastSquares_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SolveLeastSquares_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_solution_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _x_solution_type x_solution;
  using _x_transform_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _x_transform_type x_transform;
  using _r_transform_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _r_transform_type r_transform;
  using _d_transform_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _d_transform_type d_transform;

  // setters for named parameter idiom
  Type & set__x_solution(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->x_solution = _arg;
    return *this;
  }
  Type & set__x_transform(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->x_transform = _arg;
    return *this;
  }
  Type & set__r_transform(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->r_transform = _arg;
    return *this;
  }
  Type & set__d_transform(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->d_transform = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__linear_algebra_service__srv__SolveLeastSquares_Response
    std::shared_ptr<linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__linear_algebra_service__srv__SolveLeastSquares_Response
    std::shared_ptr<linear_algebra_service::srv::SolveLeastSquares_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolveLeastSquares_Response_ & other) const
  {
    if (this->x_solution != other.x_solution) {
      return false;
    }
    if (this->x_transform != other.x_transform) {
      return false;
    }
    if (this->r_transform != other.r_transform) {
      return false;
    }
    if (this->d_transform != other.d_transform) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolveLeastSquares_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolveLeastSquares_Response_

// alias to use template instance with default allocator
using SolveLeastSquares_Response =
  linear_algebra_service::srv::SolveLeastSquares_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace linear_algebra_service

namespace linear_algebra_service
{

namespace srv
{

struct SolveLeastSquares
{
  using Request = linear_algebra_service::srv::SolveLeastSquares_Request;
  using Response = linear_algebra_service::srv::SolveLeastSquares_Response;
};

}  // namespace srv

}  // namespace linear_algebra_service

#endif  // LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__STRUCT_HPP_
