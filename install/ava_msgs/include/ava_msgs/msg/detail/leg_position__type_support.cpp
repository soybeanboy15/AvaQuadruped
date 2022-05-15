// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ava_msgs:msg/LegPosition.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ava_msgs/msg/detail/leg_position__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ava_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LegPosition_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ava_msgs::msg::LegPosition(_init);
}

void LegPosition_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ava_msgs::msg::LegPosition *>(message_memory);
  typed_message->~LegPosition();
}

size_t size_function__LegPosition__fl_leg_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LegPosition__fl_leg_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LegPosition__fl_leg_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LegPosition__fl_leg_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LegPosition__fr_leg_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LegPosition__fr_leg_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LegPosition__fr_leg_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LegPosition__fr_leg_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LegPosition__br_leg_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LegPosition__br_leg_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LegPosition__br_leg_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LegPosition__br_leg_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LegPosition__bl_leg_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LegPosition__bl_leg_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__LegPosition__bl_leg_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__LegPosition__bl_leg_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LegPosition_message_member_array[4] = {
  {
    "fl_leg_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs::msg::LegPosition, fl_leg_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegPosition__fl_leg_pos,  // size() function pointer
    get_const_function__LegPosition__fl_leg_pos,  // get_const(index) function pointer
    get_function__LegPosition__fl_leg_pos,  // get(index) function pointer
    resize_function__LegPosition__fl_leg_pos  // resize(index) function pointer
  },
  {
    "fr_leg_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs::msg::LegPosition, fr_leg_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegPosition__fr_leg_pos,  // size() function pointer
    get_const_function__LegPosition__fr_leg_pos,  // get_const(index) function pointer
    get_function__LegPosition__fr_leg_pos,  // get(index) function pointer
    resize_function__LegPosition__fr_leg_pos  // resize(index) function pointer
  },
  {
    "br_leg_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs::msg::LegPosition, br_leg_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegPosition__br_leg_pos,  // size() function pointer
    get_const_function__LegPosition__br_leg_pos,  // get_const(index) function pointer
    get_function__LegPosition__br_leg_pos,  // get(index) function pointer
    resize_function__LegPosition__br_leg_pos  // resize(index) function pointer
  },
  {
    "bl_leg_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ava_msgs::msg::LegPosition, bl_leg_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__LegPosition__bl_leg_pos,  // size() function pointer
    get_const_function__LegPosition__bl_leg_pos,  // get_const(index) function pointer
    get_function__LegPosition__bl_leg_pos,  // get(index) function pointer
    resize_function__LegPosition__bl_leg_pos  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LegPosition_message_members = {
  "ava_msgs::msg",  // message namespace
  "LegPosition",  // message name
  4,  // number of fields
  sizeof(ava_msgs::msg::LegPosition),
  LegPosition_message_member_array,  // message members
  LegPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  LegPosition_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LegPosition_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LegPosition_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ava_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ava_msgs::msg::LegPosition>()
{
  return &::ava_msgs::msg::rosidl_typesupport_introspection_cpp::LegPosition_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ava_msgs, msg, LegPosition)() {
  return &::ava_msgs::msg::rosidl_typesupport_introspection_cpp::LegPosition_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
