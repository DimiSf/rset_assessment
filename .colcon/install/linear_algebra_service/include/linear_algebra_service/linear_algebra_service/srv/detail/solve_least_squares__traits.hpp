// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from linear_algebra_service:srv/SolveLeastSquares.idl
// generated code does not contain a copyright notice

#ifndef LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__TRAITS_HPP_
#define LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "linear_algebra_service/srv/detail/solve_least_squares__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace linear_algebra_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const SolveLeastSquares_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    if (msg.a.size() == 0) {
      out << "a: []";
    } else {
      out << "a: [";
      size_t pending_items = msg.a.size();
      for (auto item : msg.a) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: b
  {
    if (msg.b.size() == 0) {
      out << "b: []";
    } else {
      out << "b: [";
      size_t pending_items = msg.b.size();
      for (auto item : msg.b) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolveLeastSquares_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.a.size() == 0) {
      out << "a: []\n";
    } else {
      out << "a:\n";
      for (auto item : msg.a) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.b.size() == 0) {
      out << "b: []\n";
    } else {
      out << "b:\n";
      for (auto item : msg.b) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolveLeastSquares_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace linear_algebra_service

namespace rosidl_generator_traits
{

[[deprecated("use linear_algebra_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const linear_algebra_service::srv::SolveLeastSquares_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  linear_algebra_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use linear_algebra_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const linear_algebra_service::srv::SolveLeastSquares_Request & msg)
{
  return linear_algebra_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<linear_algebra_service::srv::SolveLeastSquares_Request>()
{
  return "linear_algebra_service::srv::SolveLeastSquares_Request";
}

template<>
inline const char * name<linear_algebra_service::srv::SolveLeastSquares_Request>()
{
  return "linear_algebra_service/srv/SolveLeastSquares_Request";
}

template<>
struct has_fixed_size<linear_algebra_service::srv::SolveLeastSquares_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<linear_algebra_service::srv::SolveLeastSquares_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<linear_algebra_service::srv::SolveLeastSquares_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace linear_algebra_service
{

namespace srv
{

inline void to_flow_style_yaml(
  const SolveLeastSquares_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_solution
  {
    if (msg.x_solution.size() == 0) {
      out << "x_solution: []";
    } else {
      out << "x_solution: [";
      size_t pending_items = msg.x_solution.size();
      for (auto item : msg.x_solution) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x_transform
  {
    if (msg.x_transform.size() == 0) {
      out << "x_transform: []";
    } else {
      out << "x_transform: [";
      size_t pending_items = msg.x_transform.size();
      for (auto item : msg.x_transform) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: r_transform
  {
    if (msg.r_transform.size() == 0) {
      out << "r_transform: []";
    } else {
      out << "r_transform: [";
      size_t pending_items = msg.r_transform.size();
      for (auto item : msg.r_transform) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: d_transform
  {
    if (msg.d_transform.size() == 0) {
      out << "d_transform: []";
    } else {
      out << "d_transform: [";
      size_t pending_items = msg.d_transform.size();
      for (auto item : msg.d_transform) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolveLeastSquares_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_solution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_solution.size() == 0) {
      out << "x_solution: []\n";
    } else {
      out << "x_solution:\n";
      for (auto item : msg.x_solution) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x_transform.size() == 0) {
      out << "x_transform: []\n";
    } else {
      out << "x_transform:\n";
      for (auto item : msg.x_transform) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: r_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.r_transform.size() == 0) {
      out << "r_transform: []\n";
    } else {
      out << "r_transform:\n";
      for (auto item : msg.r_transform) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: d_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.d_transform.size() == 0) {
      out << "d_transform: []\n";
    } else {
      out << "d_transform:\n";
      for (auto item : msg.d_transform) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolveLeastSquares_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace linear_algebra_service

namespace rosidl_generator_traits
{

[[deprecated("use linear_algebra_service::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const linear_algebra_service::srv::SolveLeastSquares_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  linear_algebra_service::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use linear_algebra_service::srv::to_yaml() instead")]]
inline std::string to_yaml(const linear_algebra_service::srv::SolveLeastSquares_Response & msg)
{
  return linear_algebra_service::srv::to_yaml(msg);
}

template<>
inline const char * data_type<linear_algebra_service::srv::SolveLeastSquares_Response>()
{
  return "linear_algebra_service::srv::SolveLeastSquares_Response";
}

template<>
inline const char * name<linear_algebra_service::srv::SolveLeastSquares_Response>()
{
  return "linear_algebra_service/srv/SolveLeastSquares_Response";
}

template<>
struct has_fixed_size<linear_algebra_service::srv::SolveLeastSquares_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<linear_algebra_service::srv::SolveLeastSquares_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<linear_algebra_service::srv::SolveLeastSquares_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<linear_algebra_service::srv::SolveLeastSquares>()
{
  return "linear_algebra_service::srv::SolveLeastSquares";
}

template<>
inline const char * name<linear_algebra_service::srv::SolveLeastSquares>()
{
  return "linear_algebra_service/srv/SolveLeastSquares";
}

template<>
struct has_fixed_size<linear_algebra_service::srv::SolveLeastSquares>
  : std::integral_constant<
    bool,
    has_fixed_size<linear_algebra_service::srv::SolveLeastSquares_Request>::value &&
    has_fixed_size<linear_algebra_service::srv::SolveLeastSquares_Response>::value
  >
{
};

template<>
struct has_bounded_size<linear_algebra_service::srv::SolveLeastSquares>
  : std::integral_constant<
    bool,
    has_bounded_size<linear_algebra_service::srv::SolveLeastSquares_Request>::value &&
    has_bounded_size<linear_algebra_service::srv::SolveLeastSquares_Response>::value
  >
{
};

template<>
struct is_service<linear_algebra_service::srv::SolveLeastSquares>
  : std::true_type
{
};

template<>
struct is_service_request<linear_algebra_service::srv::SolveLeastSquares_Request>
  : std::true_type
{
};

template<>
struct is_service_response<linear_algebra_service::srv::SolveLeastSquares_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LINEAR_ALGEBRA_SERVICE__SRV__DETAIL__SOLVE_LEAST_SQUARES__TRAITS_HPP_
