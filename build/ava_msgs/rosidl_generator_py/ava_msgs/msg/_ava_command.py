# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ava_msgs:msg/AvaCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvaCommand(type):
    """Metaclass of message 'AvaCommand'."""

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
                'ava_msgs.msg.AvaCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ava_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ava_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ava_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ava_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ava_command

            from ava_msgs.msg import AvaPose
            if AvaPose.__class__._TYPE_SUPPORT is None:
                AvaPose.__class__.__import_type_support__()

            from ava_msgs.msg import Velocity
            if Velocity.__class__._TYPE_SUPPORT is None:
                Velocity.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AvaCommand(metaclass=Metaclass_AvaCommand):
    """Message class 'AvaCommand'."""

    __slots__ = [
        '_state_msg',
        '_teleop_mode',
        '_velocity',
        '_pose',
    ]

    _fields_and_field_types = {
        'state_msg': 'string',
        'teleop_mode': 'string',
        'velocity': 'ava_msgs/Velocity',
        'pose': 'ava_msgs/AvaPose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ava_msgs', 'msg'], 'Velocity'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ava_msgs', 'msg'], 'AvaPose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state_msg = kwargs.get('state_msg', str())
        self.teleop_mode = kwargs.get('teleop_mode', str())
        from ava_msgs.msg import Velocity
        self.velocity = kwargs.get('velocity', Velocity())
        from ava_msgs.msg import AvaPose
        self.pose = kwargs.get('pose', AvaPose())

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
        if self.state_msg != other.state_msg:
            return False
        if self.teleop_mode != other.teleop_mode:
            return False
        if self.velocity != other.velocity:
            return False
        if self.pose != other.pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def state_msg(self):
        """Message field 'state_msg'."""
        return self._state_msg

    @state_msg.setter
    def state_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state_msg' field must be of type 'str'"
        self._state_msg = value

    @property
    def teleop_mode(self):
        """Message field 'teleop_mode'."""
        return self._teleop_mode

    @teleop_mode.setter
    def teleop_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'teleop_mode' field must be of type 'str'"
        self._teleop_mode = value

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from ava_msgs.msg import Velocity
            assert \
                isinstance(value, Velocity), \
                "The 'velocity' field must be a sub message of type 'Velocity'"
        self._velocity = value

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from ava_msgs.msg import AvaPose
            assert \
                isinstance(value, AvaPose), \
                "The 'pose' field must be a sub message of type 'AvaPose'"
        self._pose = value
