# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ava_msgs:msg\Velocity.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Velocity(type):
    """Metaclass of message 'Velocity'."""

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
            module = import_type_support('ava_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ava_msgs.msg.Velocity')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__velocity
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__velocity
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__velocity
            cls._TYPE_SUPPORT = module.type_support_msg__msg__velocity
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__velocity

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Velocity(metaclass=Metaclass_Velocity):
    """Message class 'Velocity'."""

    __slots__ = [
        '_linear_x',
        '_linear_y',
        '_linear_z',
        '_angular_x',
        '_angular_y',
        '_angular_z',
    ]

    _fields_and_field_types = {
        'linear_x': 'double',
        'linear_y': 'double',
        'linear_z': 'double',
        'angular_x': 'double',
        'angular_y': 'double',
        'angular_z': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.linear_x = kwargs.get('linear_x', float())
        self.linear_y = kwargs.get('linear_y', float())
        self.linear_z = kwargs.get('linear_z', float())
        self.angular_x = kwargs.get('angular_x', float())
        self.angular_y = kwargs.get('angular_y', float())
        self.angular_z = kwargs.get('angular_z', float())

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
        if self.linear_x != other.linear_x:
            return False
        if self.linear_y != other.linear_y:
            return False
        if self.linear_z != other.linear_z:
            return False
        if self.angular_x != other.angular_x:
            return False
        if self.angular_y != other.angular_y:
            return False
        if self.angular_z != other.angular_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def linear_x(self):
        """Message field 'linear_x'."""
        return self._linear_x

    @linear_x.setter
    def linear_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'linear_x' field must be of type 'float'"
        self._linear_x = value

    @property
    def linear_y(self):
        """Message field 'linear_y'."""
        return self._linear_y

    @linear_y.setter
    def linear_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'linear_y' field must be of type 'float'"
        self._linear_y = value

    @property
    def linear_z(self):
        """Message field 'linear_z'."""
        return self._linear_z

    @linear_z.setter
    def linear_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'linear_z' field must be of type 'float'"
        self._linear_z = value

    @property
    def angular_x(self):
        """Message field 'angular_x'."""
        return self._angular_x

    @angular_x.setter
    def angular_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_x' field must be of type 'float'"
        self._angular_x = value

    @property
    def angular_y(self):
        """Message field 'angular_y'."""
        return self._angular_y

    @angular_y.setter
    def angular_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_y' field must be of type 'float'"
        self._angular_y = value

    @property
    def angular_z(self):
        """Message field 'angular_z'."""
        return self._angular_z

    @angular_z.setter
    def angular_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_z' field must be of type 'float'"
        self._angular_z = value
