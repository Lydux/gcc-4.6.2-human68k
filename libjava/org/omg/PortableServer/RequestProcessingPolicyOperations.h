
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableServer_RequestProcessingPolicyOperations__
#define __org_omg_PortableServer_RequestProcessingPolicyOperations__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Policy;
      }
      namespace PortableServer
      {
          class RequestProcessingPolicyOperations;
          class RequestProcessingPolicyValue;
      }
    }
  }
}

class org::omg::PortableServer::RequestProcessingPolicyOperations : public ::java::lang::Object
{

public:
  virtual ::org::omg::PortableServer::RequestProcessingPolicyValue * value() = 0;
  virtual ::org::omg::CORBA::Policy * copy() = 0;
  virtual void destroy() = 0;
  virtual jint policy_type() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_omg_PortableServer_RequestProcessingPolicyOperations__
