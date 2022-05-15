// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ava_msgs:msg/LegPosition.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__LEG_POSITION__BUILDER_HPP_
#define AVA_MSGS__MSG__DETAIL__LEG_POSITION__BUILDER_HPP_

#include "ava_msgs/msg/detail/leg_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ava_msgs
{

namespace msg
{

namespace builder
{

class Init_LegPosition_bl_leg_pos
{
public:
  explicit Init_LegPosition_bl_leg_pos(::ava_msgs::msg::LegPosition & msg)
  : msg_(msg)
  {}
  ::ava_msgs::msg::LegPosition bl_leg_pos(::ava_msgs::msg::LegPosition::_bl_leg_pos_type arg)
  {
    msg_.bl_leg_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ava_msgs::msg::LegPosition msg_;
};

class Init_LegPosition_br_leg_pos
{
public:
  explicit Init_LegPosition_br_leg_pos(::ava_msgs::msg::LegPosition & msg)
  : msg_(msg)
  {}
  Init_LegPosition_bl_leg_pos br_leg_pos(::ava_msgs::msg::LegPosition::_br_leg_pos_type arg)
  {
    msg_.br_leg_pos = std::move(arg);
    return Init_LegPosition_bl_leg_pos(msg_);
  }

private:
  ::ava_msgs::msg::LegPosition msg_;
};

class Init_LegPosition_fr_leg_pos
{
public:
  explicit Init_LegPosition_fr_leg_pos(::ava_msgs::msg::LegPosition & msg)
  : msg_(msg)
  {}
  Init_LegPosition_br_leg_pos fr_leg_pos(::ava_msgs::msg::LegPosition::_fr_leg_pos_type arg)
  {
    msg_.fr_leg_pos = std::move(arg);
    return Init_LegPosition_br_leg_pos(msg_);
  }

private:
  ::ava_msgs::msg::LegPosition msg_;
};

class Init_LegPosition_fl_leg_pos
{
public:
  Init_LegPosition_fl_leg_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LegPosition_fr_leg_pos fl_leg_pos(::ava_msgs::msg::LegPosition::_fl_leg_pos_type arg)
  {
    msg_.fl_leg_pos = std::move(arg);
    return Init_LegPosition_fr_leg_pos(msg_);
  }

private:
  ::ava_msgs::msg::LegPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ava_msgs::msg::LegPosition>()
{
  return ava_msgs::msg::builder::Init_LegPosition_fl_leg_pos();
}

}  // namespace ava_msgs

#endif  // AVA_MSGS__MSG__DETAIL__LEG_POSITION__BUILDER_HPP_
