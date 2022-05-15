// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ava_msgs:msg\AvaCommand.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__AVA_COMMAND__STRUCT_HPP_
#define AVA_MSGS__MSG__DETAIL__AVA_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ava_msgs__msg__AvaCommand __attribute__((deprecated))
#else
# define DEPRECATED__ava_msgs__msg__AvaCommand __declspec(deprecated)
#endif

namespace ava_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvaCommand_
{
  using Type = AvaCommand_<ContainerAllocator>;

  explicit AvaCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_msg = "";
      this->teleop = "";
      this->keyhit = "";
    }
  }

  explicit AvaCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state_msg(_alloc),
    teleop(_alloc),
    keyhit(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_msg = "";
      this->teleop = "";
      this->keyhit = "";
    }
  }

  // field types and members
  using _state_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _state_msg_type state_msg;
  using _teleop_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _teleop_type teleop;
  using _keyhit_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _keyhit_type keyhit;

  // setters for named parameter idiom
  Type & set__state_msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->state_msg = _arg;
    return *this;
  }
  Type & set__teleop(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->teleop = _arg;
    return *this;
  }
  Type & set__keyhit(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->keyhit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ava_msgs::msg::AvaCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const ava_msgs::msg::AvaCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ava_msgs::msg::AvaCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ava_msgs::msg::AvaCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ava_msgs::msg::AvaCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ava_msgs::msg::AvaCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ava_msgs::msg::AvaCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ava_msgs::msg::AvaCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ava_msgs::msg::AvaCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ava_msgs::msg::AvaCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ava_msgs__msg__AvaCommand
    std::shared_ptr<ava_msgs::msg::AvaCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ava_msgs__msg__AvaCommand
    std::shared_ptr<ava_msgs::msg::AvaCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvaCommand_ & other) const
  {
    if (this->state_msg != other.state_msg) {
      return false;
    }
    if (this->teleop != other.teleop) {
      return false;
    }
    if (this->keyhit != other.keyhit) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvaCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvaCommand_

// alias to use template instance with default allocator
using AvaCommand =
  ava_msgs::msg::AvaCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ava_msgs

#endif  // AVA_MSGS__MSG__DETAIL__AVA_COMMAND__STRUCT_HPP_
