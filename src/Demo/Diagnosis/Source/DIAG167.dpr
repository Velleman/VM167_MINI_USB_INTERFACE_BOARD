program DIAG167;

uses
  Forms,
  DIAG167P in 'DIAG167P.pas' {Form1};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TForm1, Form1);
  Application.Run;
end.
