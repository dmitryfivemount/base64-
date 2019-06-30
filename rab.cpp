
// ******************************************************* //
//                                                       
//                   XML Data Binding                    
//                                                       
//         Generated on: 16.06.2019 16:16:03             
//       Generated from: C:\Users\keks\Desktop\rab.xml   
//   Settings stored in: C:\Users\keks\Desktop\rab.xdb   
//                                                       
// ******************************************************* //

#include <System.hpp>
#pragma hdrstop

#include "rab.h"


// Global Functions 

_di_IXMLbodyType __fastcall Getbody(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLbodyType) Doc->GetDocBinding("body", __classid(TXMLbodyType), TargetNamespace);
};

_di_IXMLbodyType __fastcall Getbody(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getbody(DocIntf);
};

_di_IXMLbodyType __fastcall Loadbody(const System::UnicodeString& FileName)
{
  return (_di_IXMLbodyType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("body", __classid(TXMLbodyType), TargetNamespace);
};

_di_IXMLbodyType __fastcall  Newbody()
{
  return (_di_IXMLbodyType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("body", __classid(TXMLbodyType), TargetNamespace);
};

// TXMLbodyType 

void __fastcall TXMLbodyType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("pic"), __classid(TXMLpicType));
  ItemTag = "pic";
  ItemInterface = __uuidof(IXMLpicType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLpicType __fastcall TXMLbodyType::Get_pic(int Index)
{
  return (_di_IXMLpicType) List->Nodes[Index];
};

_di_IXMLpicType __fastcall TXMLbodyType::Add()
{
  return (_di_IXMLpicType) AddItem(-1);
};

_di_IXMLpicType __fastcall TXMLbodyType::Insert(const int Index)
{
  return (_di_IXMLpicType) AddItem(Index);
};

// TXMLpicType 

void __fastcall TXMLpicType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("img"), __classid(TXMLimgType));
  Xml::Xmldoc::TXMLNode::AfterConstruction();
};

System::UnicodeString __fastcall TXMLpicType::Get_name()
{
  return GetChildNodes()->Nodes[System::UnicodeString("name")]->Text;
};

void __fastcall TXMLpicType::Set_name(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("name")]->NodeValue = Value;
};

_di_IXMLimgType __fastcall TXMLpicType::Get_img()
{
  return (_di_IXMLimgType) GetChildNodes()->Nodes[System::UnicodeString("img")];
};

// TXMLimgType 

System::UnicodeString __fastcall TXMLimgType::Get_src()
{
  return GetAttributeNodes()->Nodes[System::UnicodeString("src")]->Text;
};

void __fastcall TXMLimgType::Set_src(System::UnicodeString Value)
{
  SetAttribute(System::UnicodeString("src"), Value);
};

int __fastcall TXMLimgType::Get_width()
{
  return GetAttributeNodes()->Nodes[System::UnicodeString("width")]->NodeValue.operator int();
};

void __fastcall TXMLimgType::Set_width(int Value)
{
  SetAttribute(System::UnicodeString("width"), Value);
};

int __fastcall TXMLimgType::Get_height()
{
  return GetAttributeNodes()->Nodes[System::UnicodeString("height")]->NodeValue.operator int();
};

void __fastcall TXMLimgType::Set_height(int Value)
{
  SetAttribute(System::UnicodeString("height"), Value);
};
