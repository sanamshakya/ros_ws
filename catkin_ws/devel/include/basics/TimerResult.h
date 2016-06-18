// Generated by gencpp from file basics/TimerResult.msg
// DO NOT EDIT!


#ifndef BASICS_MESSAGE_TIMERRESULT_H
#define BASICS_MESSAGE_TIMERRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace basics
{
template <class ContainerAllocator>
struct TimerResult_
{
  typedef TimerResult_<ContainerAllocator> Type;

  TimerResult_()
    : time_elapsed()
    , updates_sent(0)  {
    }
  TimerResult_(const ContainerAllocator& _alloc)
    : time_elapsed()
    , updates_sent(0)  {
  (void)_alloc;
    }



   typedef ros::Duration _time_elapsed_type;
  _time_elapsed_type time_elapsed;

   typedef uint32_t _updates_sent_type;
  _updates_sent_type updates_sent;




  typedef boost::shared_ptr< ::basics::TimerResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::basics::TimerResult_<ContainerAllocator> const> ConstPtr;

}; // struct TimerResult_

typedef ::basics::TimerResult_<std::allocator<void> > TimerResult;

typedef boost::shared_ptr< ::basics::TimerResult > TimerResultPtr;
typedef boost::shared_ptr< ::basics::TimerResult const> TimerResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::basics::TimerResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::basics::TimerResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace basics

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'basics': ['/home/sanam/catkin_ws/src/basics/msg', '/home/sanam/catkin_ws/devel/share/basics/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::basics::TimerResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::basics::TimerResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basics::TimerResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basics::TimerResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basics::TimerResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basics::TimerResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::basics::TimerResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8227810e22df8077dd49231152c9e200";
  }

  static const char* value(const ::basics::TimerResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8227810e22df8077ULL;
  static const uint64_t static_value2 = 0xdd49231152c9e200ULL;
};

template<class ContainerAllocator>
struct DataType< ::basics::TimerResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "basics/TimerResult";
  }

  static const char* value(const ::basics::TimerResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::basics::TimerResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
duration time_elapsed\n\
uint32 updates_sent\n\
";
  }

  static const char* value(const ::basics::TimerResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::basics::TimerResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time_elapsed);
      stream.next(m.updates_sent);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TimerResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::basics::TimerResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::basics::TimerResult_<ContainerAllocator>& v)
  {
    s << indent << "time_elapsed: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.time_elapsed);
    s << indent << "updates_sent: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.updates_sent);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BASICS_MESSAGE_TIMERRESULT_H
