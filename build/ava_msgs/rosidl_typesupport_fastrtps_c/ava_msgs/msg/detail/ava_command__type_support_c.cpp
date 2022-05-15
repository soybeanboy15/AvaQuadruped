// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ava_msgs:msg\AvaCommand.idl
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

#include "rosidl_runtime_c/string.h"  // keyhit, state_msg, teleop
#include "rosidl_runtime_c/string_functions.h"  // keyhit, state_msg, teleop

// forward declare type support functions


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

  // Field name: teleop
  {
    const rosidl_runtime_c__String * str = &ros_message->teleop;
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

  // Field name: keyhit
  {
    const rosidl_runtime_c__String * str = &ros_message->keyhit;
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

  // Field name: teleop
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->teleop.data) {
      rosidl_runtime_c__String__init(&ros_message->teleop);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->teleop,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'teleop'\n");
      return false;
    }
  }

  // Field name: keyhit
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->keyhit.data) {
      rosidl_runtime_c__String__init(&ros_message->keyhit);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->keyhit,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'keyhit'\n");
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
  // field.name teleop
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->teleop.size + 1);
  // field.name keyhit
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->keyhit.size + 1);

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
  // member: teleop
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: keyhit
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
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
