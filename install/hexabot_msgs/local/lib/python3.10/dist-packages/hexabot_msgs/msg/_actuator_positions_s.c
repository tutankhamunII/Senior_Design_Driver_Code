// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from hexabot_msgs:msg/ActuatorPositions.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "hexabot_msgs/msg/detail/actuator_positions__struct.h"
#include "hexabot_msgs/msg/detail/actuator_positions__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool hexabot_msgs__msg__actuator_positions__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("hexabot_msgs.msg._actuator_positions.ActuatorPositions", full_classname_dest, 54) == 0);
  }
  hexabot_msgs__msg__ActuatorPositions * ros_message = _ros_message;
  {  // actuator_1_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuator_1_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actuator_1_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actuator_2_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuator_2_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actuator_2_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actuator_3_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuator_3_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actuator_3_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actuator_4_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuator_4_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actuator_4_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actuator_5_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuator_5_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actuator_5_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actuator_6_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "actuator_6_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actuator_6_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // servo_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "servo_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->servo_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * hexabot_msgs__msg__actuator_positions__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ActuatorPositions */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("hexabot_msgs.msg._actuator_positions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ActuatorPositions");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  hexabot_msgs__msg__ActuatorPositions * ros_message = (hexabot_msgs__msg__ActuatorPositions *)raw_ros_message;
  {  // actuator_1_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actuator_1_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuator_1_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actuator_2_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actuator_2_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuator_2_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actuator_3_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actuator_3_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuator_3_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actuator_4_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actuator_4_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuator_4_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actuator_5_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actuator_5_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuator_5_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actuator_6_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actuator_6_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actuator_6_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // servo_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->servo_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "servo_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
