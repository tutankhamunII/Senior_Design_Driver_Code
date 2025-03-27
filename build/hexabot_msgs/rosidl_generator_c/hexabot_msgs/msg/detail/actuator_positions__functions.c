// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hexabot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice
#include "hexabot_msgs/msg/detail/actuator_positions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
hexabot_msgs__msg__ActuatorPositions__init(hexabot_msgs__msg__ActuatorPositions * msg)
{
  if (!msg) {
    return false;
  }
  // actuator_1_position
  // actuator_2_position
  // actuator_3_position
  // actuator_4_position
  // actuator_5_position
  // actuator_6_position
  // servo_position
  return true;
}

void
hexabot_msgs__msg__ActuatorPositions__fini(hexabot_msgs__msg__ActuatorPositions * msg)
{
  if (!msg) {
    return;
  }
  // actuator_1_position
  // actuator_2_position
  // actuator_3_position
  // actuator_4_position
  // actuator_5_position
  // actuator_6_position
  // servo_position
}

bool
hexabot_msgs__msg__ActuatorPositions__are_equal(const hexabot_msgs__msg__ActuatorPositions * lhs, const hexabot_msgs__msg__ActuatorPositions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // actuator_1_position
  if (lhs->actuator_1_position != rhs->actuator_1_position) {
    return false;
  }
  // actuator_2_position
  if (lhs->actuator_2_position != rhs->actuator_2_position) {
    return false;
  }
  // actuator_3_position
  if (lhs->actuator_3_position != rhs->actuator_3_position) {
    return false;
  }
  // actuator_4_position
  if (lhs->actuator_4_position != rhs->actuator_4_position) {
    return false;
  }
  // actuator_5_position
  if (lhs->actuator_5_position != rhs->actuator_5_position) {
    return false;
  }
  // actuator_6_position
  if (lhs->actuator_6_position != rhs->actuator_6_position) {
    return false;
  }
  // servo_position
  if (lhs->servo_position != rhs->servo_position) {
    return false;
  }
  return true;
}

bool
hexabot_msgs__msg__ActuatorPositions__copy(
  const hexabot_msgs__msg__ActuatorPositions * input,
  hexabot_msgs__msg__ActuatorPositions * output)
{
  if (!input || !output) {
    return false;
  }
  // actuator_1_position
  output->actuator_1_position = input->actuator_1_position;
  // actuator_2_position
  output->actuator_2_position = input->actuator_2_position;
  // actuator_3_position
  output->actuator_3_position = input->actuator_3_position;
  // actuator_4_position
  output->actuator_4_position = input->actuator_4_position;
  // actuator_5_position
  output->actuator_5_position = input->actuator_5_position;
  // actuator_6_position
  output->actuator_6_position = input->actuator_6_position;
  // servo_position
  output->servo_position = input->servo_position;
  return true;
}

hexabot_msgs__msg__ActuatorPositions *
hexabot_msgs__msg__ActuatorPositions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hexabot_msgs__msg__ActuatorPositions * msg = (hexabot_msgs__msg__ActuatorPositions *)allocator.allocate(sizeof(hexabot_msgs__msg__ActuatorPositions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hexabot_msgs__msg__ActuatorPositions));
  bool success = hexabot_msgs__msg__ActuatorPositions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hexabot_msgs__msg__ActuatorPositions__destroy(hexabot_msgs__msg__ActuatorPositions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hexabot_msgs__msg__ActuatorPositions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hexabot_msgs__msg__ActuatorPositions__Sequence__init(hexabot_msgs__msg__ActuatorPositions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hexabot_msgs__msg__ActuatorPositions * data = NULL;

  if (size) {
    data = (hexabot_msgs__msg__ActuatorPositions *)allocator.zero_allocate(size, sizeof(hexabot_msgs__msg__ActuatorPositions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hexabot_msgs__msg__ActuatorPositions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hexabot_msgs__msg__ActuatorPositions__fini(&data[i - 1]);
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
hexabot_msgs__msg__ActuatorPositions__Sequence__fini(hexabot_msgs__msg__ActuatorPositions__Sequence * array)
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
      hexabot_msgs__msg__ActuatorPositions__fini(&array->data[i]);
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

hexabot_msgs__msg__ActuatorPositions__Sequence *
hexabot_msgs__msg__ActuatorPositions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hexabot_msgs__msg__ActuatorPositions__Sequence * array = (hexabot_msgs__msg__ActuatorPositions__Sequence *)allocator.allocate(sizeof(hexabot_msgs__msg__ActuatorPositions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hexabot_msgs__msg__ActuatorPositions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hexabot_msgs__msg__ActuatorPositions__Sequence__destroy(hexabot_msgs__msg__ActuatorPositions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hexabot_msgs__msg__ActuatorPositions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hexabot_msgs__msg__ActuatorPositions__Sequence__are_equal(const hexabot_msgs__msg__ActuatorPositions__Sequence * lhs, const hexabot_msgs__msg__ActuatorPositions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hexabot_msgs__msg__ActuatorPositions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hexabot_msgs__msg__ActuatorPositions__Sequence__copy(
  const hexabot_msgs__msg__ActuatorPositions__Sequence * input,
  hexabot_msgs__msg__ActuatorPositions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hexabot_msgs__msg__ActuatorPositions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hexabot_msgs__msg__ActuatorPositions * data =
      (hexabot_msgs__msg__ActuatorPositions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hexabot_msgs__msg__ActuatorPositions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hexabot_msgs__msg__ActuatorPositions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hexabot_msgs__msg__ActuatorPositions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
