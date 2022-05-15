# generated from rosidl_generator_py/resource/_idl.py.em
# with input from slam_toolbox:srv\DeserializePoseGraph.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeserializePoseGraph_Request(type):
    """Metaclass of message 'DeserializePoseGraph_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNSET': 0,
        'START_AT_FIRST_NODE': 1,
        'START_AT_GIVEN_POSE': 2,
        'LOCALIZE_AT_POSE': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('slam_toolbox')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'slam_toolbox.srv.DeserializePoseGraph_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__deserialize_pose_graph__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__deserialize_pose_graph__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__deserialize_pose_graph__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__deserialize_pose_graph__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__deserialize_pose_graph__request

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNSET': cls.__constants['UNSET'],
            'START_AT_FIRST_NODE': cls.__constants['START_AT_FIRST_NODE'],
            'START_AT_GIVEN_POSE': cls.__constants['START_AT_GIVEN_POSE'],
            'LOCALIZE_AT_POSE': cls.__constants['LOCALIZE_AT_POSE'],
        }

    @property
    def UNSET(self):
        """Message constant 'UNSET'."""
        return Metaclass_DeserializePoseGraph_Request.__constants['UNSET']

    @property
    def START_AT_FIRST_NODE(self):
        """Message constant 'START_AT_FIRST_NODE'."""
        return Metaclass_DeserializePoseGraph_Request.__constants['START_AT_FIRST_NODE']

    @property
    def START_AT_GIVEN_POSE(self):
        """Message constant 'START_AT_GIVEN_POSE'."""
        return Metaclass_DeserializePoseGraph_Request.__constants['START_AT_GIVEN_POSE']

    @property
    def LOCALIZE_AT_POSE(self):
        """Message constant 'LOCALIZE_AT_POSE'."""
        return Metaclass_DeserializePoseGraph_Request.__constants['LOCALIZE_AT_POSE']


class DeserializePoseGraph_Request(metaclass=Metaclass_DeserializePoseGraph_Request):
    """
    Message class 'DeserializePoseGraph_Request'.

    Constants:
      UNSET
      START_AT_FIRST_NODE
      START_AT_GIVEN_POSE
      LOCALIZE_AT_POSE
    """

    __slots__ = [
        '_filename',
        '_match_type',
        '_initial_pose',
    ]

    _fields_and_field_types = {
        'filename': 'string',
        'match_type': 'int8',
        'initial_pose': 'geometry_msgs/Pose2D',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.filename = kwargs.get('filename', str())
        self.match_type = kwargs.get('match_type', int())
        from geometry_msgs.msg import Pose2D
        self.initial_pose = kwargs.get('initial_pose', Pose2D())

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
        if self.filename != other.filename:
            return False
        if self.match_type != other.match_type:
            return False
        if self.initial_pose != other.initial_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def filename(self):
        """Message field 'filename'."""
        return self._filename

    @filename.setter
    def filename(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'filename' field must be of type 'str'"
        self._filename = value

    @property
    def match_type(self):
        """Message field 'match_type'."""
        return self._match_type

    @match_type.setter
    def match_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'match_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'match_type' field must be an integer in [-128, 127]"
        self._match_type = value

    @property
    def initial_pose(self):
        """Message field 'initial_pose'."""
        return self._initial_pose

    @initial_pose.setter
    def initial_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'initial_pose' field must be a sub message of type 'Pose2D'"
        self._initial_pose = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_DeserializePoseGraph_Response(type):
    """Metaclass of message 'DeserializePoseGraph_Response'."""

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
            module = import_type_support('slam_toolbox')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'slam_toolbox.srv.DeserializePoseGraph_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__deserialize_pose_graph__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__deserialize_pose_graph__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__deserialize_pose_graph__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__deserialize_pose_graph__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__deserialize_pose_graph__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeserializePoseGraph_Response(metaclass=Metaclass_DeserializePoseGraph_Response):
    """Message class 'DeserializePoseGraph_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_DeserializePoseGraph(type):
    """Metaclass of service 'DeserializePoseGraph'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('slam_toolbox')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'slam_toolbox.srv.DeserializePoseGraph')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__deserialize_pose_graph

            from slam_toolbox.srv import _deserialize_pose_graph
            if _deserialize_pose_graph.Metaclass_DeserializePoseGraph_Request._TYPE_SUPPORT is None:
                _deserialize_pose_graph.Metaclass_DeserializePoseGraph_Request.__import_type_support__()
            if _deserialize_pose_graph.Metaclass_DeserializePoseGraph_Response._TYPE_SUPPORT is None:
                _deserialize_pose_graph.Metaclass_DeserializePoseGraph_Response.__import_type_support__()


class DeserializePoseGraph(metaclass=Metaclass_DeserializePoseGraph):
    from slam_toolbox.srv._deserialize_pose_graph import DeserializePoseGraph_Request as Request
    from slam_toolbox.srv._deserialize_pose_graph import DeserializePoseGraph_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
