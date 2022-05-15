// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from slam_toolbox:srv\DeserializePoseGraph.idl
// generated code does not contain a copyright notice

#ifndef SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__STRUCT_HPP_
#define SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__slam_toolbox__srv__DeserializePoseGraph_Request __attribute__((deprecated))
#else
# define DEPRECATED__slam_toolbox__srv__DeserializePoseGraph_Request __declspec(deprecated)
#endif

namespace slam_toolbox
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DeserializePoseGraph_Request_
{
  using Type = DeserializePoseGraph_Request_<ContainerAllocator>;

  explicit DeserializePoseGraph_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initial_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
      this->match_type = 0;
    }
  }

  explicit DeserializePoseGraph_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filename(_alloc),
    initial_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
      this->match_type = 0;
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _filename_type filename;
  using _match_type_type =
    int8_t;
  _match_type_type match_type;
  using _initial_pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _initial_pose_type initial_pose;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->filename = _arg;
    return *this;
  }
  Type & set__match_type(
    const int8_t & _arg)
  {
    this->match_type = _arg;
    return *this;
  }
  Type & set__initial_pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->initial_pose = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t UNSET =
    0;
  static constexpr int8_t START_AT_FIRST_NODE =
    1;
  static constexpr int8_t START_AT_GIVEN_POSE =
    2;
  static constexpr int8_t LOCALIZE_AT_POSE =
    3;

  // pointer types
  using RawPtr =
    slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__slam_toolbox__srv__DeserializePoseGraph_Request
    std::shared_ptr<slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__slam_toolbox__srv__DeserializePoseGraph_Request
    std::shared_ptr<slam_toolbox::srv::DeserializePoseGraph_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeserializePoseGraph_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    if (this->match_type != other.match_type) {
      return false;
    }
    if (this->initial_pose != other.initial_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeserializePoseGraph_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeserializePoseGraph_Request_

// alias to use template instance with default allocator
using DeserializePoseGraph_Request =
  slam_toolbox::srv::DeserializePoseGraph_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t DeserializePoseGraph_Request_<ContainerAllocator>::UNSET;
template<typename ContainerAllocator>
constexpr int8_t DeserializePoseGraph_Request_<ContainerAllocator>::START_AT_FIRST_NODE;
template<typename ContainerAllocator>
constexpr int8_t DeserializePoseGraph_Request_<ContainerAllocator>::START_AT_GIVEN_POSE;
template<typename ContainerAllocator>
constexpr int8_t DeserializePoseGraph_Request_<ContainerAllocator>::LOCALIZE_AT_POSE;

}  // namespace srv

}  // namespace slam_toolbox


#ifndef _WIN32
# define DEPRECATED__slam_toolbox__srv__DeserializePoseGraph_Response __attribute__((deprecated))
#else
# define DEPRECATED__slam_toolbox__srv__DeserializePoseGraph_Response __declspec(deprecated)
#endif

namespace slam_toolbox
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DeserializePoseGraph_Response_
{
  using Type = DeserializePoseGraph_Response_<ContainerAllocator>;

  explicit DeserializePoseGraph_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit DeserializePoseGraph_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__slam_toolbox__srv__DeserializePoseGraph_Response
    std::shared_ptr<slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__slam_toolbox__srv__DeserializePoseGraph_Response
    std::shared_ptr<slam_toolbox::srv::DeserializePoseGraph_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeserializePoseGraph_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeserializePoseGraph_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeserializePoseGraph_Response_

// alias to use template instance with default allocator
using DeserializePoseGraph_Response =
  slam_toolbox::srv::DeserializePoseGraph_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace slam_toolbox

namespace slam_toolbox
{

namespace srv
{

struct DeserializePoseGraph
{
  using Request = slam_toolbox::srv::DeserializePoseGraph_Request;
  using Response = slam_toolbox::srv::DeserializePoseGraph_Response;
};

}  // namespace srv

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__SRV__DETAIL__DESERIALIZE_POSE_GRAPH__STRUCT_HPP_
