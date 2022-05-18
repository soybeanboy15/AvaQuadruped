// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ava_msgs:msg/AvaCommand.idl
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

class Init_AvaCommand_pose
{
public:
  explicit Init_AvaCommand_pose(::ava_msgs::msg::AvaCommand & msg)
  : msg_(msg)
  {}
  ::ava_msgs::msg::AvaCommand pose(::ava_msgs::msg::AvaCommand::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ava_msgs::msg::AvaCommand msg_;
};

class Init_AvaCommand_velocity
{
public:
  explicit Init_AvaCommand_velocity(::ava_msgs::msg::AvaCommand & msg)
  : msg_(msg)
  {}
  Init_AvaCommand_pose velocity(::ava_msgs::msg::AvaCommand::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_AvaCommand_pose(msg_);
  }

private:
  ::ava_msgs::msg::AvaCommand msg_;
};

class Init_AvaCommand_teleop_mode
{
public:
  explicit Init_AvaCommand_teleop_mode(::ava_msgs::msg::AvaCommand & msg)
  : msg_(msg)
  {}
  Init_AvaCommand_velocity teleop_mode(::ava_msgs::msg::AvaCommand::_teleop_mode_type arg)
  {
    msg_.teleop_mode = std::move(arg);
    return Init_AvaCommand_velocity(msg_);
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
  Init_AvaCommand_teleop_mode state_msg(::ava_msgs::msg::AvaCommand::_state_msg_type arg)
  {
    msg_.state_msg = std::move(arg);
    return Init_AvaCommand_teleop_mode(msg_);
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
