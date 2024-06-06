// Generated by gencpp from file genesis_msgs/VehicleImuReport.msg
// DO NOT EDIT!


#ifndef GENESIS_MSGS_MESSAGE_VEHICLEIMUREPORT_H
#define GENESIS_MSGS_MESSAGE_VEHICLEIMUREPORT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace genesis_msgs
{
template <class ContainerAllocator>
struct VehicleImuReport_
{
  typedef VehicleImuReport_<ContainerAllocator> Type;

  VehicleImuReport_()
    : header()
    , yaw_rate(0.0)
    , lat_accel(0.0)
    , long_accel(0.0)  {
    }
  VehicleImuReport_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , yaw_rate(0.0)
    , lat_accel(0.0)
    , long_accel(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _yaw_rate_type;
  _yaw_rate_type yaw_rate;

   typedef float _lat_accel_type;
  _lat_accel_type lat_accel;

   typedef float _long_accel_type;
  _long_accel_type long_accel;





  typedef boost::shared_ptr< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> const> ConstPtr;

}; // struct VehicleImuReport_

typedef ::genesis_msgs::VehicleImuReport_<std::allocator<void> > VehicleImuReport;

typedef boost::shared_ptr< ::genesis_msgs::VehicleImuReport > VehicleImuReportPtr;
typedef boost::shared_ptr< ::genesis_msgs::VehicleImuReport const> VehicleImuReportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::genesis_msgs::VehicleImuReport_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::genesis_msgs::VehicleImuReport_<ContainerAllocator1> & lhs, const ::genesis_msgs::VehicleImuReport_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.yaw_rate == rhs.yaw_rate &&
    lhs.lat_accel == rhs.lat_accel &&
    lhs.long_accel == rhs.long_accel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::genesis_msgs::VehicleImuReport_<ContainerAllocator1> & lhs, const ::genesis_msgs::VehicleImuReport_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace genesis_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e80ee09b6b860b9df67618823009a87";
  }

  static const char* value(const ::genesis_msgs::VehicleImuReport_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e80ee09b6b860b9ULL;
  static const uint64_t static_value2 = 0xdf67618823009a87ULL;
};

template<class ContainerAllocator>
struct DataType< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "genesis_msgs/VehicleImuReport";
  }

  static const char* value(const ::genesis_msgs::VehicleImuReport_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"float32 yaw_rate\n"
"float32 lat_accel\n"
"float32 long_accel\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::genesis_msgs::VehicleImuReport_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.yaw_rate);
      stream.next(m.lat_accel);
      stream.next(m.long_accel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VehicleImuReport_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::genesis_msgs::VehicleImuReport_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::genesis_msgs::VehicleImuReport_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "yaw_rate: ";
    Printer<float>::stream(s, indent + "  ", v.yaw_rate);
    s << indent << "lat_accel: ";
    Printer<float>::stream(s, indent + "  ", v.lat_accel);
    s << indent << "long_accel: ";
    Printer<float>::stream(s, indent + "  ", v.long_accel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GENESIS_MSGS_MESSAGE_VEHICLEIMUREPORT_H
