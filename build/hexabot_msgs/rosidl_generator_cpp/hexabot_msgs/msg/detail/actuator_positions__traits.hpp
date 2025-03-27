// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hexabot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#ifndef HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__TRAITS_HPP_
#define HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hexabot_msgs/msg/detail/actuator_positions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hexabot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ActuatorPositions & msg,
  std::ostream & out)
{
  out << "{";
  // member: actuator_1_position
  {
    out << "actuator_1_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_1_position, out);
    out << ", ";
  }

  // member: actuator_2_position
  {
    out << "actuator_2_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_2_position, out);
    out << ", ";
  }

  // member: actuator_3_position
  {
    out << "actuator_3_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_3_position, out);
    out << ", ";
  }

  // member: actuator_4_position
  {
    out << "actuator_4_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_4_position, out);
    out << ", ";
  }

  // member: actuator_5_position
  {
    out << "actuator_5_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_5_position, out);
    out << ", ";
  }

  // member: actuator_6_position
  {
    out << "actuator_6_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_6_position, out);
    out << ", ";
  }

  // member: servo_position
  {
    out << "servo_position: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActuatorPositions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: actuator_1_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator_1_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_1_position, out);
    out << "\n";
  }

  // member: actuator_2_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator_2_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_2_position, out);
    out << "\n";
  }

  // member: actuator_3_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator_3_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_3_position, out);
    out << "\n";
  }

  // member: actuator_4_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator_4_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_4_position, out);
    out << "\n";
  }

  // member: actuator_5_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator_5_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_5_position, out);
    out << "\n";
  }

  // member: actuator_6_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator_6_position: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_6_position, out);
    out << "\n";
  }

  // member: servo_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_position: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActuatorPositions & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hexabot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hexabot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hexabot_msgs::msg::ActuatorPositions & msg,
  std::ostream & out, size_t indentation = 0)
{
  hexabot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hexabot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hexabot_msgs::msg::ActuatorPositions & msg)
{
  return hexabot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hexabot_msgs::msg::ActuatorPositions>()
{
  return "hexabot_msgs::msg::ActuatorPositions";
}

template<>
inline const char * name<hexabot_msgs::msg::ActuatorPositions>()
{
  return "hexabot_msgs/msg/ActuatorPositions";
}

template<>
struct has_fixed_size<hexabot_msgs::msg::ActuatorPositions>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hexabot_msgs::msg::ActuatorPositions>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hexabot_msgs::msg::ActuatorPositions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__TRAITS_HPP_
