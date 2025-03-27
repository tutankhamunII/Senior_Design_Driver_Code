# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hexabot_msgs:msg/ActuatorPositions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActuatorPositions(type):
    """Metaclass of message 'ActuatorPositions'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hexabot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hexabot_msgs.msg.ActuatorPositions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actuator_positions
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actuator_positions
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actuator_positions
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actuator_positions
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actuator_positions

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActuatorPositions(metaclass=Metaclass_ActuatorPositions):
    """Message class 'ActuatorPositions'."""

    __slots__ = [
        '_actuator_1_position',
        '_actuator_2_position',
        '_actuator_3_position',
        '_actuator_4_position',
        '_actuator_5_position',
        '_actuator_6_position',
        '_servo_position',
    ]

    _fields_and_field_types = {
        'actuator_1_position': 'float',
        'actuator_2_position': 'float',
        'actuator_3_position': 'float',
        'actuator_4_position': 'float',
        'actuator_5_position': 'float',
        'actuator_6_position': 'float',
        'servo_position': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.actuator_1_position = kwargs.get('actuator_1_position', float())
        self.actuator_2_position = kwargs.get('actuator_2_position', float())
        self.actuator_3_position = kwargs.get('actuator_3_position', float())
        self.actuator_4_position = kwargs.get('actuator_4_position', float())
        self.actuator_5_position = kwargs.get('actuator_5_position', float())
        self.actuator_6_position = kwargs.get('actuator_6_position', float())
        self.servo_position = kwargs.get('servo_position', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.actuator_1_position != other.actuator_1_position:
            return False
        if self.actuator_2_position != other.actuator_2_position:
            return False
        if self.actuator_3_position != other.actuator_3_position:
            return False
        if self.actuator_4_position != other.actuator_4_position:
            return False
        if self.actuator_5_position != other.actuator_5_position:
            return False
        if self.actuator_6_position != other.actuator_6_position:
            return False
        if self.servo_position != other.servo_position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def actuator_1_position(self):
        """Message field 'actuator_1_position'."""
        return self._actuator_1_position

    @actuator_1_position.setter
    def actuator_1_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'actuator_1_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'actuator_1_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._actuator_1_position = value

    @builtins.property
    def actuator_2_position(self):
        """Message field 'actuator_2_position'."""
        return self._actuator_2_position

    @actuator_2_position.setter
    def actuator_2_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'actuator_2_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'actuator_2_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._actuator_2_position = value

    @builtins.property
    def actuator_3_position(self):
        """Message field 'actuator_3_position'."""
        return self._actuator_3_position

    @actuator_3_position.setter
    def actuator_3_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'actuator_3_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'actuator_3_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._actuator_3_position = value

    @builtins.property
    def actuator_4_position(self):
        """Message field 'actuator_4_position'."""
        return self._actuator_4_position

    @actuator_4_position.setter
    def actuator_4_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'actuator_4_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'actuator_4_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._actuator_4_position = value

    @builtins.property
    def actuator_5_position(self):
        """Message field 'actuator_5_position'."""
        return self._actuator_5_position

    @actuator_5_position.setter
    def actuator_5_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'actuator_5_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'actuator_5_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._actuator_5_position = value

    @builtins.property
    def actuator_6_position(self):
        """Message field 'actuator_6_position'."""
        return self._actuator_6_position

    @actuator_6_position.setter
    def actuator_6_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'actuator_6_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'actuator_6_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._actuator_6_position = value

    @builtins.property
    def servo_position(self):
        """Message field 'servo_position'."""
        return self._servo_position

    @servo_position.setter
    def servo_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'servo_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'servo_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._servo_position = value
