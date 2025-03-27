// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from hexabot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice

#ifndef HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__STRUCT_HPP_
#define HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__hexabot_msgs__msg__ActuatorPositions __attribute__((deprecated))
#else
# define DEPRECATED__hexabot_msgs__msg__ActuatorPositions __declspec(deprecated)
#endif

namespace hexabot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorPositions_
{
  using Type = ActuatorPositions_<ContainerAllocator>;

  explicit ActuatorPositions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_1_position = 0.0f;
      this->actuator_2_position = 0.0f;
      this->actuator_3_position = 0.0f;
      this->actuator_4_position = 0.0f;
      this->actuator_5_position = 0.0f;
      this->actuator_6_position = 0.0f;
      this->servo_position = 0.0f;
    }
  }

  explicit ActuatorPositions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actuator_1_position = 0.0f;
      this->actuator_2_position = 0.0f;
      this->actuator_3_position = 0.0f;
      this->actuator_4_position = 0.0f;
      this->actuator_5_position = 0.0f;
      this->actuator_6_position = 0.0f;
      this->servo_position = 0.0f;
    }
  }

  // field types and members
  using _actuator_1_position_type =
    float;
  _actuator_1_position_type actuator_1_position;
  using _actuator_2_position_type =
    float;
  _actuator_2_position_type actuator_2_position;
  using _actuator_3_position_type =
    float;
  _actuator_3_position_type actuator_3_position;
  using _actuator_4_position_type =
    float;
  _actuator_4_position_type actuator_4_position;
  using _actuator_5_position_type =
    float;
  _actuator_5_position_type actuator_5_position;
  using _actuator_6_position_type =
    float;
  _actuator_6_position_type actuator_6_position;
  using _servo_position_type =
    float;
  _servo_position_type servo_position;

  // setters for named parameter idiom
  Type & set__actuator_1_position(
    const float & _arg)
  {
    this->actuator_1_position = _arg;
    return *this;
  }
  Type & set__actuator_2_position(
    const float & _arg)
  {
    this->actuator_2_position = _arg;
    return *this;
  }
  Type & set__actuator_3_position(
    const float & _arg)
  {
    this->actuator_3_position = _arg;
    return *this;
  }
  Type & set__actuator_4_position(
    const float & _arg)
  {
    this->actuator_4_position = _arg;
    return *this;
  }
  Type & set__actuator_5_position(
    const float & _arg)
  {
    this->actuator_5_position = _arg;
    return *this;
  }
  Type & set__actuator_6_position(
    const float & _arg)
  {
    this->actuator_6_position = _arg;
    return *this;
  }
  Type & set__servo_position(
    const float & _arg)
  {
    this->servo_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator> *;
  using ConstRawPtr =
    const hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__hexabot_msgs__msg__ActuatorPositions
    std::shared_ptr<hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__hexabot_msgs__msg__ActuatorPositions
    std::shared_ptr<hexabot_msgs::msg::ActuatorPositions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorPositions_ & other) const
  {
    if (this->actuator_1_position != other.actuator_1_position) {
      return false;
    }
    if (this->actuator_2_position != other.actuator_2_position) {
      return false;
    }
    if (this->actuator_3_position != other.actuator_3_position) {
      return false;
    }
    if (this->actuator_4_position != other.actuator_4_position) {
      return false;
    }
    if (this->actuator_5_position != other.actuator_5_position) {
      return false;
    }
    if (this->actuator_6_position != other.actuator_6_position) {
      return false;
    }
    if (this->servo_position != other.servo_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorPositions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorPositions_

// alias to use template instance with default allocator
using ActuatorPositions =
  hexabot_msgs::msg::ActuatorPositions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace hexabot_msgs

#endif  // HEXABOT_MSGS__MSG__DETAIL__ACTUATOR_POSITIONS__STRUCT_HPP_
