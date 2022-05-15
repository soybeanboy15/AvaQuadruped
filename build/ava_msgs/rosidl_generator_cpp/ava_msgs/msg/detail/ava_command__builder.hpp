// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ava_msgs:msg\AvaCommand.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__AVA_COMMAND__BUILDER_HPP_
#define AVA_MSGS__MSG__DETAIL__AVA_COMMAND__BUILDER_HPP_

#include "ava_msgs/msg/detail/ava_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ava_msgs
{

namespace msg
{

namespace builder
{

class Init_AvaCommand_keyhit
{
public:
  explicit Init_AvaCommand_keyhit(::ava_msgs::msg::AvaCommand & msg)
  : msg_(msg)
  {}
  ::ava_msgs::msg::AvaCommand keyhit(::ava_msgs::msg::AvaCommand::_keyhit_type arg)
  {
    msg_.keyhit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ava_msgs::msg::AvaCommand msg_;
};

class Init_AvaCommand_teleop
{
public:
  explicit Init_AvaCommand_teleop(::ava_msgs::msg::AvaCommand & msg)
  : msg_(msg)
  {}
  Init_AvaCommand_keyhit teleop(::ava_msgs::msg::AvaCommand::_teleop_type arg)
  {
    msg_.teleop = std::move(arg);
    return Init_AvaCommand_keyhit(msg_);
  }

private:
  ::ava_msgs::msg::AvaCommand msg_;
};

class Init_AvaCommand_state_msg
{
public:
  Init_AvaCommand_state_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvaCommand_teleop state_msg(::ava_msgs::msg::AvaCommand::_state_msg_type arg)
  {
    msg_.state_msg = std::move(arg);
    return Init_AvaCommand_teleop(msg_);
  }

private:
  ::ava_msgs::msg::AvaCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ava_msgs::msg::AvaCommand>()
{
  return ava_msgs::msg::builder::Init_AvaCommand_state_msg();
}

}  // namespace ava_msgs

#endif  // AVA_MSGS__MSG__DETAIL__AVA_COMMAND__BUILDER_HPP_
