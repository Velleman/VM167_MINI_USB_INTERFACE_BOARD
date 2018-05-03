object Form1: TForm1
  Left = 230
  Top = 122
  Width = 455
  Height = 290
  Caption = 'VM167 Demo'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 40
    Width = 15
    Height = 13
    Caption = '- - -'
  end
  object Label2: TLabel
    Left = 8
    Top = 64
    Width = 57
    Height = 13
    Caption = 'Select card:'
  end
  object Label17: TLabel
    Left = 8
    Top = 216
    Width = 15
    Height = 13
    Caption = '- - -'
  end
  object Label18: TLabel
    Left = 8
    Top = 232
    Width = 15
    Height = 13
    Caption = '- - -'
  end
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 97
    Height = 25
    Caption = 'Open'
    TabOrder = 0
    OnClick = Button1Click
  end
  object RadioButton1: TRadioButton
    Left = 8
    Top = 80
    Width = 33
    Height = 17
    Caption = '0'
    Enabled = False
    TabOrder = 1
    OnClick = RadioButton1Click
  end
  object RadioButton2: TRadioButton
    Left = 48
    Top = 80
    Width = 33
    Height = 17
    Caption = '1'
    Enabled = False
    TabOrder = 2
    OnClick = RadioButton2Click
  end
  object Button2: TButton
    Left = 8
    Top = 120
    Width = 97
    Height = 25
    Caption = 'Set All Digital'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 8
    Top = 152
    Width = 97
    Height = 25
    Caption = 'Clear All Digital'
    TabOrder = 4
    OnClick = Button3Click
  end
  object GroupBox1: TGroupBox
    Left = 128
    Top = 8
    Width = 97
    Height = 97
    Caption = 'Digital In/Out'
    TabOrder = 5
    object RadioButton3: TRadioButton
      Left = 8
      Top = 16
      Width = 33
      Height = 17
      Caption = 'In'
      Checked = True
      TabOrder = 0
      TabStop = True
      OnClick = RadioButton3Click
    end
    object RadioButton4: TRadioButton
      Left = 8
      Top = 32
      Width = 41
      Height = 17
      Caption = 'Out'
      TabOrder = 1
      OnClick = RadioButton4Click
    end
    object CheckBox1: TCheckBox
      Left = 64
      Top = 16
      Width = 25
      Height = 17
      Caption = '1'
      Enabled = False
      TabOrder = 2
      OnClick = CheckBox1Click
    end
    object CheckBox2: TCheckBox
      Left = 64
      Top = 32
      Width = 25
      Height = 17
      Caption = '2'
      Enabled = False
      TabOrder = 3
      OnClick = CheckBox2Click
    end
    object CheckBox3: TCheckBox
      Left = 64
      Top = 48
      Width = 25
      Height = 17
      Caption = '3'
      Enabled = False
      TabOrder = 4
      OnClick = CheckBox3Click
    end
    object CheckBox4: TCheckBox
      Left = 64
      Top = 64
      Width = 25
      Height = 17
      Caption = '4'
      Enabled = False
      TabOrder = 5
      OnClick = CheckBox4Click
    end
  end
  object GroupBox2: TGroupBox
    Left = 232
    Top = 8
    Width = 97
    Height = 97
    Caption = 'Digital In/Out'
    TabOrder = 6
    object RadioButton5: TRadioButton
      Left = 8
      Top = 16
      Width = 33
      Height = 17
      Caption = 'In'
      Checked = True
      TabOrder = 0
      TabStop = True
      OnClick = RadioButton5Click
    end
    object RadioButton6: TRadioButton
      Left = 8
      Top = 32
      Width = 41
      Height = 17
      Caption = 'Out'
      TabOrder = 1
      OnClick = RadioButton6Click
    end
    object CheckBox5: TCheckBox
      Left = 64
      Top = 16
      Width = 25
      Height = 17
      Caption = '1'
      Enabled = False
      TabOrder = 2
      OnClick = CheckBox5Click
    end
    object CheckBox6: TCheckBox
      Left = 64
      Top = 32
      Width = 25
      Height = 17
      Caption = '2'
      Enabled = False
      TabOrder = 3
      OnClick = CheckBox6Click
    end
    object CheckBox7: TCheckBox
      Left = 64
      Top = 48
      Width = 25
      Height = 17
      Caption = '3'
      Enabled = False
      TabOrder = 4
      OnClick = CheckBox7Click
    end
    object CheckBox8: TCheckBox
      Left = 64
      Top = 64
      Width = 25
      Height = 17
      Caption = '4'
      Enabled = False
      TabOrder = 5
      OnClick = CheckBox8Click
    end
  end
  object GroupBox3: TGroupBox
    Left = 128
    Top = 112
    Width = 201
    Height = 137
    Caption = 'Analog In'
    TabOrder = 7
    object Label3: TLabel
      Left = 4
      Top = 16
      Width = 6
      Height = 13
      Caption = '1'
    end
    object Label4: TLabel
      Left = 172
      Top = 16
      Width = 12
      Height = 13
      Caption = '00'
    end
    object Label5: TLabel
      Left = 4
      Top = 40
      Width = 6
      Height = 13
      Caption = '2'
    end
    object Label6: TLabel
      Left = 172
      Top = 40
      Width = 12
      Height = 13
      Caption = '00'
    end
    object Label7: TLabel
      Left = 4
      Top = 64
      Width = 6
      Height = 13
      Caption = '3'
    end
    object Label8: TLabel
      Left = 172
      Top = 64
      Width = 12
      Height = 13
      Caption = '00'
    end
    object Label9: TLabel
      Left = 4
      Top = 88
      Width = 6
      Height = 13
      Caption = '4'
    end
    object Label10: TLabel
      Left = 172
      Top = 88
      Width = 12
      Height = 13
      Caption = '00'
    end
    object Label11: TLabel
      Left = 4
      Top = 112
      Width = 6
      Height = 13
      Caption = '5'
    end
    object Label12: TLabel
      Left = 172
      Top = 112
      Width = 12
      Height = 13
      Caption = '00'
    end
    object ProgressBar1: TProgressBar
      Left = 16
      Top = 16
      Width = 153
      Height = 13
      Min = 0
      Max = 1023
      Step = 1
      TabOrder = 0
    end
    object ProgressBar2: TProgressBar
      Left = 16
      Top = 40
      Width = 153
      Height = 13
      Min = 0
      Max = 1023
      Step = 1
      TabOrder = 1
    end
    object ProgressBar3: TProgressBar
      Left = 16
      Top = 64
      Width = 153
      Height = 13
      Min = 0
      Max = 1023
      Step = 1
      TabOrder = 2
    end
    object ProgressBar4: TProgressBar
      Left = 16
      Top = 88
      Width = 153
      Height = 13
      Min = 0
      Max = 1023
      Step = 1
      TabOrder = 3
    end
    object ProgressBar5: TProgressBar
      Left = 16
      Top = 112
      Width = 153
      Height = 13
      Min = 0
      Max = 1023
      Step = 1
      TabOrder = 4
    end
  end
  object GroupBox4: TGroupBox
    Left = 336
    Top = 8
    Width = 97
    Height = 97
    Caption = 'Counter'
    TabOrder = 8
    object Edit1: TEdit
      Left = 8
      Top = 16
      Width = 81
      Height = 21
      TabOrder = 0
      Text = '0'
    end
    object Button4: TButton
      Left = 16
      Top = 52
      Width = 65
      Height = 21
      Caption = 'Reset'
      TabOrder = 1
      OnClick = Button4Click
    end
  end
  object GroupBox5: TGroupBox
    Left = 336
    Top = 112
    Width = 97
    Height = 137
    Caption = 'PWM Out'
    TabOrder = 9
    object Label13: TLabel
      Left = 20
      Top = 12
      Width = 6
      Height = 13
      Caption = '1'
    end
    object Label14: TLabel
      Left = 68
      Top = 12
      Width = 6
      Height = 13
      Caption = '2'
    end
    object Label15: TLabel
      Left = 17
      Top = 116
      Width = 12
      Height = 13
      Caption = '00'
    end
    object Label16: TLabel
      Left = 61
      Top = 116
      Width = 12
      Height = 13
      Caption = '00'
    end
    object TrackBar1: TTrackBar
      Left = 8
      Top = 24
      Width = 33
      Height = 93
      Max = 255
      Orientation = trVertical
      Frequency = 20
      Position = 255
      SelEnd = 0
      SelStart = 0
      TabOrder = 0
      ThumbLength = 15
      TickMarks = tmTopLeft
      TickStyle = tsAuto
      OnChange = TrackBar1Change
    end
    object TrackBar2: TTrackBar
      Left = 52
      Top = 24
      Width = 33
      Height = 93
      Max = 255
      Orientation = trVertical
      Frequency = 20
      Position = 255
      SelEnd = 0
      SelStart = 0
      TabOrder = 1
      ThumbLength = 15
      TickMarks = tmTopLeft
      TickStyle = tsAuto
      OnChange = TrackBar2Change
    end
  end
  object Button5: TButton
    Left = 8
    Top = 184
    Width = 97
    Height = 25
    Caption = 'Version'
    TabOrder = 10
    OnClick = Button5Click
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer1Timer
    Left = 88
    Top = 36
  end
end
