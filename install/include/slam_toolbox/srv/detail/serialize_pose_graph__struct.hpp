// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from slam_toolbox:srv\SerializePoseGraph.idl
// generated code does not contain a copyright notice

#ifndef SLAM_TOOLBOX__SRV__DETAIL__SERIALIZE_POSE_GRAPH__STRUCT_HPP_
#define SLAM_TOOLBOX__SRV__DETAIL__SERIALIZE_POSE_GRAPH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__slam_toolbox__srv__SerializePoseGraph_Request __attribute__((deprecated))
#else
# define DEPRECATED__slam_toolbox__srv__SerializePoseGraph_Request __declspec(deprecated)
#endif

namespace slam_toolbox
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SerializePoseGraph_Request_
{
  using Type = SerializePoseGraph_Request_<ContainerAllocator>;

  explicit SerializePoseGraph_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  explicit SerializePoseGraph_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filename(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filename = "";
    }
  }

  // field types and members
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _filename_type filename;

  // setters for named parameter idiom
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->filename = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__slam_toolbox__srv__SerializePoseGraph_Request
    std::shared_ptr<slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__slam_toolbox__srv__SerializePoseGraph_Request
    std::shared_ptr<slam_toolbox::srv::SerializePoseGraph_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerializePoseGraph_Request_ & other) const
  {
    if (this->filename != other.filename) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerializePoseGraph_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerializePoseGraph_Request_

// alias to use template instance with default allocator
using SerializePoseGraph_Request =
  slam_toolbox::srv::SerializePoseGraph_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace slam_toolbox


#ifndef _WIN32
# define DEPRECATED__slam_toolbox__srv__SerializePoseGraph_Response __attribute__((deprecated))
#else
# define DEPRECATED__slam_toolbox__srv__SerializePoseGraph_Response __declspec(deprecated)
#endif

namespace slam_toolbox
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SerializePoseGraph_Response_
{
  using Type = SerializePoseGraph_Response_<ContainerAllocator>;

  explicit SerializePoseGraph_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SerializePoseGraph_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__slam_toolbox__srv__SerializePoseGraph_Response
    std::shared_ptr<slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__slam_toolbox__srv__SerializePoseGraph_Response
    std::shared_ptr<slam_toolbox::srv::SerializePoseGraph_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SerializePoseGraph_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SerializePoseGraph_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SerializePoseGraph_Response_

// alias to use template instance with default allocator
using SerializePoseGraph_Response =
  slam_toolbox::srv::SerializePoseGraph_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace slam_toolbox

namespace slam_toolbox
{

namespace srv
{

struct SerializePoseGraph
{
  using Request = slam_toolbox::srv::SerializePoseGraph_Request;
  using Response = slam_toolbox::srv::SerializePoseGraph_Response;
};

}  // namespace srv

}  // namespace slam_toolbox

#endif  // SLAM_TOOLBOX__SRV__DETAIL__SERIALIZE_POSE_GRAPH__STRUCT_HPP_
