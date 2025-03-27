// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from hexabot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice
#include "hexabot_msgs/msg/detail/actuator_positions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "hexabot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "hexabot_msgs/msg/detail/actuator_positions__struct.h"
#include "hexabot_msgs/msg/detail/actuator_positions__functions.h"
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


// forward declare type support functions


using _ActuatorPositions__ros_msg_type = hexabot_msgs__msg__ActuatorPositions;

static bool _ActuatorPositions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActuatorPositions__ros_msg_type * ros_message = static_cast<const _ActuatorPositions__ros_msg_type *>(untyped_ros_message);
  // Field name: actuator_1_position
  {
    cdr << ros_message->actuator_1_position;
  }

  // Field name: actuator_2_position
  {
    cdr << ros_message->actuator_2_position;
  }

  // Field name: actuator_3_position
  {
    cdr << ros_message->actuator_3_position;
  }

  // Field name: actuator_4_position
  {
    cdr << ros_message->actuator_4_position;
  }

  // Field name: actuator_5_position
  {
    cdr << ros_message->actuator_5_position;
  }

  // Field name: actuator_6_position
  {
    cdr << ros_message->actuator_6_position;
  }

  // Field name: servo_position
  {
    cdr << ros_message->servo_position;
  }

  return true;
}

static bool _ActuatorPositions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActuatorPositions__ros_msg_type * ros_message = static_cast<_ActuatorPositions__ros_msg_type *>(untyped_ros_message);
  // Field name: actuator_1_position
  {
    cdr >> ros_message->actuator_1_position;
  }

  // Field name: actuator_2_position
  {
    cdr >> ros_message->actuator_2_position;
  }

  // Field name: actuator_3_position
  {
    cdr >> ros_message->actuator_3_position;
  }

  // Field name: actuator_4_position
  {
    cdr >> ros_message->actuator_4_position;
  }

  // Field name: actuator_5_position
  {
    cdr >> ros_message->actuator_5_position;
  }

  // Field name: actuator_6_position
  {
    cdr >> ros_message->actuator_6_position;
  }

  // Field name: servo_position
  {
    cdr >> ros_message->servo_position;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hexabot_msgs
size_t get_serialized_size_hexabot_msgs__msg__ActuatorPositions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActuatorPositions__ros_msg_type * ros_message = static_cast<const _ActuatorPositions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name actuator_1_position
  {
    size_t item_size = sizeof(ros_message->actuator_1_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actuator_2_position
  {
    size_t item_size = sizeof(ros_message->actuator_2_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actuator_3_position
  {
    size_t item_size = sizeof(ros_message->actuator_3_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actuator_4_position
  {
    size_t item_size = sizeof(ros_message->actuator_4_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actuator_5_position
  {
    size_t item_size = sizeof(ros_message->actuator_5_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name actuator_6_position
  {
    size_t item_size = sizeof(ros_message->actuator_6_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name servo_position
  {
    size_t item_size = sizeof(ros_message->servo_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ActuatorPositions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_hexabot_msgs__msg__ActuatorPositions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_hexabot_msgs
size_t max_serialized_size_hexabot_msgs__msg__ActuatorPositions(
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

  // member: actuator_1_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actuator_2_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actuator_3_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actuator_4_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actuator_5_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: actuator_6_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: servo_position
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
    using DataType = hexabot_msgs__msg__ActuatorPositions;
    is_plain =
      (
      offsetof(DataType, servo_position) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ActuatorPositions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_hexabot_msgs__msg__ActuatorPositions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ActuatorPositions = {
  "hexabot_msgs::msg",
  "ActuatorPositions",
  _ActuatorPositions__cdr_serialize,
  _ActuatorPositions__cdr_deserialize,
  _ActuatorPositions__get_serialized_size,
  _ActuatorPositions__max_serialized_size
};

static rosidl_message_type_support_t _ActuatorPositions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActuatorPositions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, hexabot_msgs, msg, ActuatorPositions)() {
  return &_ActuatorPositions__type_support;
}

#if defined(__cplusplus)
}
#endif
