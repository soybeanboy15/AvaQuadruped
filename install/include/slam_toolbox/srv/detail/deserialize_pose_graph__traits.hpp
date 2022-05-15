// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from slam_toolbox:srv\DeserializePoseGraph.idl
// generated code does not contain a copyright notice

#ifndef SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__TRAITS_HPP_
#define SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__TRAITS_HPP_

#include "slam_toolbox/srv/detail/deserialize_pose_graph__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_toolbox::srv::DeserializePoseGraph_Request>()
{
  return "slam_toolbox::srv::DeserializePoseGraph_Request";
}

template<>
inline const char * name<slam_toolbox::srv::DeserializePoseGraph_Request>()
{
  return "slam_toolbox/srv/DeserializePoseGraph_Request";
}

template<>
struct has_fixed_size<slam_toolbox::srv::DeserializePoseGraph_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<slam_toolbox::srv::DeserializePoseGraph_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<slam_toolbox::srv::DeserializePoseGraph_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_toolbox::srv::DeserializePoseGraph_Response>()
{
  return "slam_toolbox::srv::DeserializePoseGraph_Response";
}

template<>
inline const char * name<slam_toolbox::srv::DeserializePoseGraph_Response>()
{
  return "slam_toolbox/srv/DeserializePoseGraph_Response";
}

template<>
struct has_fixed_size<slam_toolbox::srv::DeserializePoseGraph_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<slam_toolbox::srv::DeserializePoseGraph_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<slam_toolbox::srv::DeserializePoseGraph_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<slam_toolbox::srv::DeserializePoseGraph>()
{
  return "slam_toolbox::srv::DeserializePoseGraph";
}

template<>
inline const char * name<slam_toolbox::srv::DeserializePoseGraph>()
{
  return "slam_toolbox/srv/DeserializePoseGraph";
}

template<>
struct has_fixed_size<slam_toolbox::srv::DeserializePoseGraph>
  : std::integral_constant<
    bool,
    has_fixed_size<slam_toolbox::srv::DeserializePoseGraph_Request>::value &&
    has_fixed_size<slam_toolbox::srv::DeserializePoseGraph_Response>::value
  >
{
};

template<>
struct has_bounded_size<slam_toolbox::srv::DeserializePoseGraph>
  : std::integral_constant<
    bool,
    has_bounded_size<slam_toolbox::srv::DeserializePoseGraph_Request>::value &&
    has_bounded_size<slam_toolbox::srv::DeserializePoseGraph_Response>::value
  >
{
};

template<>
struct is_service<slam_toolbox::srv::DeserializePoseGraph>
  : std::true_type
{
};

template<>
struct is_service_request<slam_toolbox::srv::DeserializePoseGraph_Request>
  : std::true_type
{
};

template<>
struct is_service_response<slam_toolbox::srv::DeserializePoseGraph_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__TRAITS_HPP_
