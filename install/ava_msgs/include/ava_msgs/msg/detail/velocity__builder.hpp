// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ava_msgs:msg/Velocity.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_
#define AVA_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_

#include "ava_msgs/msg/detail/velocity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ava_msgs
{

namespace msg
{

namespace builder
{

class Init_Velocity_angular_z
{
public:
  explicit Init_Velocity_angular_z(::ava_msgs::msg::Velocity & msg)
  : msg_(msg)
  {}
  ::ava_msgs::msg::Velocity angular_z(::ava_msgs::msg::Velocity::_angular_z_type arg)
  {
    msg_.angular_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ava_msgs::msg::Velocity msg_;
};

class Init_Velocity_angular_y
{
public:
  explicit Init_Velocity_angular_y(::ava_msgs::msg::Velocity & msg)
  : msg_(msg)
  {}
  Init_Velocity_angular_z angular_y(::ava_msgs::msg::Velocity::_angular_y_type arg)
  {
    msg_.angular_y = std::move(arg);
    return Init_Velocity_angular_z(msg_);
  }

private:
  ::ava_msgs::msg::Velocity msg_;
};

class Init_Velocity_angular_x
{
public:
  explicit Init_Velocity_angular_x(::ava_msgs::msg::Velocity & msg)
  : msg_(msg)
  {}
  Init_Velocity_angular_y angular_x(::ava_msgs::msg::Velocity::_angular_x_type arg)
  {
    msg_.angular_x = std::move(arg);
    return Init_Velocity_angular_y(msg_);
  }

private:
  ::ava_msgs::msg::Velocity msg_;
};

class Init_Velocity_linear_z
{
public:
  explicit Init_Velocity_linear_z(::ava_msgs::msg::Velocity & msg)
  : msg_(msg)
  {}
  Init_Velocity_angular_x linear_z(::ava_msgs::msg::Velocity::_linear_z_type arg)
  {
    msg_.linear_z = std::move(arg);
    return Init_Velocity_angular_x(msg_);
  }

private:
  ::ava_msgs::msg::Velocity msg_;
};

class Init_Velocity_linear_y
{
public:
  explicit Init_Velocity_linear_y(::ava_msgs::msg::Velocity & msg)
  : msg_(msg)
  {}
  Init_Velocity_linear_z linear_y(::ava_msgs::msg::Velocity::_linear_y_type arg)
  {
    msg_.linear_y = std::move(arg);
    return Init_Velocity_linear_z(msg_);
  }

private:
  ::ava_msgs::msg::Velocity msg_;
};

class Init_Velocity_linear_x
{
public:
  Init_Velocity_linear_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_linear_y linear_x(::ava_msgs::msg::Velocity::_linear_x_type arg)
  {
    msg_.linear_x = std::move(arg);
    return Init_Velocity_linear_y(msg_);
  }

private:
  ::ava_msgs::msg::Velocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ava_msgs::msg::Velocity>()
{
  return ava_msgs::msg::builder::Init_Velocity_linear_x();
}

}  // namespace ava_msgs

#endif  // AVA_MSGS__MSG__DETAIL__VELOCITY__BUILDER_HPP_
