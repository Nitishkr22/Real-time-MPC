// Generated by gencpp from file genesis_msgs/ESRValidReport.msg
// DO NOT EDIT!


#ifndef GENESIS_MSGS_MESSAGE_ESRVALIDREPORT_H
#define GENESIS_MSGS_MESSAGE_ESRVALIDREPORT_H


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
struct ESRValidReport_
{
  typedef ESRValidReport_<ContainerAllocator> Type;

  ESRValidReport_()
    : header()
    , stamp1()
    , stamp2()
    , lr_sn(0)
    , lr_range_rate(0.0)
    , lr_range(0.0)
    , lr_range_power(0.0)
    , lr_range_angle(0.0)
    , mr_sn(0)
    , mr_range_rate(0.0)
    , mr_range(0.0)
    , mr_range_power(0.0)
    , mr_range_angle(0.0)  {
    }
  ESRValidReport_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , stamp1()
    , stamp2()
    , lr_sn(0)
    , lr_range_rate(0.0)
    , lr_range(0.0)
    , lr_range_power(0.0)
    , lr_range_angle(0.0)
    , mr_sn(0)
    , mr_range_rate(0.0)
    , mr_range(0.0)
    , mr_range_power(0.0)
    , mr_range_angle(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef ros::Time _stamp1_type;
  _stamp1_type stamp1;

   typedef ros::Time _stamp2_type;
  _stamp2_type stamp2;

   typedef int32_t _lr_sn_type;
  _lr_sn_type lr_sn;

   typedef float _lr_range_rate_type;
  _lr_range_rate_type lr_range_rate;

   typedef float _lr_range_type;
  _lr_range_type lr_range;

   typedef float _lr_range_power_type;
  _lr_range_power_type lr_range_power;

   typedef float _lr_range_angle_type;
  _lr_range_angle_type lr_range_angle;

   typedef int32_t _mr_sn_type;
  _mr_sn_type mr_sn;

   typedef float _mr_range_rate_type;
  _mr_range_rate_type mr_range_rate;

   typedef float _mr_range_type;
  _mr_range_type mr_range;

   typedef float _mr_range_power_type;
  _mr_range_power_type mr_range_power;

   typedef float _mr_range_angle_type;
  _mr_range_angle_type mr_range_angle;





  typedef boost::shared_ptr< ::genesis_msgs::ESRValidReport_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::genesis_msgs::ESRValidReport_<ContainerAllocator> const> ConstPtr;

}; // struct ESRValidReport_

typedef ::genesis_msgs::ESRValidReport_<std::allocator<void> > ESRValidReport;

typedef boost::shared_ptr< ::genesis_msgs::ESRValidReport > ESRValidReportPtr;
typedef boost::shared_ptr< ::genesis_msgs::ESRValidReport const> ESRValidReportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::genesis_msgs::ESRValidReport_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::genesis_msgs::ESRValidReport_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::genesis_msgs::ESRValidReport_<ContainerAllocator1> & lhs, const ::genesis_msgs::ESRValidReport_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.stamp1 == rhs.stamp1 &&
    lhs.stamp2 == rhs.stamp2 &&
    lhs.lr_sn == rhs.lr_sn &&
    lhs.lr_range_rate == rhs.lr_range_rate &&
    lhs.lr_range == rhs.lr_range &&
    lhs.lr_range_power == rhs.lr_range_power &&
    lhs.lr_range_angle == rhs.lr_range_angle &&
    lhs.mr_sn == rhs.mr_sn &&
    lhs.mr_range_rate == rhs.mr_range_rate &&
    lhs.mr_range == rhs.mr_range &&
    lhs.mr_range_power == rhs.mr_range_power &&
    lhs.mr_range_angle == rhs.mr_range_angle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::genesis_msgs::ESRValidReport_<ContainerAllocator1> & lhs, const ::genesis_msgs::ESRValidReport_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace genesis_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::genesis_msgs::ESRValidReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::genesis_msgs::ESRValidReport_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::genesis_msgs::ESRValidReport_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::genesis_msgs::ESRValidReport_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::genesis_msgs::ESRValidReport_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::genesis_msgs::ESRValidReport_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::genesis_msgs::ESRValidReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5bc0fc869f175fe0d4567a3b81e3a5e1";
  }

  static const char* value(const ::genesis_msgs::ESRValidReport_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5bc0fc869f175fe0ULL;
  static const uint64_t static_value2 = 0xd4567a3b81e3a5e1ULL;
};

template<class ContainerAllocator>
struct DataType< ::genesis_msgs::ESRValidReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "genesis_msgs/ESRValidReport";
  }

  static const char* value(const ::genesis_msgs::ESRValidReport_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::genesis_msgs::ESRValidReport_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"time stamp1					# timestamp for the Valid1 part; same as header.stamp\n"
"time stamp2					# timestamp for the Valid2 part\n"
"\n"
"# Long Range (Valid1)\n"
"int32 lr_sn                                     # ?, probably a boolean for if the sensor works?\n"
"float32 lr_range_rate                           # m/s\n"
"float32 lr_range                                # m\n"
"float32 lr_range_power                          # dB\n"
"float32 lr_range_angle                          # deg\n"
"\n"
"# Medium Range (Valid2)\n"
"int32 mr_sn                                     # ?, probably a boolean for if the sensor works?\n"
"float32 mr_range_rate                           # m/s\n"
"float32 mr_range                                # m\n"
"float32 mr_range_power                          # dB\n"
"float32 mr_range_angle                          # deg\n"
"\n"
"\n"
"\n"
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

  static const char* value(const ::genesis_msgs::ESRValidReport_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::genesis_msgs::ESRValidReport_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.stamp1);
      stream.next(m.stamp2);
      stream.next(m.lr_sn);
      stream.next(m.lr_range_rate);
      stream.next(m.lr_range);
      stream.next(m.lr_range_power);
      stream.next(m.lr_range_angle);
      stream.next(m.mr_sn);
      stream.next(m.mr_range_rate);
      stream.next(m.mr_range);
      stream.next(m.mr_range_power);
      stream.next(m.mr_range_angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ESRValidReport_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::genesis_msgs::ESRValidReport_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::genesis_msgs::ESRValidReport_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "stamp1: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp1);
    s << indent << "stamp2: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp2);
    s << indent << "lr_sn: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lr_sn);
    s << indent << "lr_range_rate: ";
    Printer<float>::stream(s, indent + "  ", v.lr_range_rate);
    s << indent << "lr_range: ";
    Printer<float>::stream(s, indent + "  ", v.lr_range);
    s << indent << "lr_range_power: ";
    Printer<float>::stream(s, indent + "  ", v.lr_range_power);
    s << indent << "lr_range_angle: ";
    Printer<float>::stream(s, indent + "  ", v.lr_range_angle);
    s << indent << "mr_sn: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mr_sn);
    s << indent << "mr_range_rate: ";
    Printer<float>::stream(s, indent + "  ", v.mr_range_rate);
    s << indent << "mr_range: ";
    Printer<float>::stream(s, indent + "  ", v.mr_range);
    s << indent << "mr_range_power: ";
    Printer<float>::stream(s, indent + "  ", v.mr_range_power);
    s << indent << "mr_range_angle: ";
    Printer<float>::stream(s, indent + "  ", v.mr_range_angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GENESIS_MSGS_MESSAGE_ESRVALIDREPORT_H
