// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from slam_toolbox:srv\AddSubmap.idl
// generated code does not contain a copyright notice

#ifndef SLAM_TOOLBOX__SRV__DETAIL__ADD_SUBMAP__BUILDER_HPP_
#define SLAM_TOOLBOX__SRV__DETAIL__ADD_SUBMAP__BUILDER_HPP_

#include "slam_toolbox/srv/detail/add_submap__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace slam_toolbox
{

namespace srv
{

namespace builder
{

class Init_AddSubmap_Request_filename
{
public:
  Init_AddSubmap_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::slam_toolbox::srv::AddSubmap_Request filename(::slam_toolbox::srv::AddSubmap_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::slam_toolbox::srv::AddSubmap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::slam_toolbox::srv::AddSubmap_Request>()
{
  return slam_toolbox::srv::builder::Init_AddSubmap_Request_filename();
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
auto build<::slam_toolbox::srv::AddSubmap_Response>()
{
  return ::slam_toolbox::srv::AddSubmap_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__SRV__DETAIL__ADD_SUBMAP__BUILDER_HPP_
