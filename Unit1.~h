//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *background;
        TShape *Shape1;
        TImage *paddleLeft;
        TImage *paddleRight;
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Nowagra1;
        TMenuItem *Zakocz1;
        TMenuItem *Pomoc1;
        TMenuItem *Autor1;
        TLabel *scoreLeft;
        TLabel *Label2;
        TLabel *scoreRight;
        TImage *ball;
        TTimer *timerPaddleLeftUp;
        TTimer *timerPaddleRightUp;
        TTimer *timerPaddleLeftDown;
        TTimer *timerPaddleRightDown;
        TTimer *ballTimer;
        void __fastcall timerPaddleLeftDownTimer(TObject *Sender);
        void __fastcall timerPaddleLeftUpTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall timerPaddleRightDownTimer(TObject *Sender);
        void __fastcall timerPaddleRightUpTimer(TObject *Sender);
        void __fastcall ballTimerTimer(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
