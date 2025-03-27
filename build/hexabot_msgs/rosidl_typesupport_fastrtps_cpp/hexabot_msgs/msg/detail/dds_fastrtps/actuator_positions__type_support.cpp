// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from hexabot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice
#include "hexabot_msgs/msg/detail/actuator_positions__rosidl_typesupport_fastrtps_cpp.hpp"
#include "hexabot_msgs/msg/detail/actuator_positions__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace hexabot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hexabot_msgs
cdr_serialize(
  const hexabot_msgs::msg::ActuatorPositions & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: actuator_1_position
  cdr << ros_message.actuator_1_position;
  // Member: actuator_2_position
  cdr << ros_message.actuator_2_position;
  // Member: actuator_3_position
  cdr << ros_message.actuator_3_position;
  // Member: actuator_4_position
  cdr << ros_message.actuator_4_position;
  // Member: actuator_5_position
  cdr << ros_message.actuator_5_position;
  // Member: actuator_6_position
  cdr << ros_message.actuator_6_position;
  // Member: servo_position
  cdr << ros_message.servo_position;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hexabot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  hexabot_msgs::msg::ActuatorPositions & ros_message)
{
  // Member: actuator_1_position
  cdr >> ros_message.actuator_1_position;

  // Member: actuator_2_position
  cdr >> ros_message.actuator_2_position;

  // Member: actuator_3_position
  cdr >> ros_message.actuator_3_position;

  // Member: actuator_4_position
  cdr >> ros_message.actuator_4_position;

  // Member: actuator_5_position
  cdr >> ros_message.actuator_5_position;

  // Member: actuator_6_position
  cdr >> ros_message.actuator_6_position;

  // Member: servo_position
  cdr >> ros_message.servo_position;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hexabot_msgs
get_serialized_size(
  const hexabot_msgs::msg::ActuatorPositions & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: actuator_1_position
  {
    size_t item_size = sizeof(ros_message.actuator_1_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actuator_2_position
  {
    size_t item_size = sizeof(ros_message.actuator_2_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actuator_3_position
  {
    size_t item_size = sizeof(ros_message.actuator_3_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actuator_4_position
  {
    size_t item_size = sizeof(ros_message.actuator_4_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actuator_5_position
  {
    size_t item_size = sizeof(ros_message.actuator_5_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actuator_6_position
  {
    size_t item_size = sizeof(ros_message.actuator_6_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: servo_position
  {
    size_t item_size = sizeof(ros_message.servo_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_hexabot_msgs
max_serialized_size_ActuatorPositions(
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


  // Member: actuator_1_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actuator_2_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actuator_3_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actuator_4_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actuator_5_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: actuator_6_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: servo_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = hexabot_msgs::msg::ActuatorPositions;
    is_plain =
      (
      offsetof(DataType, servo_position) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ActuatorPositions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const hexabot_msgs::msg::ActuatorPositions *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ActuatorPositions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<hexabot_msgs::msg::ActuatorPositions *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ActuatorPositions__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const hexabot_msgs::msg::ActuatorPositions *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ActuatorPositions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ActuatorPositions(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ActuatorPositions__callbacks = {
  "hexabot_msgs::msg",
  "ActuatorPositions",
  _ActuatorPositions__cdr_serialize,
  _ActuatorPositions__cdr_deserialize,
  _ActuatorPositions__get_serialized_size,
  _ActuatorPositions__max_serialized_size
};

static rosidl_message_type_support_t _ActuatorPositions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ActuatorPositions__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace hexabot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_hexabot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<hexabot_msgs::msg::ActuatorPositions>()
{
  return &hexabot_msgs::msg::typesupport_fastrtps_cpp::_ActuatorPositions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, hexabot_msgs, msg, ActuatorPositions)() {
  return &hexabot_msgs::msg::typesupport_fastrtps_cpp::_ActuatorPositions__handle;
}

#ifdef __cplusplus
}
#endif
