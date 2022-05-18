// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ava_msgs:msg/AvaCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ava_msgs/msg/detail/ava_command__rosidl_typesupport_introspection_c.h"
#include "ava_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ava_msgs/msg/detail/ava_command__functions.h"
#include "ava_msgs/msg/detail/ava_command__struct.h"


// Include directives for member types
// Member `state_msg`
// Member `teleop_mode`
#include "rosidl_runtime_c/string_functions.h"
// Member `velocity`
#include "ava_msgs/msg/velocity.h"
// Member `velocity`
#include "ava_msgs/msg/detail/velocity__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "ava_msgs/msg/ava_pose.h"
// Member `pose`
#include "ava_msgs/msg/detail/ava_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ava_msgs__msg__AvaCommand__init(message_memory);
}

void AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_fini_function(void * message_memory)
{
  ava_msgs__msg__AvaCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_message_member_array[4] = {
  {
    "state_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs__msg__AvaCommand, state_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "teleop_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs__msg__AvaCommand, teleop_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs__msg__AvaCommand, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs__msg__AvaCommand, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_message_members = {
  "ava_msgs__msg",  // message namespace
  "AvaCommand",  // message name
  4,  // number of fields
  sizeof(ava_msgs__msg__AvaCommand),
  AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_message_member_array,  // message members
  AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_message_type_support_handle = {
  0,
  &AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ava_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ava_msgs, msg, AvaCommand)() {
  AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ava_msgs, msg, Velocity)();
  AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ava_msgs, msg, AvaPose)();
  if (!AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_message_type_support_handle.typesupport_identifier) {
    AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AvaCommand__rosidl_typesupport_introspection_c__AvaCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
