// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:srv\LoopClosure.idl
// generated code does not contain a copyright notice

#ifndef SLAM_TOOLBOX__SRV__DETAIL__LOOP_CLOSURE__BUILDER_HPP_
#define SLAM_TOOLBOX__SRV__DETAIL__LOOP_CLOSURE__BUILDER_HPP_

#include "slam_toolbox/srv/detail/loop_closure__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace slam_toolbox
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::LoopClosure_Request>()
{
  return ::slam_toolbox::srv::LoopClosure_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace slam_toolbox


namespace slam_toolbox
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::LoopClosure_Response>()
{
  return ::slam_toolbox::srv::LoopClosure_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__SRV__DETAIL__LOOP_CLOSURE__BUILDER_HPP_
