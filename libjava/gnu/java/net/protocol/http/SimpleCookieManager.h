
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_http_SimpleCookieManager__
#define __gnu_java_net_protocol_http_SimpleCookieManager__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace protocol
        {
          namespace http
          {
              class Cookie;
              class SimpleCookieManager;
          }
        }
      }
    }
  }
}

class gnu::java::net::protocol::http::SimpleCookieManager : public ::java::lang::Object
{

public:
  SimpleCookieManager();
  virtual void setCookie(::gnu::java::net::protocol::http::Cookie *);
  virtual JArray< ::gnu::java::net::protocol::http::Cookie * > * getCookies(::java::lang::String *, jboolean, ::java::lang::String *);
private:
  void addCookies(::java::util::ArrayList *, ::java::lang::String *, jboolean, ::java::lang::String *, ::java::util::Date *);
public: // actually protected
  ::java::util::Map * __attribute__((aligned(__alignof__( ::java::lang::Object)))) cookies;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_protocol_http_SimpleCookieManager__
