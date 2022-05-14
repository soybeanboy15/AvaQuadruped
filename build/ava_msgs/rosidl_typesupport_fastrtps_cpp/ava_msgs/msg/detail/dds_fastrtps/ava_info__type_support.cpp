// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ava_msgs:msg/AvaInfo.idl
// generated code does not contain a copyright notice
#include "ava_msgs/msg/detail/ava_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ava_msgs/msg/detail/ava_info__struct.hpp"

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
bool cdr_serialize(
  const ava_msgs::msg::Velocity &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ava_msgs::msg::Velocity &);
size_t get_serialized_size(
  const ava_msgs::msg::Velocity &,
  size_t current_alignment);
size_t
max_serialized_size_Velocity(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ava_msgs


namespace ava_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
cdr_serialize(
  const ava_msgs::msg::AvaInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: state
  cdr << ros_message.state;
  // Member: velocity
  ava_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.velocity,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ava_msgs::msg::AvaInfo & ros_message)
{
  // Member: state
  cdr >> ros_message.state;

  // Member: velocity
  ava_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.velocity);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
get_serialized_size(
  const ava_msgs::msg::AvaInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.state.size() + 1);
  // Member: velocity

  current_alignment +=
    ava_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.velocity, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ava_msgs
max_serialized_size_AvaInfo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: state
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ava_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Velocity(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AvaInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ava_msgs::msg::AvaInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AvaInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ava_msgs::msg::AvaInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AvaInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ava_msgs::msg::AvaInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AvaInfo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AvaInfo(full_bounded, 0);
}

static message_type_support_callbacks_t _AvaInfo__callbacks = {
  "ava_msgs::msg",
  "AvaInfo",
  _AvaInfo__cdr_serialize,
  _AvaInfo__cdr_deserialize,
  _AvaInfo__get_serialized_size,
  _AvaInfo__max_serialized_size
};

static rosidl_message_type_support_t _AvaInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AvaInfo__callbacks,
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
get_message_type_support_handle<ava_msgs::msg::AvaInfo>()
{
  return &ava_msgs::msg::typesupport_fastrtps_cpp::_AvaInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ava_msgs, msg, AvaInfo)() {
  return &ava_msgs::msg::typesupport_fastrtps_cpp::_AvaInfo__handle;
}

#ifdef __cplusplus
}
#endif
