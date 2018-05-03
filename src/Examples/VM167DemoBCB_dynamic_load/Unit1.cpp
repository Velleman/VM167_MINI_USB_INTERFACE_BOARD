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
   hDLL = LoadLibrary("VM167.dll");
   if (hDLL == NULL)
   {
        Application->MessageBox( "Error: VM167.dll not found", "Error", MB_OK);
        Close();
   }
   else
   {
        OpenDevices = (VOID2INT) GetProcAddress(hDLL, "OpenDevices");
        CloseDevices = (VOID2VOID) GetProcAddress(hDLL, "CloseDevices");
        ReadAnalogChannel = (INTINT2INT) GetProcAddress(hDLL, "ReadAnalogChannel");
        ReadAllAnalog = (INTINTP2VOID) GetProcAddress(hDLL, "ReadAllAnalog");
        SetPWM = (INTINTINTINT2VOID) GetProcAddress(hDLL, "SetPWM");
        OutputAllPWM = (INTINTINT2VOID) GetProcAddress(hDLL, "OutputAllPWM");
        OutputAllDigital = (INTINT2VOID) GetProcAddress(hDLL, "OutputAllDigital");
        ClearDigitalChannel = (INTINT2VOID) GetProcAddress(hDLL, "ClearDigitalChannel");
        ClearAllDigital = (INT2VOID) GetProcAddress(hDLL, "ClearAllDigital");
        SetDigitalChannel = (INTINT2VOID) GetProcAddress(hDLL, "SetDigitalChannel");
        SetAllDigital = (INT2VOID) GetProcAddress(hDLL, "SetAllDigital");
        ReadDigitalChannel = (INTINT2BOOL) GetProcAddress(hDLL, "ReadDigitalChannel");
        ReadAllDigital = (INT2INT) GetProcAddress(hDLL, "ReadAllDigital");
        InOutMode = (INTINTINT2VOID) GetProcAddress(hDLL, "InOutMode");
        ReadCounter = (INT2UINT) GetProcAddress(hDLL, "ReadCounter");
        ResetCounter = (INT2VOID) GetProcAddress(hDLL, "ResetCounter");
        Connected = (VOID2INT) GetProcAddress(hDLL, "Connected");
        VersionDLL = (VOID2INT) GetProcAddress(hDLL, "VersionDLL");
        VersionFirmware = (INT2INT) GetProcAddress(hDLL, "VersionFirmware");
        ReadBackPWMOut = (INTINTP2VOID) GetProcAddress(hDLL, "ReadBackPWMOut");
        ReadBackInOutMode = (INT2INT) GetProcAddress(hDLL, "ReadBackInOutMode");

     if (!OpenDevices || !CloseDevices || !ReadAnalogChannel || !ReadAllAnalog
          || !SetPWM || !OutputAllPWM || !OutputAllDigital || !ClearDigitalChannel
         || !ClearAllDigital || !SetDigitalChannel || !SetAllDigital || !ReadDigitalChannel
        || !ReadAllDigital || !InOutMode || !ReadCounter || !ResetCounter || !Connected
        || !VersionDLL || !VersionFirmware || !ReadBackPWMOut || !ReadBackInOutMode)
        {
                Application->MessageBox( "Error: Reading VM167.dll functions failed", "Error", MB_OK);
                FreeLibrary(hDLL);
                Close();
        }
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        int PWM[2];
        int IOmode;
        RadioButton1->Enabled = false;
        RadioButton2->Enabled = false;
        RadioButton1->Checked = false;
        RadioButton2->Checked = false;
        Cards = OpenDevices();
        switch (Cards)
        {
                case 0:
                        Label1->Caption = "Card open error.";
                        break;
                case 1:
                        Label1->Caption = "Card 0 connected.";
                        RadioButton1->Enabled = true;
                        RadioButton1->Checked = true;
                        CardAddress = 0;
                        Timer1->Interval = 100;
                        Timer1->Enabled = true;
                        break;
                case 2:
                        Label1->Caption = "Card 1 connected.";
                        RadioButton2->Enabled = true;
                        RadioButton2->Checked = true;
                        CardAddress = 1;
                        Timer1->Interval = 100;
                        Timer1->Enabled = true;
                        break;
                case 3:
                        Label1->Caption = "Cards 0 and 1 connected.";
                        RadioButton1->Enabled = true;
                        RadioButton1->Checked = true;
                        RadioButton2->Enabled = true;
                        RadioButton2->Checked = false;
                        CardAddress = 0;
                        Timer1->Interval = 100;
                        Timer1->Enabled = true;
                        break;
                case -1:
                        Label1->Caption = "Card not found.";
                        break;
        }
        IOmode = ReadBackInOutMode(CardAddress);
        if ((IOmode & 1)>0)
                RadioButton3->Checked = true;
        else
                RadioButton4->Checked = true;
        if ((IOmode & 2)>0)
                RadioButton5->Checked = true;
        else
                RadioButton6->Checked = true;

        ReadBackPWMOut(CardAddress, PWM);
        TrackBar1->Position = 255-PWM[0];
        TrackBar2->Position = 255-PWM[1];
        Label15->Caption = IntToStr(PWM[0]);
        Label16->Caption = IntToStr(PWM[1]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        HiNibble = 1;
        LoNibble = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
        CloseDevices();
        FreeLibrary(hDLL);        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        InOutMode(CardAddress, 0, 0);
        SetAllDigital(CardAddress);
        RadioButton4->Checked = true;
        RadioButton6->Checked = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
        InOutMode(CardAddress, 0, 0);
        ClearAllDigital(CardAddress);
        RadioButton4->Checked = true;
        RadioButton6->Checked = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        int i;
        int Buffer[8];
        Timer1->Enabled = false;
        if(Cards != Connected())
        {
                Timer1->Interval = 1000;   // check once a second if there is a connection
                Button1Click(Sender);     // try to reconnect
        }
        ReadAllAnalog(CardAddress, Buffer);    
        ProgressBar1->Position = Buffer[0];
        Label4->Caption = Buffer[0];
        ProgressBar2->Position = Buffer[1];
        Label6->Caption = Buffer[1];
        ProgressBar3->Position = Buffer[2];
        Label8->Caption = Buffer[2];
        ProgressBar4->Position = Buffer[3];
        Label10->Caption = Buffer[3];
        ProgressBar5->Position = Buffer[4];
        Label12->Caption = Buffer[4];

        i = ReadAllDigital(CardAddress);    
        CheckBox1->Checked = (i & 1);    
        CheckBox2->Checked = (i & 2);    
        CheckBox3->Checked = (i & 4);    
        CheckBox4->Checked = (i & 8);    
        CheckBox5->Checked = (i & 16);    
        CheckBox6->Checked = (i & 32);    
        CheckBox7->Checked = (i & 64);    
        CheckBox8->Checked = (i & 128);
        
        Edit1->Text = ReadCounter(CardAddress);
        Timer1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{
        Label15->Caption = IntToStr(255-TrackBar1->Position);
        SetPWM(CardAddress, 1, 255-TrackBar1->Position, 2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TrackBar2Change(TObject *Sender)
{
        Label16->Caption = IntToStr(255-TrackBar2->Position);
        SetPWM(CardAddress, 2, 255-TrackBar2->Position, 2);
}

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
        CheckBox1->Enabled = false;    
        CheckBox2->Enabled = false;    
        CheckBox3->Enabled = false;    
        CheckBox4->Enabled = false;    
        LoNibble = 1;    
        InOutMode(CardAddress, HiNibble, LoNibble);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
        CheckBox1->Enabled = true;    
        CheckBox2->Enabled = true;    
        CheckBox3->Enabled = true;    
        CheckBox4->Enabled = true;    
        LoNibble = 0;    
        InOutMode(CardAddress, HiNibble, LoNibble);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton5Click(TObject *Sender)
{
        CheckBox5->Enabled = false;    
        CheckBox6->Enabled = false;    
        CheckBox7->Enabled = false;    
        CheckBox8->Enabled = false;    
        HiNibble = 1;    
        InOutMode(CardAddress, HiNibble, LoNibble);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton6Click(TObject *Sender)
{
        CheckBox5->Enabled = true;    
        CheckBox6->Enabled = true;    
        CheckBox7->Enabled = true;    
        CheckBox8->Enabled = true;    
        HiNibble = 0;    
        InOutMode(CardAddress, HiNibble, LoNibble);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
        ResetCounter(CardAddress);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
        if (LoNibble == 0)
        {
                if (CheckBox1->Checked)
                        SetDigitalChannel(CardAddress, 1);
                else
                        ClearDigitalChannel(CardAddress, 1);
        }
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
        if (LoNibble == 0)
        {
                if (CheckBox2->Checked)
                        SetDigitalChannel(CardAddress, 2);
                else
                        ClearDigitalChannel(CardAddress, 2);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox3Click(TObject *Sender)
{
        if (LoNibble == 0)
        {
                if (CheckBox3->Checked)
                        SetDigitalChannel(CardAddress, 3);
                else
                        ClearDigitalChannel(CardAddress, 3);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox4Click(TObject *Sender)
{
        if (LoNibble == 0)
        {
                if (CheckBox4->Checked)
                        SetDigitalChannel(CardAddress, 4);
                else
                        ClearDigitalChannel(CardAddress, 4);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox5Click(TObject *Sender)
{
        if (HiNibble == 0)
        {
                if (CheckBox5->Checked)
                        SetDigitalChannel(CardAddress, 5);
                else
                        ClearDigitalChannel(CardAddress, 5);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox6Click(TObject *Sender)
{
        if (HiNibble == 0)
        {
                if (CheckBox6->Checked)
                        SetDigitalChannel(CardAddress, 6);
                else
                        ClearDigitalChannel(CardAddress, 6);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox7Click(TObject *Sender)
{
        if (HiNibble == 0)
        {
                if (CheckBox7->Checked)
                        SetDigitalChannel(CardAddress, 7);
                else
                        ClearDigitalChannel(CardAddress, 7);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox8Click(TObject *Sender)
{
        if (HiNibble == 0)
        {
                if (CheckBox8->Checked)
                        SetDigitalChannel(CardAddress, 8);
                else
                        ClearDigitalChannel(CardAddress, 8);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
        int PWM[2];
        int IOmode;
        CardAddress = 0;
        IOmode = ReadBackInOutMode(CardAddress);
        if ((IOmode & 1)>0)
                RadioButton3->Checked = true;
        else
                RadioButton4->Checked = true;
        if ((IOmode & 2)>0)
                RadioButton5->Checked = true;
        else
                RadioButton6->Checked = true;

        ReadBackPWMOut(CardAddress, PWM);
        TrackBar1->Position = 255-PWM[0];
        TrackBar2->Position = 255-PWM[1];
        Label15->Caption = IntToStr(PWM[0]);
        Label16->Caption = IntToStr(PWM[1]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
        int PWM[2];
        int IOmode;
        CardAddress = 1;
        IOmode = ReadBackInOutMode(CardAddress);
        if ((IOmode & 1)>0)
                RadioButton3->Checked = true;
        else
                RadioButton4->Checked = true;
        if ((IOmode & 2)>0)
                RadioButton5->Checked = true;
        else
                RadioButton6->Checked = true;

        ReadBackPWMOut(CardAddress, PWM);
        TrackBar1->Position = 255-PWM[0];
        TrackBar2->Position = 255-PWM[1];
        Label15->Caption = IntToStr(PWM[0]);
        Label16->Caption = IntToStr(PWM[1]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
        int ver;
        ver = VersionFirmware(CardAddress);

        Label17->Caption = "Firmware v"+IntToStr(ver >> 24)
        +"."+IntToStr((ver >> 16) & 0xFF)+"."+IntToStr((ver >> 8) & 0xFF)+"."+IntToStr(ver & 0xFF);

        ver = VersionDLL();
        Label18->Caption = "DLL v"+IntToStr(ver >> 24)
        +"."+IntToStr((ver >> 16) & 0xFF)+"."+IntToStr((ver >> 8) & 0xFF)+"."+IntToStr(ver & 0xFF);
}
//---------------------------------------------------------------------------

