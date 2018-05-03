unit VM167Dmo;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, ExtCtrls, ComCtrls;

type
  TForm1 = class(TForm)
    Label1: TLabel;
    Button1: TButton;
    Button7: TButton;
    Button8: TButton;
    RadioButton1: TRadioButton;
    Label8: TLabel;
    RadioButton2: TRadioButton;
    GroupBox1: TGroupBox;
    CheckBox1: TCheckBox;
    RadioButton3: TRadioButton;
    RadioButton4: TRadioButton;
    CheckBox2: TCheckBox;
    CheckBox3: TCheckBox;
    CheckBox4: TCheckBox;
    GroupBox2: TGroupBox;
    CheckBox5: TCheckBox;
    RadioButton5: TRadioButton;
    RadioButton6: TRadioButton;
    CheckBox6: TCheckBox;
    CheckBox7: TCheckBox;
    CheckBox8: TCheckBox;
    GroupBox3: TGroupBox;
    Edit1: TEdit;
    Button20: TButton;
    GroupBox4: TGroupBox;
    GroupBox5: TGroupBox;
    Timer1: TTimer;
    ProgressBar1: TProgressBar;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    ProgressBar2: TProgressBar;
    Label5: TLabel;
    Label6: TLabel;
    ProgressBar3: TProgressBar;
    Label7: TLabel;
    Label10: TLabel;
    ProgressBar4: TProgressBar;
    Label11: TLabel;
    Label17: TLabel;
    ProgressBar5: TProgressBar;
    Label18: TLabel;
    TrackBar2: TTrackBar;
    Label14: TLabel;
    Label15: TLabel;
    TrackBar1: TTrackBar;
    Label12: TLabel;
    Label13: TLabel;
    Button2: TButton;
    Label9: TLabel;
    Label16: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure RadioButton1Click(Sender: TObject);
    procedure RadioButton2Click(Sender: TObject);
    procedure Button5Click(Sender: TObject);
    procedure Button7Click(Sender: TObject);
    procedure Button8Click(Sender: TObject);
    procedure Button6Click(Sender: TObject);
    procedure Button9Click(Sender: TObject);
    procedure Button11Click(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure Timer1Timer(Sender: TObject);
    procedure RadioButton4Click(Sender: TObject);
    procedure RadioButton3Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure CheckBox1Click(Sender: TObject);
    procedure CheckBox2Click(Sender: TObject);
    procedure CheckBox3Click(Sender: TObject);
    procedure CheckBox4Click(Sender: TObject);
    procedure RadioButton5Click(Sender: TObject);
    procedure RadioButton6Click(Sender: TObject);
    procedure CheckBox5Click(Sender: TObject);
    procedure CheckBox6Click(Sender: TObject);
    procedure CheckBox7Click(Sender: TObject);
    procedure CheckBox8Click(Sender: TObject);
    procedure Button20Click(Sender: TObject);
    procedure TrackBar1Change(Sender: TObject);
    procedure TrackBar2Change(Sender: TObject);
    procedure Button2Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;
  Buffer: array[0..100] of integer;
  CardAddress: integer;
  HiNibble:integer;
  LoNibble:integer;
  Cards:integer;
implementation

{$R *.DFM}
function OpenDevices: integer; stdcall; external 'VM167.dll';
procedure CloseDevices; stdcall; external 'VM167.dll';
function ReadAnalogChannel(CardAddress: integer; Channel: integer):integer; stdcall; external 'VM167.dll';
procedure ReadAllAnalog(CardAddress: integer; Buffer: Pointer); stdcall; external 'VM167.dll';
function ReadAllDigital(CardAddress: integer): integer; stdcall; external 'VM167.dll';
procedure SetPWM(CardAddress: integer; Channel: integer; Data: integer; Frequency: integer); stdcall; external 'VM167.dll';
procedure OutputAllPWM(CardAddress: integer; Data1: integer; Data2: integer); stdcall; external 'VM167.dll';
procedure InOutMode(CardAddress: integer; HighNibble: integer; LowNibble: integer);stdcall;  external 'VM167.dll';
procedure OutputAllDigital(CardAddress: integer; Data: integer);stdcall;  external 'VM167.dll';
procedure ClearAllDigital(CardAddress: integer); stdcall; external 'VM167.dll';
procedure ClearDigitalChannel(CardAddress: integer; Channel: integer); stdcall; external 'VM167.dll';
procedure SetDigitalChannel(CardAddress: integer; Channel: integer); stdcall; external 'VM167.dll';
procedure SetAllDigital(CardAddress: integer); stdcall; external 'VM167.dll';
function ReadCounter(CardAddress: integer):cardinal; stdcall; external 'VM167.dll';
procedure ResetCounter(CardAddress: integer); stdcall; external 'VM167.dll';
function VersionFirmware(CardAddress: integer): integer; stdcall; external 'VM167.dll';
function VersionDLL: integer; stdcall; external 'VM167.dll';
function Connected: integer; stdcall; external 'VM167.dll';
procedure ReadBackPWMOut(CardAddress: integer; Buffer: Pointer); stdcall; external 'VM167.dll';
function ReadBackInOutMode(CardAddress: integer):integer; stdcall; external 'VM167.dll';

procedure TForm1.Button1Click(Sender: TObject);
var PWM: array[0..1] of integer;
IOmode:integer;
begin
  RadioButton1.enabled:=false;
  RadioButton2.enabled:=false;
  RadioButton1.checked:=false;
  RadioButton2.checked:=false;
  Timer1.enabled:=false;
  Cards:=OpenDevices;
  case Cards of
    0: label1.caption:='Card open error.';
    1: begin
            label1.caption:='Card 0 connected';
            CardAddress:=0;
            RadioButton1.enabled:=true;
            RadioButton1.checked:=true;
            timer1.interval:=100;
            Timer1.enabled:=true;
        end;
    2: begin
            label1.caption:='Card 1 connected';
            CardAddress:=1;
            RadioButton2.enabled:=true;
            RadioButton2.checked:=true;
            timer1.interval:=100;
            Timer1.enabled:=true;
        end;
    3: begin
            label1.caption:='Cards 0 and 1 connected';
            CardAddress:=0;
            RadioButton1.enabled:=true;
            RadioButton2.enabled:=true;
            RadioButton1.checked:=true;
            timer1.interval:=100;
            Timer1.enabled:=true;
        end;
    -1: label1.caption:='Card not found.';
  end;

  IOmode:=ReadBackInOutMode(CardAddress);
  if (IOmode and 1)>0 then RadioButton3.checked:=true
    else RadioButton4.checked:=true;
  if (IOmode and 2)>0 then RadioButton5.checked:=true
    else RadioButton6.checked:=true;
  ReadBackPWMOut(CardAddress,@PWM[0]);
  TrackBar1.position:=255-PWM[0];
  TrackBar2.position:=255-PWM[1];
  
end;

procedure TForm1.Button5Click(Sender: TObject);
var n:integer;
begin
  n:=ReadAnalogChannel(CardAddress,strtoint(edit1.text));
  label4.caption:=inttostr(n);
end;

procedure TForm1.Button7Click(Sender: TObject);
begin
  InOutMode(CardAddress,0,0);
  SetAllDigital(CardAddress);
  RadioButton4.checked:=true;
  RadioButton6.checked:=true;
end;

procedure TForm1.Button8Click(Sender: TObject);
begin
  InOutMode(CardAddress,0,0);
  ClearAllDigital(CardAddress);
  RadioButton4.checked:=true;
  RadioButton6.checked:=true;
end;

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  CloseDevices;
end;

procedure TForm1.Button6Click(Sender: TObject);
begin
  InOutMode(CardAddress,0,0);
end;

procedure TForm1.Button9Click(Sender: TObject);
var n:integer;
begin
  n:=ReadCounter(CardAddress);
end;

procedure TForm1.Button11Click(Sender: TObject);
begin
  ResetCounter(CardAddress);
end;

procedure TForm1.RadioButton1Click(Sender: TObject);
var PWM: array[0..1] of integer;
IOmode:integer;
begin
  CardAddress:=0;
  IOmode:=ReadBackInOutMode(CardAddress);
  if (IOmode and 1)>0 then RadioButton3.checked:=true
    else RadioButton4.checked:=true;
  if (IOmode and 2)>0 then RadioButton5.checked:=true
    else RadioButton6.checked:=true;
  ReadBackPWMOut(CardAddress,@PWM[0]);
  TrackBar1.position:=255-PWM[0];
  TrackBar2.position:=255-PWM[1];
end;

procedure TForm1.RadioButton2Click(Sender: TObject);
var PWM: array[0..1] of integer;
IOmode:integer;
begin
  CardAddress:=1;
  IOmode:=ReadBackInOutMode(CardAddress);
  if (IOmode and 1)>0 then RadioButton3.checked:=true
    else RadioButton4.checked:=true;
  if (IOmode and 2)>0 then RadioButton5.checked:=true
    else RadioButton6.checked:=true;
  ReadBackPWMOut(CardAddress,@PWM[0]);
  TrackBar1.position:=255-PWM[0];
  TrackBar2.position:=255-PWM[1];
end;



procedure TForm1.Timer1Timer(Sender: TObject);
var i: integer;
Data: array [0..4] of integer;
PWM: array [0..1] of integer;
begin
  timer1.enabled:=false;
  if Cards<>Connected then
  begin
    timer1.interval:=1000;     // check once a second if there is a connection
    Button1Click(Self);         // try to reconnect
  end;
  ReadAllAnalog(CardAddress,@Data[0]);
  ProgressBar1.position:=Data[0];
  ProgressBar2.position:=Data[1];
  ProgressBar3.position:=Data[2];
  ProgressBar4.position:=Data[3];
  ProgressBar5.position:=Data[4];
  Label3.caption:=inttostr(Data[0]);
  Label5.caption:=inttostr(Data[1]);
  Label7.caption:=inttostr(Data[2]);
  Label11.caption:=inttostr(Data[3]);
  Label18.caption:=inttostr(Data[4]);

  i:=ReadAllDigital(CardAddress);
  CheckBox1.checked:=(i and 1)>0;
  CheckBox2.checked:=(i and 2)>0;
  CheckBox3.checked:=(i and 4)>0;
  CheckBox4.checked:=(i and 8)>0;
  CheckBox5.checked:=(i and 16)>0;
  CheckBox6.checked:=(i and 32)>0;
  CheckBox7.checked:=(i and 64)>0;
  CheckBox8.checked:=(i and 128)>0;

  Edit1.text:=inttostr(ReadCounter(CardAddress));
  timer1.enabled:=true;
end;

procedure TForm1.RadioButton4Click(Sender: TObject);
begin
  LoNibble:=0;
  InOutMode(CardAddress,HiNibble,LoNibble);
  CheckBox1.enabled:=true;
  CheckBox2.enabled:=true;
  CheckBox3.enabled:=true;
  CheckBox4.enabled:=true;

end;

procedure TForm1.RadioButton3Click(Sender: TObject);
begin
  LoNibble:=1;
  InOutMode(CardAddress,HiNibble,LoNibble);
  CheckBox1.enabled:=false;
  CheckBox2.enabled:=false;
  CheckBox3.enabled:=false;
  CheckBox4.enabled:=false;
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  HiNibble:=1;
  LoNibble:=1;
end;

procedure TForm1.CheckBox1Click(Sender: TObject);
begin
  if LoNibble=0 then
    if CheckBox1.checked then
      SetDigitalChannel(CardAddress,1)
    else
      ClearDigitalChannel(CardAddress,1);
end;

procedure TForm1.CheckBox2Click(Sender: TObject);
begin
  if LoNibble=0 then
    if CheckBox2.checked then
      SetDigitalChannel(CardAddress,2)
    else
      ClearDigitalChannel(CardAddress,2);
end;

procedure TForm1.CheckBox3Click(Sender: TObject);
begin
  if LoNibble=0 then
    if CheckBox3.checked then
      SetDigitalChannel(CardAddress,3)
    else
      ClearDigitalChannel(CardAddress,3);  
end;

procedure TForm1.CheckBox4Click(Sender: TObject);
begin
  if LoNibble=0 then
    if CheckBox4.checked then
      SetDigitalChannel(CardAddress,4)
    else
      ClearDigitalChannel(CardAddress,4);
end;

procedure TForm1.RadioButton5Click(Sender: TObject);
begin
  HiNibble:=1;
  InOutMode(CardAddress,HiNibble,LoNibble);
  CheckBox5.enabled:=false;
  CheckBox6.enabled:=false;
  CheckBox7.enabled:=false;
  CheckBox8.enabled:=false;
end;

procedure TForm1.RadioButton6Click(Sender: TObject);
begin
  HiNibble:=0;
  InOutMode(CardAddress,HiNibble,LoNibble);
  CheckBox5.enabled:=true;
  CheckBox6.enabled:=true;
  CheckBox7.enabled:=true;
  CheckBox8.enabled:=true;
end;

procedure TForm1.CheckBox5Click(Sender: TObject);
begin
  if HiNibble=0 then
    if CheckBox5.checked then
      SetDigitalChannel(CardAddress,5)
    else
      ClearDigitalChannel(CardAddress,5);
end;

procedure TForm1.CheckBox6Click(Sender: TObject);
begin
  if HiNibble=0 then
    if CheckBox6.checked then
      SetDigitalChannel(CardAddress,6)
    else
      ClearDigitalChannel(CardAddress,6);
end;

procedure TForm1.CheckBox7Click(Sender: TObject);
begin
  if HiNibble=0 then
    if CheckBox7.checked then
      SetDigitalChannel(CardAddress,7)
    else
      ClearDigitalChannel(CardAddress,7);
end;

procedure TForm1.CheckBox8Click(Sender: TObject);
begin
  if HiNibble=0 then
    if CheckBox8.checked then
      SetDigitalChannel(CardAddress,8)
    else
      ClearDigitalChannel(CardAddress,8);
end;

procedure TForm1.Button20Click(Sender: TObject);
begin
  ResetCounter(CardAddress);
end;

procedure TForm1.TrackBar1Change(Sender: TObject);
begin
  SetPWM(CardAddress,1,255-TrackBar1.position,2);
  Label13.caption:=inttostr(255-TrackBar1.position);
end;

procedure TForm1.TrackBar2Change(Sender: TObject);
begin
  SetPWM(CardAddress,2,255-TrackBar2.position,2);
  Label15.caption:=inttostr(255-TrackBar2.position);
end;

procedure TForm1.Button2Click(Sender: TObject);
var ver:integer;
begin
  ver:=VersionFirmware(CardAddress);
  Label9.Caption:='Firmware: v'+inttostr(ver shr 24)+'.'+inttostr($FF and (ver shr 16))
    +'.'+inttostr($FF and (ver shr 8))+'.'+inttostr($FF and ver);
  ver:=VersionDLL;
  Label16.Caption:='DLL: v'+inttostr(ver shr 24)+'.'+inttostr($FF and (ver shr 16))
    +'.'+inttostr($FF and (ver shr 8))+'.'+inttostr($FF and ver);
end;

end.
