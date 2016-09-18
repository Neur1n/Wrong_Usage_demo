// Generated by gencpp from file dpralte_060b080/MotorMsg.msg
// DO NOT EDIT!


#ifndef DPRALTE_060B080_MESSAGE_MOTORMSG_H
#define DPRALTE_060B080_MESSAGE_MOTORMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dpralte_060b080
{
template <class ContainerAllocator>
struct MotorMsg_
{
  typedef MotorMsg_<ContainerAllocator> Type;

  MotorMsg_()
    : velocity_left(0)
    , velocity_right(0)
    , ConfigurationSignal()
    , VelocitySignal()  {
      ConfigurationSignal.assign(0);

      VelocitySignal.assign(0);
  }
  MotorMsg_(const ContainerAllocator& _alloc)
    : velocity_left(0)
    , velocity_right(0)
    , ConfigurationSignal()
    , VelocitySignal()  {
  (void)_alloc;
      ConfigurationSignal.assign(0);

      VelocitySignal.assign(0);
  }



   typedef int32_t _velocity_left_type;
  _velocity_left_type velocity_left;

   typedef int32_t _velocity_right_type;
  _velocity_right_type velocity_right;

   typedef boost::array<uint8_t, 12>  _ConfigurationSignal_type;
  _ConfigurationSignal_type ConfigurationSignal;

   typedef boost::array<uint8_t, 14>  _VelocitySignal_type;
  _VelocitySignal_type VelocitySignal;




  typedef boost::shared_ptr< ::dpralte_060b080::MotorMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dpralte_060b080::MotorMsg_<ContainerAllocator> const> ConstPtr;

}; // struct MotorMsg_

typedef ::dpralte_060b080::MotorMsg_<std::allocator<void> > MotorMsg;

typedef boost::shared_ptr< ::dpralte_060b080::MotorMsg > MotorMsgPtr;
typedef boost::shared_ptr< ::dpralte_060b080::MotorMsg const> MotorMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dpralte_060b080::MotorMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dpralte_060b080::MotorMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dpralte_060b080

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'dpralte_060b080': ['/home/jihang/Documents/IGV_ws/src/dpralte_060b080/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dpralte_060b080::MotorMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dpralte_060b080::MotorMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dpralte_060b080::MotorMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dpralte_060b080::MotorMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dpralte_060b080::MotorMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dpralte_060b080::MotorMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dpralte_060b080::MotorMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "573ac09c62ced905ea0ef9140f527951";
  }

  static const char* value(const ::dpralte_060b080::MotorMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x573ac09c62ced905ULL;
  static const uint64_t static_value2 = 0xea0ef9140f527951ULL;
};

template<class ContainerAllocator>
struct DataType< ::dpralte_060b080::MotorMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dpralte_060b080/MotorMsg";
  }

  static const char* value(const ::dpralte_060b080::MotorMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dpralte_060b080::MotorMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32   velocity_left\n\
int32   velocity_right\n\
char[12] ConfigurationSignal\n\
char[14] VelocitySignal\n\
";
  }

  static const char* value(const ::dpralte_060b080::MotorMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dpralte_060b080::MotorMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.velocity_left);
      stream.next(m.velocity_right);
      stream.next(m.ConfigurationSignal);
      stream.next(m.VelocitySignal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dpralte_060b080::MotorMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dpralte_060b080::MotorMsg_<ContainerAllocator>& v)
  {
    s << indent << "velocity_left: ";
    Printer<int32_t>::stream(s, indent + "  ", v.velocity_left);
    s << indent << "velocity_right: ";
    Printer<int32_t>::stream(s, indent + "  ", v.velocity_right);
    s << indent << "ConfigurationSignal[]" << std::endl;
    for (size_t i = 0; i < v.ConfigurationSignal.size(); ++i)
    {
      s << indent << "  ConfigurationSignal[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.ConfigurationSignal[i]);
    }
    s << indent << "VelocitySignal[]" << std::endl;
    for (size_t i = 0; i < v.VelocitySignal.size(); ++i)
    {
      s << indent << "  VelocitySignal[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.VelocitySignal[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DPRALTE_060B080_MESSAGE_MOTORMSG_H