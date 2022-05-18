// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ava_msgs:msg\Velocity.idl
// generated code does not contain a copyright notice
#include "ava_msgs/msg/detail/velocity__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ava_msgs/msg/detail/velocity__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ava_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
cdr_serialize(
  const ava_msgs::msg::Velocity & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: linear_x
  cdr << ros_message.linear_x;
  // Member: linear_y
  cdr << ros_message.linear_y;
  // Member: linear_z
  cdr << ros_message.linear_z;
  // Member: angular_x
  cdr << ros_message.angular_x;
  // Member: angular_y
  cdr << ros_message.angular_y;
  // Member: angular_z
  cdr << ros_message.angular_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ava_msgs::msg::Velocity & ros_message)
{
  // Member: linear_x
  cdr >> ros_message.linear_x;

  // Member: linear_y
  cdr >> ros_message.linear_y;

  // Member: linear_z
  cdr >> ros_message.linear_z;

  // Member: angular_x
  cdr >> ros_message.angular_x;

  // Member: angular_y
  cdr >> ros_message.angular_y;

  // Member: angular_z
  cdr >> ros_message.angular_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
get_serialized_size(
  const ava_msgs::msg::Velocity & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: linear_x
  {
    size_t item_size = sizeof(ros_message.linear_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: linear_y
  {
    size_t item_size = sizeof(ros_message.linear_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: linear_z
  {
    size_t item_size = sizeof(ros_message.linear_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_x
  {
    size_t item_size = sizeof(ros_message.angular_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_y
  {
    size_t item_size = sizeof(ros_message.angular_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_z
  {
    size_t item_size = sizeof(ros_message.angular_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
max_serialized_size_Velocity(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: linear_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: linear_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: linear_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angular_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angular_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angular_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Velocity__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ava_msgs::msg::Velocity *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Velocity__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ava_msgs::msg::Velocity *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Velocity__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ava_msgs::msg::Velocity *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Velocity__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Velocity(full_bounded, 0);
}

static message_type_support_callbacks_t _Velocity__callbacks = {
  "ava_msgs::msg",
  "Velocity",
  _Velocity__cdr_serialize,
  _Velocity__cdr_deserialize,
  _Velocity__get_serialized_size,
  _Velocity__max_serialized_size
};

static rosidl_message_type_support_t _Velocity__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Velocity__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ava_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ava_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ava_msgs::msg::Velocity>()
{
  return &ava_msgs::msg::typesupport_fastrtps_cpp::_Velocity__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ava_msgs, msg, Velocity)() {
  return &ava_msgs::msg::typesupport_fastrtps_cpp::_Velocity__handle;
}

#ifdef __cplusplus
}
#endif
