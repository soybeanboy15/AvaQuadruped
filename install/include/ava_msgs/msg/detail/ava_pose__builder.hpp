// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ava_msgs:msg\AvaPose.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__AVA_POSE__BUILDER_HPP_
#define AVA_MSGS__MSG__DETAIL__AVA_POSE__BUILDER_HPP_

#include "ava_msgs/msg/detail/ava_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ava_msgs
{

namespace msg
{

namespace builder
{

class Init_AvaPose_yaw
{
public:
  explicit Init_AvaPose_yaw(::ava_msgs::msg::AvaPose & msg)
  : msg_(msg)
  {}
  ::ava_msgs::msg::AvaPose yaw(::ava_msgs::msg::AvaPose::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ava_msgs::msg::AvaPose msg_;
};

class Init_AvaPose_pitch
{
public:
  explicit Init_AvaPose_pitch(::ava_msgs::msg::AvaPose & msg)
  : msg_(msg)
  {}
  Init_AvaPose_yaw pitch(::ava_msgs::msg::AvaPose::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_AvaPose_yaw(msg_);
  }

private:
  ::ava_msgs::msg::AvaPose msg_;
};

class Init_AvaPose_roll
{
public:
  explicit Init_AvaPose_roll(::ava_msgs::msg::AvaPose & msg)
  : msg_(msg)
  {}
  Init_AvaPose_pitch roll(::ava_msgs::msg::AvaPose::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_AvaPose_pitch(msg_);
  }

private:
  ::ava_msgs::msg::AvaPose msg_;
};

class Init_AvaPose_z
{
public:
  explicit Init_AvaPose_z(::ava_msgs::msg::AvaPose & msg)
  : msg_(msg)
  {}
  Init_AvaPose_roll z(::ava_msgs::msg::AvaPose::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_AvaPose_roll(msg_);
  }

private:
  ::ava_msgs::msg::AvaPose msg_;
};

class Init_AvaPose_y
{
public:
  explicit Init_AvaPose_y(::ava_msgs::msg::AvaPose & msg)
  : msg_(msg)
  {}
  Init_AvaPose_z y(::ava_msgs::msg::AvaPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_AvaPose_z(msg_);
  }

private:
  ::ava_msgs::msg::AvaPose msg_;
};

class Init_AvaPose_x
{
public:
  Init_AvaPose_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvaPose_y x(::ava_msgs::msg::AvaPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_AvaPose_y(msg_);
  }

private:
  ::ava_msgs::msg::AvaPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ava_msgs::msg::AvaPose>()
{
  return ava_msgs::msg::builder::Init_AvaPose_x();
}

}  // namespace ava_msgs

#endif  // AVA_MSGS__MSG__DETAIL__AVA_POSE__BUILDER_HPP_
