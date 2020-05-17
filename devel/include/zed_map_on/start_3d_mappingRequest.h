// Generated by gencpp from file zed_map_on/start_3d_mappingRequest.msg
// DO NOT EDIT!


#ifndef ZED_MAP_ON_MESSAGE_START_3D_MAPPINGREQUEST_H
#define ZED_MAP_ON_MESSAGE_START_3D_MAPPINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace zed_map_on
{
template <class ContainerAllocator>
struct start_3d_mappingRequest_
{
  typedef start_3d_mappingRequest_<ContainerAllocator> Type;

  start_3d_mappingRequest_()
    : resolution(0.0)
    , max_mapping_range(0.0)
    , fused_pointcloud_freq(0.0)  {
    }
  start_3d_mappingRequest_(const ContainerAllocator& _alloc)
    : resolution(0.0)
    , max_mapping_range(0.0)
    , fused_pointcloud_freq(0.0)  {
  (void)_alloc;
    }



   typedef float _resolution_type;
  _resolution_type resolution;

   typedef float _max_mapping_range_type;
  _max_mapping_range_type max_mapping_range;

   typedef float _fused_pointcloud_freq_type;
  _fused_pointcloud_freq_type fused_pointcloud_freq;





  typedef boost::shared_ptr< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct start_3d_mappingRequest_

typedef ::zed_map_on::start_3d_mappingRequest_<std::allocator<void> > start_3d_mappingRequest;

typedef boost::shared_ptr< ::zed_map_on::start_3d_mappingRequest > start_3d_mappingRequestPtr;
typedef boost::shared_ptr< ::zed_map_on::start_3d_mappingRequest const> start_3d_mappingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator1> & lhs, const ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator2> & rhs)
{
  return lhs.resolution == rhs.resolution &&
    lhs.max_mapping_range == rhs.max_mapping_range &&
    lhs.fused_pointcloud_freq == rhs.fused_pointcloud_freq;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator1> & lhs, const ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace zed_map_on

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "187ac9d444c9f537f1d5a7db64b8e12a";
  }

  static const char* value(const ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x187ac9d444c9f537ULL;
  static const uint64_t static_value2 = 0xf1d5a7db64b8e12aULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_map_on/start_3d_mappingRequest";
  }

  static const char* value(const ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"\n"
"float32 resolution\n"
"\n"
"\n"
"float32 max_mapping_range\n"
"\n"
"\n"
"float32 fused_pointcloud_freq\n"
"\n"
;
  }

  static const char* value(const ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.resolution);
      stream.next(m.max_mapping_range);
      stream.next(m.fused_pointcloud_freq);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct start_3d_mappingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_map_on::start_3d_mappingRequest_<ContainerAllocator>& v)
  {
    s << indent << "resolution: ";
    Printer<float>::stream(s, indent + "  ", v.resolution);
    s << indent << "max_mapping_range: ";
    Printer<float>::stream(s, indent + "  ", v.max_mapping_range);
    s << indent << "fused_pointcloud_freq: ";
    Printer<float>::stream(s, indent + "  ", v.fused_pointcloud_freq);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_MAP_ON_MESSAGE_START_3D_MAPPINGREQUEST_H
