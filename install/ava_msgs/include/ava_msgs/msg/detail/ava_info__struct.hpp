// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ava_msgs:msg/AvaInfo.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__AVA_INFO__STRUCT_HPP_
#define AVA_MSGS__MSG__DETAIL__AVA_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'velocity'
#include "ava_msgs/msg/detail/velocity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ava_msgs__msg__AvaInfo __attribute__((deprecated))
#else
# define DEPRECATED__ava_msgs__msg__AvaInfo __declspec(deprecated)
#endif

namespace ava_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvaInfo_
{
  using Type = AvaInfo_<ContainerAllocator>;

  explicit AvaInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  explicit AvaInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc),
    velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = "";
    }
  }

  // field types and members
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _state_type state;
  using _velocity_type =
    ava_msgs::msg::Velocity_<ContainerAllocator>;
  _velocity_type velocity;

  // setters for named parameter idiom
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__velocity(
    const ava_msgs::msg::Velocity_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ava_msgs::msg::AvaInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ava_msgs::msg::AvaInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ava_msgs::msg::AvaInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ava_msgs::msg::AvaInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ava_msgs::msg::AvaInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ava_msgs::msg::AvaInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ava_msgs::msg::AvaInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ava_msgs::msg::AvaInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ava_msgs::msg::AvaInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ava_msgs::msg::AvaInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ava_msgs__msg__AvaInfo
    std::shared_ptr<ava_msgs::msg::AvaInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ava_msgs__msg__AvaInfo
    std::shared_ptr<ava_msgs::msg::AvaInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvaInfo_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvaInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvaInfo_

// alias to use template instance with default allocator
using AvaInfo =
  ava_msgs::msg::AvaInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ava_msgs

#endif  // AVA_MSGS__MSG__DETAIL__AVA_INFO__STRUCT_HPP_
