
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_ldap_UnsolicitedNotificationEvent__
#define __javax_naming_ldap_UnsolicitedNotificationEvent__

#pragma interface

#include <java/util/EventObject.h>
extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      namespace ldap
      {
          class UnsolicitedNotification;
          class UnsolicitedNotificationEvent;
          class UnsolicitedNotificationListener;
      }
    }
  }
}

class javax::naming::ldap::UnsolicitedNotificationEvent : public ::java::util::EventObject
{

public:
  UnsolicitedNotificationEvent(::java::lang::Object *, ::javax::naming::ldap::UnsolicitedNotification *);
  virtual ::javax::naming::ldap::UnsolicitedNotification * getNotification();
  virtual void dispatch(::javax::naming::ldap::UnsolicitedNotificationListener *);
private:
  static const jlong serialVersionUID = -2382603380799883705LL;
  ::javax::naming::ldap::UnsolicitedNotification * __attribute__((aligned(__alignof__( ::java::util::EventObject)))) notice;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_naming_ldap_UnsolicitedNotificationEvent__