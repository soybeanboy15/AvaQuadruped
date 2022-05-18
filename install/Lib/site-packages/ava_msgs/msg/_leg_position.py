# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ava_msgs:msg\LegPosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'fl_leg_pos'
# Member 'fr_leg_pos'
# Member 'br_leg_pos'
# Member 'bl_leg_pos'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LegPosition(type):
    """Metaclass of message 'LegPosition'."""

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
                'ava_msgs.msg.LegPosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__leg_position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__leg_position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__leg_position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__leg_position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__leg_position

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LegPosition(metaclass=Metaclass_LegPosition):
    """Message class 'LegPosition'."""

    __slots__ = [
        '_fl_leg_pos',
        '_fr_leg_pos',
        '_br_leg_pos',
        '_bl_leg_pos',
    ]

    _fields_and_field_types = {
        'fl_leg_pos': 'sequence<float>',
        'fr_leg_pos': 'sequence<float>',
        'br_leg_pos': 'sequence<float>',
        'bl_leg_pos': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fl_leg_pos = array.array('f', kwargs.get('fl_leg_pos', []))
        self.fr_leg_pos = array.array('f', kwargs.get('fr_leg_pos', []))
        self.br_leg_pos = array.array('f', kwargs.get('br_leg_pos', []))
        self.bl_leg_pos = array.array('f', kwargs.get('bl_leg_pos', []))

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
        if self.fl_leg_pos != other.fl_leg_pos:
            return False
        if self.fr_leg_pos != other.fr_leg_pos:
            return False
        if self.br_leg_pos != other.br_leg_pos:
            return False
        if self.bl_leg_pos != other.bl_leg_pos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def fl_leg_pos(self):
        """Message field 'fl_leg_pos'."""
        return self._fl_leg_pos

    @fl_leg_pos.setter
    def fl_leg_pos(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'fl_leg_pos' array.array() must have the type code of 'f'"
            self._fl_leg_pos = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'fl_leg_pos' field must be a set or sequence and each value of type 'float'"
        self._fl_leg_pos = array.array('f', value)

    @property
    def fr_leg_pos(self):
        """Message field 'fr_leg_pos'."""
        return self._fr_leg_pos

    @fr_leg_pos.setter
    def fr_leg_pos(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'fr_leg_pos' array.array() must have the type code of 'f'"
            self._fr_leg_pos = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'fr_leg_pos' field must be a set or sequence and each value of type 'float'"
        self._fr_leg_pos = array.array('f', value)

    @property
    def br_leg_pos(self):
        """Message field 'br_leg_pos'."""
        return self._br_leg_pos

    @br_leg_pos.setter
    def br_leg_pos(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'br_leg_pos' array.array() must have the type code of 'f'"
            self._br_leg_pos = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'br_leg_pos' field must be a set or sequence and each value of type 'float'"
        self._br_leg_pos = array.array('f', value)

    @property
    def bl_leg_pos(self):
        """Message field 'bl_leg_pos'."""
        return self._bl_leg_pos

    @bl_leg_pos.setter
    def bl_leg_pos(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'bl_leg_pos' array.array() must have the type code of 'f'"
            self._bl_leg_pos = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'bl_leg_pos' field must be a set or sequence and each value of type 'float'"
        self._bl_leg_pos = array.array('f', value)
