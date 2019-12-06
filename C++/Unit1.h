//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "TCP.h"
//---------------------------------------------------------------------------
class TIHM : public TForm
{
__published:	// Composants gérés par l'EDI
	TButton *BoutonConnexion;
	TLabel *Label1;
	TButton *BoutonDeconnexion;
	TButton *BoutonCloche1;
	TButton *BoutonCloche2;
	TButton *BoutonCloche3;
	TButton *BoutonCloche4;
	TEdit *Edit1;
	void __fastcall BoutonConnexionClick(TObject *Sender);
	void __fastcall BoutonDeconnexionClick(TObject *Sender);
	void __fastcall BoutonCloche1Click(TObject *Sender);
	void __fastcall BoutonCloche2Click(TObject *Sender);
	void __fastcall BoutonCloche3Click(TObject *Sender);
	void __fastcall BoutonCloche4Click(TObject *Sender);
	void __fastcall Edit1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
private:	// Déclarations utilisateur
	ClientTCP cloche;
	char trameMarteau[14];
public:		// Déclarations utilisateur
	__fastcall TIHM(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TIHM *IHM;
//---------------------------------------------------------------------------
#endif

