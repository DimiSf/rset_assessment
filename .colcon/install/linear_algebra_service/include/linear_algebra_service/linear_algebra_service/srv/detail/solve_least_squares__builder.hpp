// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from linear_algebra_service:srv/SolveLeastSquares.idl
// generated code does not contain a copyright notice

#ifndef LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__BUILDER_HPP_
#define LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "linear_algebra_service/srv/detail/solve_least_squares__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace linear_algebra_service
{

namespace srv
{

namespace builder
{

class Init_SolveLeastSquares_Request_b
{
public:
  explicit Init_SolveLeastSquares_Request_b(::linear_algebra_service::srv::SolveLeastSquares_Request & msg)
  : msg_(msg)
  {}
  ::linear_algebra_service::srv::SolveLeastSquares_Request b(::linear_algebra_service::srv::SolveLeastSquares_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::linear_algebra_service::srv::SolveLeastSquares_Request msg_;
};

class Init_SolveLeastSquares_Request_a
{
public:
  Init_SolveLeastSquares_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolveLeastSquares_Request_b a(::linear_algebra_service::srv::SolveLeastSquares_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_SolveLeastSquares_Request_b(msg_);
  }

private:
  ::linear_algebra_service::srv::SolveLeastSquares_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::linear_algebra_service::srv::SolveLeastSquares_Request>()
{
  return linear_algebra_service::srv::builder::Init_SolveLeastSquares_Request_a();
}

}  // namespace linear_algebra_service


namespace linear_algebra_service
{

namespace srv
{

namespace builder
{

class Init_SolveLeastSquares_Response_d_transform
{
public:
  explicit Init_SolveLeastSquares_Response_d_transform(::linear_algebra_service::srv::SolveLeastSquares_Response & msg)
  : msg_(msg)
  {}
  ::linear_algebra_service::srv::SolveLeastSquares_Response d_transform(::linear_algebra_service::srv::SolveLeastSquares_Response::_d_transform_type arg)
  {
    msg_.d_transform = std::move(arg);
    return std::move(msg_);
  }

private:
  ::linear_algebra_service::srv::SolveLeastSquares_Response msg_;
};

class Init_SolveLeastSquares_Response_r_transform
{
public:
  explicit Init_SolveLeastSquares_Response_r_transform(::linear_algebra_service::srv::SolveLeastSquares_Response & msg)
  : msg_(msg)
  {}
  Init_SolveLeastSquares_Response_d_transform r_transform(::linear_algebra_service::srv::SolveLeastSquares_Response::_r_transform_type arg)
  {
    msg_.r_transform = std::move(arg);
    return Init_SolveLeastSquares_Response_d_transform(msg_);
  }

private:
  ::linear_algebra_service::srv::SolveLeastSquares_Response msg_;
};

class Init_SolveLeastSquares_Response_x_transform
{
public:
  explicit Init_SolveLeastSquares_Response_x_transform(::linear_algebra_service::srv::SolveLeastSquares_Response & msg)
  : msg_(msg)
  {}
  Init_SolveLeastSquares_Response_r_transform x_transform(::linear_algebra_service::srv::SolveLeastSquares_Response::_x_transform_type arg)
  {
    msg_.x_transform = std::move(arg);
    return Init_SolveLeastSquares_Response_r_transform(msg_);
  }

private:
  ::linear_algebra_service::srv::SolveLeastSquares_Response msg_;
};

class Init_SolveLeastSquares_Response_x_solution
{
public:
  Init_SolveLeastSquares_Response_x_solution()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolveLeastSquares_Response_x_transform x_solution(::linear_algebra_service::srv::SolveLeastSquares_Response::_x_solution_type arg)
  {
    msg_.x_solution = std::move(arg);
    return Init_SolveLeastSquares_Response_x_transform(msg_);
  }

private:
  ::linear_algebra_service::srv::SolveLeastSquares_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::linear_algebra_service::srv::SolveLeastSquares_Response>()
{
  return linear_algebra_service::srv::builder::Init_SolveLeastSquares_Response_x_solution();
}

}  // namespace linear_algebra_service

#endif  // LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__BUILDER_HPP_
