program DEMO167;

uses
  Forms,
  VM167Dmo in 'VM167Dmo.pas' {Form1};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
