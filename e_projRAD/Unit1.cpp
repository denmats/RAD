//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int n=0;
	n=StrToInt(Edit1->Text);
	if ((n%2)!=0) {n=n+1;}



	int i=1;
	while( i<=101)
	{
		n+=2;
		Results->Lines->Add(n);
		i++;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	  Results->Clear();
	  Edit1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
    TabSheet1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
      ShowMessage("There are two simple programs here");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
    TabSheet2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
     TabSheet3->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button9Click(TObject *Sender)
{
   int n, number;

	n=StrToInt(Edit2->Text);

	for (int i=n; i<1000000; i++)
		{
			number=i%n;
			if(number==0)
			Memo1->Lines->Add(i);
		}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button10Click(TObject *Sender)
{
Memo1->Clear();
Edit2->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button11Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button12Click(TObject *Sender)
{
  ShowMessage("Wyœwietlaje na ekranie kolejne liczby ca³kowite typu int, które s¹ podzielne bez reszty przez n (gdzie n jest zadawane z klawiatury)");
}
//---------------------------------------------------------------------------
