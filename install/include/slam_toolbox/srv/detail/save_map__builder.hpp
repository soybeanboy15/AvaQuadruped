// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:srv\SaveMap.idl
// generated code does not contain a copyright notice

#ifndef SLAM_TOOLBOX__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
#define SLAM_TOOLBOX__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_

#include "slam_toolbox/srv/detail/save_map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace slam_toolbox
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Request_name
{
public:
  Init_SaveMap_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::slam_toolbox::srv::SaveMap_Request name(::slam_toolbox::srv::SaveMap_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::srv::SaveMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::SaveMap_Request>()
{
  return slam_toolbox::srv::builder::Init_SaveMap_Request_name();
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
auto build<::slam_toolbox::srv::SaveMap_Response>()
{
  return ::slam_toolbox::srv::SaveMap_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
