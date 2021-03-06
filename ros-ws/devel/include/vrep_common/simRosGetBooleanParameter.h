// Generated by gencpp from file vrep_common/simRosGetBooleanParameter.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETBOOLEANPARAMETER_H
#define VREP_COMMON_MESSAGE_SIMROSGETBOOLEANPARAMETER_H

#include <ros/service_traits.h>


#include <vrep_common/simRosGetBooleanParameterRequest.h>
#include <vrep_common/simRosGetBooleanParameterResponse.h>


namespace vrep_common
{

struct simRosGetBooleanParameter
{

typedef simRosGetBooleanParameterRequest Request;
typedef simRosGetBooleanParameterResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct simRosGetBooleanParameter
} // namespace vrep_common


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vrep_common::simRosGetBooleanParameter > {
  static const char* value()
  {
    return "1d1aabce3fe70da836b3bf46393e4896";
  }

  static const char* value(const ::vrep_common::simRosGetBooleanParameter&) { return value(); }
};

template<>
struct DataType< ::vrep_common::simRosGetBooleanParameter > {
  static const char* value()
  {
    return "vrep_common/simRosGetBooleanParameter";
  }

  static const char* value(const ::vrep_common::simRosGetBooleanParameter&) { return value(); }
};


// service_traits::MD5Sum< ::vrep_common::simRosGetBooleanParameterRequest> should match 
// service_traits::MD5Sum< ::vrep_common::simRosGetBooleanParameter > 
template<>
struct MD5Sum< ::vrep_common::simRosGetBooleanParameterRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosGetBooleanParameter >::value();
  }
  static const char* value(const ::vrep_common::simRosGetBooleanParameterRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosGetBooleanParameterRequest> should match 
// service_traits::DataType< ::vrep_common::simRosGetBooleanParameter > 
template<>
struct DataType< ::vrep_common::simRosGetBooleanParameterRequest>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosGetBooleanParameter >::value();
  }
  static const char* value(const ::vrep_common::simRosGetBooleanParameterRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vrep_common::simRosGetBooleanParameterResponse> should match 
// service_traits::MD5Sum< ::vrep_common::simRosGetBooleanParameter > 
template<>
struct MD5Sum< ::vrep_common::simRosGetBooleanParameterResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vrep_common::simRosGetBooleanParameter >::value();
  }
  static const char* value(const ::vrep_common::simRosGetBooleanParameterResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vrep_common::simRosGetBooleanParameterResponse> should match 
// service_traits::DataType< ::vrep_common::simRosGetBooleanParameter > 
template<>
struct DataType< ::vrep_common::simRosGetBooleanParameterResponse>
{
  static const char* value()
  {
    return DataType< ::vrep_common::simRosGetBooleanParameter >::value();
  }
  static const char* value(const ::vrep_common::simRosGetBooleanParameterResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETBOOLEANPARAMETER_H
