//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int x = -8;
int y = 0;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerPaddleLeftDownTimer(TObject *Sender)
{
        if (paddleLeft->Top + paddleLeft->Height < background->Height + 15) paddleLeft->Top += 15;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::timerPaddleLeftUpTimer(TObject *Sender)
{
        if (paddleLeft->Top > background->Top + 20) paddleLeft->Top -= 15;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if (Key == 0x51) timerPaddleLeftUp->Enabled = true;
        if (Key == 0x41) timerPaddleLeftDown->Enabled = true;

        if (Key == VK_UP) timerPaddleRightUp->Enabled = true;
        if (Key == VK_DOWN) timerPaddleRightDown->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if (Key == 0x51) timerPaddleLeftUp->Enabled = false;
        if (Key == 0x41) timerPaddleLeftDown->Enabled = false;

        if (Key == VK_UP) timerPaddleRightUp->Enabled = false;
        if (Key == VK_DOWN) timerPaddleRightDown->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::timerPaddleRightDownTimer(TObject *Sender)
{
        if (paddleRight->Top + paddleRight->Height < background->Height + 15) paddleRight->Top += 15;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::timerPaddleRightUpTimer(TObject *Sender)
{
        if (paddleRight->Top > background->Top + 20) paddleRight->Top -= 15;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ballTimerTimer(TObject *Sender)
{
        ball->Left += x;
        ball->Top += y;

        //odbij od gornej sciany
        if (ball->Top - 5 <= background->Top) y = -y;

        //odbij od dolnej sciany
        if (ball->Top + ball->Height >= background->Top + background->Height) y = -y;

        if (ball->Left <= paddleLeft->Left + paddleLeft->Width && ball->Top+ball->Height/2 >=paddleLeft->Top && ball->Top+ball->Height/2 <= paddleLeft ->Top + paddleLeft->Height)  x = -x;

        if (ball->Left + ball->Width >= paddleRight->Left && ball->Top+ball->Height/2 >=paddleRight->Top && ball->Top+ball->Height/2 <= paddleRight ->Top + paddleRight->Height)  x = -x;



}
//---------------------------------------------------------------------------

