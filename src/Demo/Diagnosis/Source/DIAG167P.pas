unit DIAG167P;

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
  StdCtrls, ExtCtrls, clipbrd;

type
  TForm1 = class(TForm)
    Button1: TButton;
    Label1: TLabel;
    Button2: TButton;
    Label2: TLabel;
    Button4: TButton;
    Label3: TLabel;
    Button5: TButton;
    Edit1: TEdit;
    Label4: TLabel;
    Button7: TButton;
    Button8: TButton;
    Button3: TButton;
    Edit2: TEdit;
    Edit3: TEdit;
    Button6: TButton;
    Edit4: TEdit;
    Label5: TLabel;
    Label6: TLabel;
    Button9: TButton;
    Button11: TButton;
    Label7: TLabel;
    Bevel1: TBevel;
    Bevel2: TBevel;
    Bevel3: TBevel;
    RadioButton1: TRadioButton;
    Label8: TLabel;
    RadioButton2: TRadioButton;
    Button10: TButton;
    Label9: TLabel;
    Button12: TButton;
    Label10: TLabel;
    Label11: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
    procedure Button5Click(Sender: TObject);
    procedure Button7Click(Sender: TObject);
    procedure Button8Click(Sender: TObject);
    procedure Button10Click(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure Button3Click(Sender: TObject);
    procedure Button6Click(Sender: TObject);
    procedure Button9Click(Sender: TObject);
    procedure Button11Click(Sender: TObject);
    procedure RadioButton1Click(Sender: TObject);
    procedure RadioButton2Click(Sender: TObject);
    procedure Button12Click(Sender: TObject);

  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

  CardAddress: integer;

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
procedure SetDigitalChannel(CardAddress: integer; Channel: integer); stdcall; external 'VM167.dll';
procedure SetAllDigital(CardAddress: integer); stdcall; external 'VM167.dll';

function ReadCounter(CardAddress: integer):cardinal; stdcall; external 'VM167.dll';
procedure ResetCounter(CardAddress: integer); stdcall; external 'VM167.dll';

function VersionFirmware(CardAddress: integer): integer; stdcall; external 'VM167.dll';
function VersionDLL: integer; stdcall; external 'VM167.dll';
function Connected: integer; stdcall; external 'VM167.dll';

procedure TForm1.Button1Click(Sender: TObject);
var i:integer;
begin
  label1.caption:='- - -';
  label1.update;
  RadioButton1.enabled:=false;
  RadioButton2.enabled:=false;
  RadioButton1.checked:=false;
  RadioButton2.checked:=false;
  i:=OpenDevices;
  case i of
    0: label1.caption:='Card open error.';
    1: begin
            label1.caption:='Card 0 connected';
            CardAddress:=0;
            RadioButton1.enabled:=true;
            RadioButton1.checked:=true;
        end;
    2: begin
            label1.caption:='Card 1 connected';
            CardAddress:=1;
            RadioButton2.enabled:=true;
            RadioButton2.checked:=true;
        end;
    3: begin
            label1.caption:='Cards 0 and 1 connected';
            CardAddress:=0;
            RadioButton1.enabled:=true;
            RadioButton2.enabled:=true;
            RadioButton1.checked:=true;
        end;
    -1: label1.caption:='Card not found.';
  end;
end;

procedure TForm1.Button2Click(Sender: TObject);
var i:integer;
Buffer: array[0..4] of integer;
begin
  ReadAllAnalog(CardAddress,@Buffer[0]);
  label2.caption:='AI1..AI5:';
  for i:=0 to 4 do label2.caption:=label2.caption+' '+inttostr(buffer[i]);
end;

procedure TForm1.Button4Click(Sender: TObject);
var i:integer;
begin
  InOutMode(CardAddress,1,1);
  i:=ReadAllDigital(CardAddress);
  label3.caption:=inttostr(i);
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
end;

procedure TForm1.Button8Click(Sender: TObject);
begin
  InOutMode(CardAddress,0,0);
  ClearAllDigital(CardAddress);
end;

procedure TForm1.Button10Click(Sender: TObject);
var ver: integer;
begin
  ver:=VersionFirmware(CardAddress);
  Label9.Caption:='Firmware: v'+inttostr(ver shr 24)+'.'+inttostr($FF and (ver shr 16))
    +'.'+inttostr($FF and (ver shr 8))+'.'+inttostr($FF and ver);

  ver:=VersionDLL;
  Label11.Caption:='DLL: v'+inttostr(ver shr 24)+'.'+inttostr($FF and (ver shr 16))
    +'.'+inttostr($FF and (ver shr 8))+'.'+inttostr($FF and ver);
end;

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  CloseDevices;
end;

procedure TForm1.Button3Click(Sender: TObject);
begin
  OutputAllPWM(CardAddress, strtoint(edit2.text), strtoint(edit3.text));
end;

procedure TForm1.Button6Click(Sender: TObject);
begin
  InOutMode(CardAddress,0,0);
  OutputAllDigital(CardAddress,strtoint(edit4.text));
end;

procedure TForm1.Button9Click(Sender: TObject);
begin
  label7.caption:=inttostr(ReadCounter(CardAddress));
end;

procedure TForm1.Button11Click(Sender: TObject);
begin
  ResetCounter(CardAddress);
end;

procedure TForm1.RadioButton1Click(Sender: TObject);
begin
  CardAddress:=0;
end;

procedure TForm1.RadioButton2Click(Sender: TObject);
begin
  CardAddress:=1;
end;

procedure TForm1.Button12Click(Sender: TObject);
var i:integer;
begin
  i:= Connected;
  if i=0 then label10.caption:='No card connected';
  if i=1 then label10.caption:='Card 0 connected';
  if i=2 then label10.caption:='Card 1 connected';
  if i=3 then label10.caption:='Cards 0 and 1 connected';
end;

end.
