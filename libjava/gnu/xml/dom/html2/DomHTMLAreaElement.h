
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_html2_DomHTMLAreaElement__
#define __gnu_xml_dom_html2_DomHTMLAreaElement__

#pragma interface

#include <gnu/xml/dom/html2/DomHTMLElement.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
        namespace html2
        {
            class DomHTMLAreaElement;
            class DomHTMLDocument;
        }
      }
    }
  }
}

class gnu::xml::dom::html2::DomHTMLAreaElement : public ::gnu::xml::dom::html2::DomHTMLElement
{

public: // actually protected
  DomHTMLAreaElement(::gnu::xml::dom::html2::DomHTMLDocument *, ::java::lang::String *, ::java::lang::String *);
public:
  virtual ::java::lang::String * getAccessKey();
  virtual void setAccessKey(::java::lang::String *);
  virtual ::java::lang::String * getAlt();
  virtual void setAlt(::java::lang::String *);
  virtual ::java::lang::String * getCoords();
  virtual void setCoords(::java::lang::String *);
  virtual ::java::lang::String * getHref();
  virtual void setHref(::java::lang::String *);
  virtual jboolean getNoHref();
  virtual void setNoHref(jboolean);
  virtual ::java::lang::String * getShape();
  virtual void setShape(::java::lang::String *);
  virtual jint getTabIndex();
  virtual void setTabIndex(jint);
  virtual ::java::lang::String * getTarget();
  virtual void setTarget(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_html2_DomHTMLAreaElement__
