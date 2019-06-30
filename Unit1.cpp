//---------------------------------------------------------------------------
#include <jpeg.hpp>
#include "Unit1.h"
#include "rab.h"
#include "System.NetEncoding.hpp"
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{

Memo1->Lines->Clear();
_di_IXMLbodyType body =  Getbody (XMLDocument1);
String base64_str;

AnsiString d,x = Edit1-> Text;
char *m =x.c_str();
int p=0;
int a=0;

	TBitmap *Bitmap;
	Bitmap = new TBitmap;
	TImageList *lstImages;
	lstImages = new TImageList(this);

	 for (int i=0; i < body-> Count; i++)
	 {
		d=body-> Get_pic(i)-> name;
		 char *c =d.c_str();
		 char *p=strstr(d.c_str(),x.c_str());

		if(p!=0)
		{
			base64_str = body-> Get_pic(i)->Get_img()->Get_src();
			a=a+1;
			Memo1 -> Lines -> Add (body-> Get_pic(i)-> name) ;

			TStringStream *base64_stream = new TStringStream;
			TMemoryStream *img_stream = new TMemoryStream;

			base64_stream -> WriteString(base64_str);
			base64_stream -> Position= 0;
			TNetEncoding::Base64->Decode(base64_stream, img_stream);

			img_stream->Position= 0;

			TJPEGImage *jpeg = new TJPEGImage;
			jpeg ->LoadFromStream(img_stream);

			Bitmap -> Assign(jpeg);

			delete jpeg;
			delete img_stream;
			delete base64_stream;
		}
	}


		if(lstImages ->Width < Bitmap -> Width)
		lstImages ->Width  = Bitmap ->Width;
		if(lstImages ->Height < Bitmap ->Height)
		lstImages ->Height = Bitmap ->Height;

		  for (int w =0; w < a; w++)
		  {
			 lstImages -> Add(Bitmap,NULL);
		  }

		 delete Bitmap;

	Image1->Picture->Bitmap = NULL;
	Image1->Height = lstImages->Count * lstImages->Height;

	int shift = 0;
	for(int i = 0; i < lstImages->Count; i++)
	{
		lstImages->Draw(Image1->Canvas,
						  0,
						  shift,
						  i);
		shift = shift + lstImages -> Height;
	}

	delete lstImages;
}

