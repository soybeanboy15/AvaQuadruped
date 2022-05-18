// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ava_msgs:msg\AvaInfo.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__AVA_INFO__BUILDER_HPP_
#define AVA_MSGS__MSG__DETAIL__AVA_INFO__BUILDER_HPP_

#include "ava_msgs/msg/detail/ava_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ava_msgs
{

namespace msg
{

namespace builder
{

class Init_AvaInfo_pose
{
public:
  explicit Init_AvaInfo_pose(::ava_msgs::msg::AvaInfo & msg)
  : msg_(msg)
  {}
  ::ava_msgs::msg::AvaInfo pose(::ava_msgs::msg::AvaInfo::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ava_msgs::msg::AvaInfo msg_;
};

class Init_AvaInfo_velocity
{
public:
  explicit Init_AvaInfo_velocity(::ava_msgs::msg::AvaInfo & msg)
  : msg_(msg)
  {}
  Init_AvaInfo_pose velocity(::ava_msgs::msg::AvaInfo::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_AvaInfo_pose(msg_);
  }

private:
  ::ava_msgs::msg::AvaInfo msg_;
};

class Init_AvaInfo_state
{
public:
  Init_AvaInfo_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvaInfo_velocity state(::ava_msgs::msg::AvaInfo::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_AvaInfo_velocity(msg_);
  }

private:
  ::ava_msgs::msg::AvaInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ava_msgs::msg::AvaInfo>()
{
  return ava_msgs::msg::builder::Init_AvaInfo_state();
}

}  // namespace ava_msgs

#endif  // AVA_MSGS__MSG__DETAIL__AVA_INFO__BUILDER_HPP_
