VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "VM167 Demo"
   ClientHeight    =   3990
   ClientLeft      =   120
   ClientTop       =   420
   ClientWidth     =   7065
   LinkTopic       =   "Form1"
   ScaleHeight     =   3990
   ScaleWidth      =   7065
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command5 
      Caption         =   "Version"
      Height          =   435
      Left            =   120
      TabIndex        =   47
      Top             =   2880
      Width           =   1575
   End
   Begin VB.Frame Frame5 
      Caption         =   "PWM"
      Height          =   2175
      Left            =   5520
      TabIndex        =   40
      Top             =   1680
      Width           =   1455
      Begin VB.VScrollBar VScroll2 
         Height          =   1455
         Left            =   960
         Max             =   255
         TabIndex        =   42
         Top             =   420
         Value           =   255
         Width           =   255
      End
      Begin VB.VScrollBar VScroll1 
         Height          =   1455
         Left            =   240
         Max             =   255
         TabIndex        =   41
         Top             =   420
         Value           =   255
         Width           =   255
      End
      Begin VB.Label Label16 
         Caption         =   "00"
         Height          =   195
         Left            =   960
         TabIndex        =   46
         Top             =   1920
         Width           =   375
      End
      Begin VB.Label Label15 
         Caption         =   "00"
         Height          =   195
         Left            =   240
         TabIndex        =   45
         Top             =   1920
         Width           =   375
      End
      Begin VB.Label Label14 
         Caption         =   "2"
         Height          =   255
         Left            =   1020
         TabIndex        =   44
         Top             =   180
         Width           =   135
      End
      Begin VB.Label Label13 
         Caption         =   "1"
         Height          =   255
         Left            =   300
         TabIndex        =   43
         Top             =   180
         Width           =   135
      End
   End
   Begin VB.Frame Frame4 
      Caption         =   "Counter"
      Height          =   1455
      Left            =   5520
      TabIndex        =   37
      Top             =   120
      Width           =   1455
      Begin VB.CommandButton Command4 
         Caption         =   "Reset"
         Height          =   375
         Left            =   240
         TabIndex        =   39
         Top             =   840
         Width           =   975
      End
      Begin VB.TextBox Text1 
         Height          =   285
         Left            =   120
         TabIndex        =   38
         Text            =   "0"
         Top             =   360
         Width           =   1215
      End
   End
   Begin VB.Frame Frame3 
      Caption         =   "Analog In"
      Height          =   2175
      Left            =   2160
      TabIndex        =   21
      Top             =   1680
      Width           =   3255
      Begin VB.HScrollBar HScroll5 
         Height          =   255
         Left            =   360
         Max             =   1023
         TabIndex        =   26
         Top             =   1680
         Width           =   2295
      End
      Begin VB.HScrollBar HScroll4 
         Height          =   255
         Left            =   360
         Max             =   1023
         TabIndex        =   25
         Top             =   1320
         Width           =   2295
      End
      Begin VB.HScrollBar HScroll3 
         Height          =   255
         Left            =   360
         Max             =   1023
         TabIndex        =   24
         Top             =   960
         Width           =   2295
      End
      Begin VB.HScrollBar HScroll2 
         Height          =   255
         Left            =   360
         Max             =   1023
         TabIndex        =   23
         Top             =   600
         Width           =   2295
      End
      Begin VB.HScrollBar HScroll1 
         Height          =   255
         Left            =   360
         Max             =   1023
         TabIndex        =   22
         Top             =   240
         Width           =   2295
      End
      Begin VB.Label Label12 
         Caption         =   "00"
         Height          =   255
         Left            =   2760
         TabIndex        =   36
         Top             =   1680
         Width           =   375
      End
      Begin VB.Label Label11 
         Caption         =   "00"
         Height          =   255
         Left            =   2760
         TabIndex        =   35
         Top             =   1320
         Width           =   375
      End
      Begin VB.Label Label10 
         Caption         =   "00"
         Height          =   255
         Left            =   2760
         TabIndex        =   34
         Top             =   960
         Width           =   375
      End
      Begin VB.Label Label9 
         Caption         =   "00"
         Height          =   255
         Left            =   2760
         TabIndex        =   33
         Top             =   600
         Width           =   375
      End
      Begin VB.Label Label8 
         Caption         =   "00"
         Height          =   255
         Left            =   2760
         TabIndex        =   32
         Top             =   240
         Width           =   375
      End
      Begin VB.Label Label7 
         Caption         =   "5"
         Height          =   255
         Left            =   120
         TabIndex        =   31
         Top             =   1680
         Width           =   135
      End
      Begin VB.Label Label6 
         Caption         =   "4"
         Height          =   255
         Left            =   120
         TabIndex        =   30
         Top             =   1320
         Width           =   135
      End
      Begin VB.Label Label5 
         Caption         =   "3"
         Height          =   255
         Left            =   120
         TabIndex        =   29
         Top             =   960
         Width           =   135
      End
      Begin VB.Label Label4 
         Caption         =   "2"
         Height          =   255
         Left            =   120
         TabIndex        =   28
         Top             =   600
         Width           =   135
      End
      Begin VB.Label Label3 
         Caption         =   "1"
         Height          =   255
         Left            =   120
         TabIndex        =   27
         Top             =   240
         Width           =   135
      End
   End
   Begin VB.Frame Frame2 
      Caption         =   "Digital In/Out"
      Height          =   1455
      Left            =   3840
      TabIndex        =   14
      Top             =   120
      Width           =   1575
      Begin VB.CheckBox Check8 
         Caption         =   "8"
         Enabled         =   0   'False
         Height          =   255
         Left            =   1080
         TabIndex        =   20
         Top             =   960
         Width           =   375
      End
      Begin VB.CheckBox Check7 
         Caption         =   "7"
         Enabled         =   0   'False
         Height          =   255
         Left            =   1080
         TabIndex        =   19
         Top             =   720
         Width           =   375
      End
      Begin VB.CheckBox Check6 
         Caption         =   "6"
         Enabled         =   0   'False
         Height          =   255
         Left            =   1080
         TabIndex        =   18
         Top             =   480
         Width           =   375
      End
      Begin VB.CheckBox Check5 
         Caption         =   "5"
         Enabled         =   0   'False
         Height          =   255
         Left            =   1080
         TabIndex        =   17
         Top             =   240
         Width           =   375
      End
      Begin VB.OptionButton Option6 
         Caption         =   "In"
         Height          =   255
         Left            =   120
         TabIndex        =   16
         Top             =   240
         Value           =   -1  'True
         Width           =   495
      End
      Begin VB.OptionButton Option5 
         Caption         =   "Out"
         Height          =   255
         Left            =   120
         TabIndex        =   15
         Top             =   480
         Width           =   615
      End
   End
   Begin VB.Frame Frame1 
      Caption         =   "Digital In/Out"
      Height          =   1455
      Left            =   2160
      TabIndex        =   7
      Top             =   120
      Width           =   1575
      Begin VB.OptionButton Option4 
         Caption         =   "Out"
         Height          =   255
         Left            =   120
         TabIndex        =   13
         Top             =   480
         Width           =   615
      End
      Begin VB.OptionButton Option3 
         Caption         =   "In"
         Height          =   255
         Left            =   120
         TabIndex        =   12
         Top             =   240
         Value           =   -1  'True
         Width           =   495
      End
      Begin VB.CheckBox Check4 
         Caption         =   "4"
         Enabled         =   0   'False
         Height          =   255
         Left            =   1080
         TabIndex        =   11
         Top             =   960
         Width           =   375
      End
      Begin VB.CheckBox Check3 
         Caption         =   "3"
         Enabled         =   0   'False
         Height          =   255
         Left            =   1080
         TabIndex        =   10
         Top             =   720
         Width           =   375
      End
      Begin VB.CheckBox Check2 
         Caption         =   "2"
         Enabled         =   0   'False
         Height          =   255
         Left            =   1080
         TabIndex        =   9
         Top             =   480
         Width           =   375
      End
      Begin VB.CheckBox Check1 
         Caption         =   "1"
         Enabled         =   0   'False
         Height          =   255
         Left            =   1080
         TabIndex        =   8
         Top             =   240
         Width           =   375
      End
   End
   Begin VB.Timer Timer1 
      Enabled         =   0   'False
      Interval        =   100
      Left            =   1620
      Top             =   1080
   End
   Begin VB.OptionButton Option2 
      Caption         =   "1"
      Enabled         =   0   'False
      Height          =   255
      Left            =   840
      TabIndex        =   6
      Top             =   1380
      Width           =   495
   End
   Begin VB.OptionButton Option1 
      Caption         =   "0"
      Enabled         =   0   'False
      Height          =   255
      Left            =   120
      TabIndex        =   5
      Top             =   1380
      Width           =   495
   End
   Begin VB.CommandButton Command3 
      Caption         =   "Clear All Digital"
      Height          =   435
      Left            =   120
      TabIndex        =   2
      Top             =   2340
      Width           =   1575
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Set All Digital"
      Height          =   435
      Left            =   120
      TabIndex        =   1
      Top             =   1800
      Width           =   1575
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Open"
      Height          =   495
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   1575
   End
   Begin VB.Label Label18 
      Caption         =   "- - - "
      Height          =   195
      Left            =   120
      TabIndex        =   49
      Top             =   3720
      Width           =   1935
   End
   Begin VB.Label Label17 
      Caption         =   "- - - "
      Height          =   195
      Left            =   120
      TabIndex        =   48
      Top             =   3420
      Width           =   1935
   End
   Begin VB.Label Label2 
      Caption         =   "Select Card:"
      Height          =   255
      Left            =   120
      TabIndex        =   4
      Top             =   1020
      Width           =   1455
   End
   Begin VB.Label Label1 
      Caption         =   "- - - "
      Height          =   195
      Left            =   120
      TabIndex        =   3
      Top             =   720
      Width           =   1935
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
    Option Explicit
    Dim CardAddress As Long
    Dim HiNibble As Long
    Dim LoNibble As Long
    Dim Cards As Long
    Private Declare Function OpenDevices Lib "vm167.dll" () As Long
    Private Declare Sub CloseDevices Lib "vm167.dll" ()
    Private Declare Sub InOutMode Lib "vm167.dll" (ByVal CardAddress As Long, ByVal HighNibble As Long, ByVal LowNibble As Long)
    Private Declare Function ReadAnalogChannel Lib "vm167.dll" (ByVal CardAddress As Long, ByVal Channel As Long) As Long
    Private Declare Sub ReadAllAnalog Lib "vm167.dll" (ByVal CardAddress As Long, ByRef Buffer As Long)
    Private Declare Sub OutputAllDigital Lib "vm167.dll" (ByVal CardAddress As Long, ByVal Data As Long)
    Private Declare Sub ClearDigitalChannel Lib "vm167.dll" (ByVal CardAddress As Long, ByVal Channel As Long)
    Private Declare Sub ClearAllDigital Lib "vm167.dll" (ByVal CardAddress As Long)
    Private Declare Sub SetDigitalChannel Lib "vm167.dll" (ByVal CardAddress As Long, ByVal Channel As Long)
    Private Declare Sub SetAllDigital Lib "vm167.dll" (ByVal CardAddress As Long)
    Private Declare Function ReadDigitalChannel Lib "vm167.dll" (ByVal CardAddress As Long, ByVal Channel As Long) As Boolean
    Private Declare Function ReadAllDigital Lib "vm167.dll" (ByVal CardAddress As Long) As Long
    Private Declare Function ReadCounter Lib "vm167.dll" (ByVal CardAddress As Long) As Long
    Private Declare Sub ResetCounter Lib "vm167.dll" (ByVal CardAddress As Long)
    Private Declare Sub SetPWM Lib "vm167.dll" (ByVal CardAddress As Long, ByVal Channel As Long, ByVal Data As Long, ByVal Freq As Long)
    Private Declare Sub OutputAllPWM Lib "vm167.dll" (ByVal CardAddress As Long, ByVal Data1 As Long, ByVal Data2 As Long)
    Private Declare Function VersionDLL Lib "vm167.dll" () As Long
    Private Declare Function VersionFirmware Lib "vm167.dll" (ByVal CardAddress As Long) As Long
    Private Declare Function Connected Lib "vm167.dll" () As Long
    Private Declare Sub ReadBackPWMOut Lib "vm167.dll" (ByVal CardAddress As Long, ByRef Buffer As Long)
    Private Declare Function ReadBackInOutMode Lib "vm167.dll" (ByVal CardAddress As Long) As Long


Private Sub Check1_Click()
    If LoNibble = 0 Then
        If Check1.Value = 1 Then
            SetDigitalChannel CardAddress, 1
        Else
            ClearDigitalChannel CardAddress, 1
        End If
    End If
End Sub

Private Sub Check2_Click()
    If LoNibble = 0 Then
        If Check2.Value = 1 Then
            SetDigitalChannel CardAddress, 2
        Else
            ClearDigitalChannel CardAddress, 2
        End If
    End If
End Sub

Private Sub Check3_Click()
    If LoNibble = 0 Then
        If Check3.Value = 1 Then
            SetDigitalChannel CardAddress, 3
        Else
            ClearDigitalChannel CardAddress, 3
        End If
    End If
End Sub

Private Sub Check4_Click()
    If LoNibble = 0 Then
        If Check4.Value = 1 Then
            SetDigitalChannel CardAddress, 4
        Else
            ClearDigitalChannel CardAddress, 4
        End If
    End If
End Sub

Private Sub Check5_Click()
    If HiNibble = 0 Then
        If Check5.Value = 1 Then
            SetDigitalChannel CardAddress, 5
        Else
            ClearDigitalChannel CardAddress, 5
        End If
    End If
End Sub

Private Sub Check6_Click()
    If HiNibble = 0 Then
        If Check6.Value = 1 Then
            SetDigitalChannel CardAddress, 6
        Else
            ClearDigitalChannel CardAddress, 6
        End If
    End If
End Sub

Private Sub Check7_Click()
    If HiNibble = 0 Then
        If Check7.Value = 1 Then
            SetDigitalChannel CardAddress, 7
        Else
            ClearDigitalChannel CardAddress, 7
        End If
    End If
End Sub

Private Sub Check8_Click()
    If HiNibble = 0 Then
        If Check8.Value = 1 Then
            SetDigitalChannel CardAddress, 8
        Else
            ClearDigitalChannel CardAddress, 8
        End If
    End If
End Sub

Private Sub Command1_Click()
    Dim IOmode As Long
    Dim PWM(2) As Long
    Option1.Enabled = False
    Option2.Enabled = False
    Option1.Value = False
    Option2.Value = False
    Cards = OpenDevices()
    Select Case Cards
        Case 0
            Label1.Caption = "Card open error."
        Case 1
            Label1.Caption = "Card 0 connected."
            Option1.Enabled = True
            Option1.Value = True
            CardAddress = 0
            Timer1.Interval = 100
            Timer1.Enabled = True
        Case 2
            Label1.Caption = "Card 1 connected."
            Option2.Enabled = True
            Option2.Value = True
            CardAddress = 1
            Timer1.Interval = 100
            Timer1.Enabled = True
        Case 3
            Label1.Caption = "Cards 0 and 1 connected."
            Option1.Enabled = True
            Option1.Value = True
            Option2.Enabled = True
            Option2.Value = False
            CardAddress = 0
            Timer1.Interval = 100
            Timer1.Enabled = True
        Case -1
            Label1.Caption = "Card not found."
    End Select
    IOmode = ReadBackInOutMode(CardAddress)
    If ((IOmode And 1) > 0) Then
        Option3.Value = True
    Else
        Option4.Value = True
    End If
    If ((IOmode And 2) > 0) Then
        Option6.Value = True
    Else
        Option5.Value = True
    End If
    ReadBackPWMOut CardAddress, PWM(0)
    VScroll1.Value = 255 - PWM(0)
    VScroll2.Value = 255 - PWM(1)
    Label15.Caption = CStr(PWM(0))
    Label16.Caption = CStr(PWM(1))
End Sub

Private Sub Command2_Click()
        InOutMode CardAddress, 0, 0
        SetAllDigital CardAddress
        Option4.Value = True
        Option5.Value = True
End Sub

Private Sub Command3_Click()
        InOutMode CardAddress, 0, 0
        ClearAllDigital CardAddress
        Option4.Value = True
        Option5.Value = True
End Sub

Private Sub Command4_Click()
    ResetCounter CardAddress
End Sub

Private Sub Command5_Click()
    Dim ver As Long
    ver = VersionFirmware(CardAddress)
    Label17.Caption = "Firmware v" + CStr(ver \ 2 ^ 24) + "." + CStr(&HFF And (ver \ 2 ^ 16)) _
            + "." + CStr(&HFF And (ver \ 2 ^ 8)) + "." + CStr(&HFF And ver)
            
    ver = VersionDLL()
    Label18.Caption = "DLL v" + CStr(ver \ 2 ^ 24) + "." + CStr(&HFF And (ver \ 2 ^ 16)) _
            + "." + CStr(&HFF And (ver \ 2 ^ 8)) + "." + CStr(&HFF And ver)
End Sub

Private Sub Form_Load()
    HiNibble = 1
    LoNibble = 1
End Sub

Private Sub Form_Terminate()
    CloseDevices
End Sub

Private Sub Option1_Click()
    Dim IOmode As Long
    Dim PWM(2) As Long
    CardAddress = 0
    IOmode = ReadBackInOutMode(CardAddress)
    If ((IOmode And 1) > 0) Then
        Option3.Value = True
    Else
        Option4.Value = True
    End If
    If ((IOmode And 2) > 0) Then
        Option6.Value = True
    Else
        Option5.Value = True
    End If
    ReadBackPWMOut CardAddress, PWM(0)
    VScroll1.Value = 255 - PWM(0)
    VScroll2.Value = 255 - PWM(1)
    Label15.Caption = CStr(PWM(0))
    Label16.Caption = CStr(PWM(1))
End Sub

Private Sub Option2_Click()
    Dim IOmode As Long
    Dim PWM(2) As Long
    CardAddress = 1
    IOmode = ReadBackInOutMode(CardAddress)
    If ((IOmode And 1) > 0) Then
        Option3.Value = True
    Else
        Option4.Value = True
    End If
    If ((IOmode And 2) > 0) Then
        Option6.Value = True
    Else
        Option5.Value = True
    End If
    ReadBackPWMOut CardAddress, PWM(0)
    VScroll1.Value = 255 - PWM(0)
    VScroll2.Value = 255 - PWM(1)
    Label15.Caption = CStr(PWM(0))
    Label16.Caption = CStr(PWM(1))
End Sub

Private Sub Option3_Click()
    Check1.Enabled = False
    Check2.Enabled = False
    Check3.Enabled = False
    Check4.Enabled = False
    LoNibble = 1
    InOutMode CardAddress, HiNibble, LoNibble
End Sub

Private Sub Option4_Click()
    Check1.Enabled = True
    Check2.Enabled = True
    Check3.Enabled = True
    Check4.Enabled = True
    LoNibble = 0
    InOutMode CardAddress, HiNibble, LoNibble
End Sub

Private Sub Option5_Click()
    Check5.Enabled = True
    Check6.Enabled = True
    Check7.Enabled = True
    Check8.Enabled = True
    HiNibble = 0
    InOutMode CardAddress, HiNibble, LoNibble
End Sub

Private Sub Option6_Click()
    Check5.Enabled = False
    Check6.Enabled = False
    Check7.Enabled = False
    Check8.Enabled = False
    HiNibble = 1
    InOutMode CardAddress, HiNibble, LoNibble
End Sub

Private Sub Timer1_Timer()
    Dim i As Long
    Dim Buffer(0 To 5) As Long
    If Cards <> Connected() Then
        Timer1.Interval = 1000  ' check once a second if there is a connection
        Command1_Click          ' try to reconnect
    End If
    Timer1.Enabled = False
    ReadAllAnalog CardAddress, Buffer(0)
    HScroll1.Value = Buffer(0)
    Label8.Caption = CStr(Buffer(0))
    HScroll2.Value = Buffer(1)
    Label9.Caption = CStr(Buffer(1))
    HScroll3.Value = Buffer(2)
    Label10.Caption = CStr(Buffer(2))
    HScroll4.Value = Buffer(3)
    Label11.Caption = CStr(Buffer(3))
    HScroll5.Value = Buffer(4)
    Label12.Caption = CStr(Buffer(4))

    i = ReadAllDigital(CardAddress)
    Check1.Value = (i And 1)
    Check2.Value = (i And 2) \ 2
    Check3.Value = (i And 4) \ 4
    Check4.Value = (i And 8) \ 8
    Check5.Value = (i And 16) \ 16
    Check6.Value = (i And 32) \ 32
    Check7.Value = (i And 64) \ 64
    Check8.Value = (i And 128) \ 128

    Text1.Text = CStr(ReadCounter(CardAddress))
    Timer1.Enabled = True
End Sub

Private Sub VScroll1_Change()
    Label15.Caption = CStr(255 - VScroll1.Value)
    SetPWM CardAddress, 1, 255 - VScroll1.Value, 2
End Sub

Private Sub VScroll2_Change()
    Label16.Caption = CStr(255 - VScroll2.Value)
    SetPWM CardAddress, 2, 255 - VScroll2.Value, 2
End Sub
