// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ava_msgs:msg/AvaCommand.idl
// generated code does not contain a copyright notice
#include "ava_msgs/msg/detail/ava_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ava_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ava_msgs/msg/detail/ava_command__struct.h"
#include "ava_msgs/msg/detail/ava_command__functions.h"
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

#include "ava_msgs/msg/detail/ava_pose__functions.h"  // pose
#include "ava_msgs/msg/detail/velocity__functions.h"  // velocity
#include "rosidl_runtime_c/string.h"  // state_msg, teleop_mode
#include "rosidl_runtime_c/string_functions.h"  // state_msg, teleop_mode

// forward declare type support functions
size_t get_serialized_size_ava_msgs__msg__AvaPose(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ava_msgs__msg__AvaPose(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ava_msgs, msg, AvaPose)();
size_t get_serialized_size_ava_msgs__msg__Velocity(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ava_msgs__msg__Velocity(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ava_msgs, msg, Velocity)();


using _AvaCommand__ros_msg_type = ava_msgs__msg__AvaCommand;

static bool _AvaCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AvaCommand__ros_msg_type * ros_message = static_cast<const _AvaCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: state_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->state_msg;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: teleop_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->teleop_mode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ava_msgs, msg, Velocity
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity, cdr))
    {
      return false;
    }
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ava_msgs, msg, AvaPose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AvaCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AvaCommand__ros_msg_type * ros_message = static_cast<_AvaCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: state_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state_msg.data) {
      rosidl_runtime_c__String__init(&ros_message->state_msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state_msg'\n");
      return false;
    }
  }

  // Field name: teleop_mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->teleop_mode.data) {
      rosidl_runtime_c__String__init(&ros_message->teleop_mode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->teleop_mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'teleop_mode'\n");
      return false;
    }
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ava_msgs, msg, Velocity
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity))
    {
      return false;
    }
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ava_msgs, msg, AvaPose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ava_msgs
size_t get_serialized_size_ava_msgs__msg__AvaCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AvaCommand__ros_msg_type * ros_message = static_cast<const _AvaCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state_msg.size + 1);
  // field.name teleop_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->teleop_mode.size + 1);
  // field.name velocity

  current_alignment += get_serialized_size_ava_msgs__msg__Velocity(
    &(ros_message->velocity), current_alignment);
  // field.name pose

  current_alignment += get_serialized_size_ava_msgs__msg__AvaPose(
    &(ros_message->pose), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AvaCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ava_msgs__msg__AvaCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ava_msgs
size_t max_serialized_size_ava_msgs__msg__AvaCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: state_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: teleop_mode
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ava_msgs__msg__Velocity(
        full_bounded, current_alignment);
    }
  }
  // member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ava_msgs__msg__AvaPose(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AvaCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ava_msgs__msg__AvaCommand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AvaCommand = {
  "ava_msgs::msg",
  "AvaCommand",
  _AvaCommand__cdr_serialize,
  _AvaCommand__cdr_deserialize,
  _AvaCommand__get_serialized_size,
  _AvaCommand__max_serialized_size
};

static rosidl_message_type_support_t _AvaCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AvaCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ava_msgs, msg, AvaCommand)() {
  return &_AvaCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
