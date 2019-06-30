
// ******************************************************* //
//                                                       
//                   XML Data Binding                    
//                                                       
//         Generated on: 16.06.2019 16:16:03             
//       Generated from: C:\Users\keks\Desktop\rab.xml   
//   Settings stored in: C:\Users\keks\Desktop\rab.xdb   
//                                                       
// ******************************************************* //

#ifndef   rabH
#define   rabH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLbodyType;
typedef System::DelphiInterface<IXMLbodyType> _di_IXMLbodyType;
__interface IXMLpicType;
typedef System::DelphiInterface<IXMLpicType> _di_IXMLpicType;
__interface IXMLimgType;
typedef System::DelphiInterface<IXMLimgType> _di_IXMLimgType;

// IXMLbodyType 

__interface INTERFACE_UUID("{DC5C4C7F-D17C-4CC9-B2B6-BA93A48EB6E1}") IXMLbodyType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLpicType __fastcall Get_pic(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLpicType __fastcall Add() = 0;
  virtual _di_IXMLpicType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLpicType pic[int Index] = { read=Get_pic };/* default */
};

// IXMLpicType 

__interface INTERFACE_UUID("{032395BA-FDB1-45BB-AEB0-676BD9DEC063}") IXMLpicType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_name() = 0;
  virtual _di_IXMLimgType __fastcall Get_img() = 0;
  virtual void __fastcall Set_name(System::UnicodeString Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString name = { read=Get_name, write=Set_name };
  __property _di_IXMLimgType img = { read=Get_img };
};

// IXMLimgType 

__interface INTERFACE_UUID("{66219F38-49F7-4B83-BA88-E31540D8E1B8}") IXMLimgType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_src() = 0;
  virtual int __fastcall Get_width() = 0;
  virtual int __fastcall Get_height() = 0;
  virtual void __fastcall Set_src(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_width(int Value) = 0;
  virtual void __fastcall Set_height(int Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString src = { read=Get_src, write=Set_src };
  __property int width = { read=Get_width, write=Set_width };
  __property int height = { read=Get_height, write=Set_height };
};

// Forward Decls 

class TXMLbodyType;
class TXMLpicType;
class TXMLimgType;

// TXMLbodyType 

class TXMLbodyType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLbodyType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLbodyType 
  virtual _di_IXMLpicType __fastcall Get_pic(int Index);
  virtual _di_IXMLpicType __fastcall Add();
  virtual _di_IXMLpicType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLpicType 

class TXMLpicType : public Xml::Xmldoc::TXMLNode, public IXMLpicType
{
  __IXMLNODE_IMPL__
private:
  _di_IXMLimgType Fimg;
protected:
  // IXMLpicType 
  virtual System::UnicodeString __fastcall Get_name();
  virtual _di_IXMLimgType __fastcall Get_img();
  virtual void __fastcall Set_name(System::UnicodeString Value);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLimgType 

class TXMLimgType : public Xml::Xmldoc::TXMLNode, public IXMLimgType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLimgType 
  virtual System::UnicodeString __fastcall Get_src();
  virtual int __fastcall Get_width();
  virtual int __fastcall Get_height();
  virtual void __fastcall Set_src(System::UnicodeString Value);
  virtual void __fastcall Set_width(int Value);
  virtual void __fastcall Set_height(int Value);
};

// Global Functions 

_di_IXMLbodyType __fastcall Getbody(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLbodyType __fastcall Getbody(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLbodyType __fastcall Loadbody(const System::UnicodeString& FileName);
_di_IXMLbodyType __fastcall  Newbody();

#define TargetNamespace ""

#endif