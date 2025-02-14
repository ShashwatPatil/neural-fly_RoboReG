// Generated by gencpp from file sensor_fusion_comm/InitScaleRequest.msg
// DO NOT EDIT!


#ifndef SENSOR_FUSION_COMM_MESSAGE_INITSCALEREQUEST_H
#define SENSOR_FUSION_COMM_MESSAGE_INITSCALEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sensor_fusion_comm
{
template <class ContainerAllocator>
struct InitScaleRequest_
{
  typedef InitScaleRequest_<ContainerAllocator> Type;

  InitScaleRequest_()
    : scale(0.0)  {
    }
  InitScaleRequest_(const ContainerAllocator& _alloc)
    : scale(0.0)  {
  (void)_alloc;
    }



   typedef float _scale_type;
  _scale_type scale;





  typedef boost::shared_ptr< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct InitScaleRequest_

typedef ::sensor_fusion_comm::InitScaleRequest_<std::allocator<void> > InitScaleRequest;

typedef boost::shared_ptr< ::sensor_fusion_comm::InitScaleRequest > InitScaleRequestPtr;
typedef boost::shared_ptr< ::sensor_fusion_comm::InitScaleRequest const> InitScaleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator1> & lhs, const ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator2> & rhs)
{
  return lhs.scale == rhs.scale;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator1> & lhs, const ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sensor_fusion_comm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6de42640623c526fd99227d7dc6323fb";
  }

  static const char* value(const ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6de42640623c526fULL;
  static const uint64_t static_value2 = 0xd99227d7dc6323fbULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_fusion_comm/InitScaleRequest";
  }

  static const char* value(const ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 scale\n"
;
  }

  static const char* value(const ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.scale);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InitScaleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_fusion_comm::InitScaleRequest_<ContainerAllocator>& v)
  {
    s << indent << "scale: ";
    Printer<float>::stream(s, indent + "  ", v.scale);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_FUSION_COMM_MESSAGE_INITSCALEREQUEST_H
