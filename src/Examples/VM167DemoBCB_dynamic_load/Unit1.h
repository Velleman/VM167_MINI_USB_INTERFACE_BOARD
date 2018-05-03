//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>

typedef int (__stdcall *VOID2INT)(void);
typedef int (__stdcall *INT2INT)(int);
typedef unsigned int (__stdcall *INT2UINT)(int);
typedef int (__stdcall *INTINT2INT)(int, int);
typedef bool (__stdcall *INT2BOOL)(int);
typedef bool (__stdcall *INTINT2BOOL)(int, int);
typedef void (__stdcall *VOID2VOID)(void);
typedef void (__stdcall *INT2VOID)(int);
typedef void (__stdcall *INTINTP2VOID)(int, int *);
typedef void (__stdcall *INTINT2VOID)(int, int);
typedef void (__stdcall *INTINTINT2VOID)(int, int, int);
typedef void (__stdcall *INTINTINTINT2VOID)(int, int, int, int);

VOID2INT OpenDevices;
VOID2VOID CloseDevices;
INTINT2INT ReadAnalogChannel;
INTINTP2VOID ReadAllAnalog;
INTINTINTINT2VOID SetPWM;
INTINTINT2VOID OutputAllPWM;
INTINT2VOID OutputAllDigital;
INTINT2VOID ClearDigitalChannel;
INT2VOID ClearAllDigital;
INTINT2VOID SetDigitalChannel;
INT2VOID SetAllDigital;
INTINT2BOOL ReadDigitalChannel;
INT2INT ReadAllDigital;
INTINTINT2VOID InOutMode;
INT2UINT ReadCounter;
INT2VOID ResetCounter;
VOID2INT Connected;
VOID2INT VersionDLL;
INT2INT VersionFirmware;
INTINTP2VOID ReadBackPWMOut;
INT2INT ReadBackInOutMode;

HINSTANCE hDLL;
int CardAddress;
int HiNibble;
int LoNibble;
int Cards;

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button1;
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TButton *Button2;
        TButton *Button3;
        TGroupBox *GroupBox1;
        TRadioButton *RadioButton3;
        TRadioButton *RadioButton4;
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TCheckBox *CheckBox3;
        TCheckBox *CheckBox4;
        TGroupBox *GroupBox2;
        TRadioButton *RadioButton5;
        TRadioButton *RadioButton6;
        TCheckBox *CheckBox5;
        TCheckBox *CheckBox6;
        TCheckBox *CheckBox7;
        TCheckBox *CheckBox8;
        TGroupBox *GroupBox3;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
        TProgressBar *ProgressBar1;
        TProgressBar *ProgressBar2;
        TProgressBar *ProgressBar3;
        TProgressBar *ProgressBar4;
        TProgressBar *ProgressBar5;
        TGroupBox *GroupBox4;
        TEdit *Edit1;
        TButton *Button4;
        TGroupBox *GroupBox5;
        TLabel *Label13;
        TLabel *Label14;
        TLabel *Label15;
        TLabel *Label16;
        TTrackBar *TrackBar1;
        TTrackBar *TrackBar2;
        TTimer *Timer1;
        TButton *Button5;
        TLabel *Label17;
        TLabel *Label18;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall TrackBar1Change(TObject *Sender);
        void __fastcall TrackBar2Change(TObject *Sender);
        void __fastcall RadioButton3Click(TObject *Sender);
        void __fastcall RadioButton4Click(TObject *Sender);
        void __fastcall RadioButton5Click(TObject *Sender);
        void __fastcall RadioButton6Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall CheckBox1Click(TObject *Sender);
        void __fastcall CheckBox2Click(TObject *Sender);
        void __fastcall CheckBox3Click(TObject *Sender);
        void __fastcall CheckBox4Click(TObject *Sender);
        void __fastcall CheckBox5Click(TObject *Sender);
        void __fastcall CheckBox6Click(TObject *Sender);
        void __fastcall CheckBox7Click(TObject *Sender);
        void __fastcall CheckBox8Click(TObject *Sender);
        void __fastcall RadioButton1Click(TObject *Sender);
        void __fastcall RadioButton2Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 