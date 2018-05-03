#define FileVersion 1818

[Setup]
SourceDir=..\src
OutputDir=..\Installer\Build
AppName=VM167 SDK
AppVersion={#FileVersion}
AppVerName=VM167 SDK rev{#FileVersion}
AppId=VM167
AppPublisher=Velleman\VM167
AppPublisherURL=www.velleman.eu
AppSupportURL=www.velleman.eu
DefaultDirName={pf}\Velleman\VM167 SDK
DefaultGroupName=Velleman\VM167 SDK
OutputBaseFilename=VM167 SDK rev{#FileVersion}

[Files]
Source: "*.*"; DestDir: "{app}\"; AfterInstall: CopyInfDriver('{app}\VM167 USB Driver\MCHPWinUSBDevice_v2.inf'); Flags: ignoreversion recursesubdirs
Source: "DLL/*.dll"; DestDir: "{syswow64}\";

[Code]
function SetupCopyOEMInfA(const SourceInfFileName: PAnsiChar; OEMSourceMediaLocation: DWORD;
  OEMSourceMediaType, CopyStyle: DWORD; DestinationInfFileName: DWORD;
  DestinationInfFileNameSize: DWORD; RequiredSize: DWORD;
  DestinationInfFileNameComponent: DWORD): BOOL;
external 'SetupCopyOEMInfA@setupapi.dll stdcall';

procedure CopyInfDriver(FileName: String);
begin
  SetupCopyOEMInfA(PChar(ExpandConstant(FileName)), 0, 1, 0, 0, 0, 0, 0);
end;