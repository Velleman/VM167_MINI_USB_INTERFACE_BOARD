Public Class Form1
    Dim CardAddress As Integer
    Dim HiNibble As Integer
    Dim LoNibble As Integer
    Dim Cards As Integer
    Private Declare Function OpenDevices Lib "vm167.dll" () As Integer
    Private Declare Sub CloseDevices Lib "vm167.dll" ()
    Private Declare Sub InOutMode Lib "vm167.dll" (ByVal CardAddress As Integer, ByVal HighNibble As Integer, ByVal LowNibble As Integer)
    Private Declare Function ReadAnalogChannel Lib "vm167.dll" (ByVal CardAddress As Integer, ByVal Channel As Integer) As Integer
    Private Declare Sub ReadAllAnalog Lib "vm167.dll" (ByVal CardAddress As Integer, ByRef Buffer As Integer)
    Private Declare Sub OutputAllDigital Lib "vm167.dll" (ByVal CardAddress As Integer, ByVal Data As Integer)
    Private Declare Sub ClearDigitalChannel Lib "vm167.dll" (ByVal CardAddress As Integer, ByVal Channel As Integer)
    Private Declare Sub ClearAllDigital Lib "vm167.dll" (ByVal CardAddress As Integer)
    Private Declare Sub SetDigitalChannel Lib "vm167.dll" (ByVal CardAddress As Integer, ByVal Channel As Integer)
    Private Declare Sub SetAllDigital Lib "vm167.dll" (ByVal CardAddress As Integer)
    Private Declare Function ReadDigitalChannel Lib "vm167.dll" (ByVal CardAddress As Integer, ByVal Channel As Integer) As Boolean
    Private Declare Function ReadAllDigital Lib "vm167.dll" (ByVal CardAddress As Integer) As Integer
    Private Declare Function ReadCounter Lib "vm167.dll" (ByVal CardAddress As Integer) As UInteger
    Private Declare Sub ResetCounter Lib "vm167.dll" (ByVal CardAddress As Integer)
    Private Declare Sub SetPWM Lib "vm167.dll" (ByVal CardAddress As Integer, ByVal Channel As Integer, ByVal Data As Integer, ByVal Freq As Integer)
    Private Declare Sub OutputAllPWM Lib "vm167.dll" (ByVal CardAddress As Integer, ByVal Data1 As Integer, ByVal Data2 As Integer)
    Private Declare Function VersionDLL Lib "vm167.dll" () As Integer
    Private Declare Function VersionFirmware Lib "vm167.dll" (ByVal CardAddress As Integer) As Integer
    Private Declare Function Connected Lib "vm167.dll" () As Integer
    Private Declare Sub ReadBackPWMOut Lib "vm167.dll" (ByVal CardAddress As Integer, ByRef Buffer As Integer)
    Private Declare Function ReadBackInOutMode Lib "vm167.dll" (ByVal CardAddress As Integer) As Integer

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim IOmode As Integer
        Dim PWM(2) As Integer
        RadioButton1.Enabled = False
        RadioButton2.Enabled = False
        RadioButton1.Checked = False
        RadioButton2.Checked = False
        Cards = OpenDevices()
        Select Case Cards
            Case 0
                Label1.Text = "Card open error."
            Case 1
                Label1.Text = "Card 0 connected."
                RadioButton1.Enabled = True
                RadioButton1.Checked = True
                CardAddress = 0
                Timer1.Interval = 100
                Timer1.Enabled = True
            Case 2
                Label1.Text = "Card 1 connected."
                RadioButton2.Enabled = True
                RadioButton2.Checked = True
                CardAddress = 1
                Timer1.Interval = 100
                Timer1.Enabled = True
            Case 3
                Label1.Text = "Cards 0 and 1 connected."
                RadioButton1.Enabled = True
                RadioButton1.Checked = True
                RadioButton2.Enabled = True
                RadioButton2.Checked = False
                CardAddress = 0
                Timer1.Interval = 100
                Timer1.Enabled = True
            Case -1
                Label1.Text = "Card not found."
        End Select
        IOmode = ReadBackInOutMode(CardAddress)
        If ((IOmode And 1) > 0) Then
            RadioButton3.Checked = True
        Else
            RadioButton4.Checked = True
        End If
        If ((IOmode And 2) > 0) Then
            RadioButton6.Checked = True
        Else
            RadioButton5.Checked = True
        End If
        ReadBackPWMOut(CardAddress, PWM(0))
        TrackBar1.Value = PWM(0)
        TrackBar2.Value = PWM(1)
        Label15.Text = CStr(TrackBar1.Value)
        Label16.Text = CStr(TrackBar2.Value)

    End Sub

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        HiNibble = 1
        LoNibble = 1
    End Sub

    Private Sub Form1_FormClosed(ByVal sender As Object, ByVal e As System.Windows.Forms.FormClosedEventArgs) Handles Me.FormClosed
        CloseDevices()
    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        InOutMode(CardAddress, 0, 0)
        SetAllDigital(CardAddress)
        RadioButton4.Checked = True
        RadioButton5.Checked = True
    End Sub

    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click
        InOutMode(CardAddress, 0, 0)
        ClearAllDigital(CardAddress)
        RadioButton4.Checked = True
        RadioButton5.Checked = True
    End Sub

    Private Sub Timer1_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Timer1.Tick
        Dim i As Integer
        Dim Buffer(5) As Integer
        Timer1.Enabled = False
        If (Cards <> Connected()) Then
            Timer1.Interval = 1000      ' check once a second if there is a connection
            Button1_Click(sender, e)    ' try to reconnect
        End If
        ReadAllAnalog(CardAddress, Buffer(0))
        ProgressBar1.Value = Buffer(0)
        Label4.Text = CStr(Buffer(0))
        ProgressBar2.Value = Buffer(1)
        Label5.Text = CStr(Buffer(1))
        ProgressBar3.Value = Buffer(2)
        Label7.Text = CStr(Buffer(2))
        ProgressBar4.Value = Buffer(3)
        Label9.Text = CStr(Buffer(3))
        ProgressBar5.Value = Buffer(4)
        Label11.Text = CStr(Buffer(4))

        i = ReadAllDigital(CardAddress)
        CheckBox1.Checked = (i And 1)
        CheckBox2.Checked = (i And 2) \ 2
        CheckBox3.Checked = (i And 4) \ 4
        CheckBox4.Checked = (i And 8) \ 8
        CheckBox5.Checked = (i And 16) \ 16
        CheckBox6.Checked = (i And 32) \ 32
        CheckBox7.Checked = (i And 64) \ 64
        CheckBox8.Checked = (i And 128) \ 128
        TextBox1.Text = CStr(ReadCounter(CardAddress))
        Timer1.Enabled = True
    End Sub

    Private Sub TrackBar1_Scroll(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles TrackBar1.Scroll
        Label15.Text = CStr(TrackBar1.Value)
        SetPWM(CardAddress, 1, TrackBar1.Value, 2)
    End Sub

    Private Sub TrackBar2_Scroll(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles TrackBar2.Scroll
        Label16.Text = CStr(TrackBar2.Value)
        SetPWM(CardAddress, 2, TrackBar2.Value, 2)
    End Sub

    Private Sub RadioButton3_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles RadioButton3.CheckedChanged
        CheckBox1.Enabled = False
        CheckBox2.Enabled = False
        CheckBox3.Enabled = False
        CheckBox4.Enabled = False
        LoNibble = 1
        InOutMode(CardAddress, HiNibble, LoNibble)
    End Sub

    Private Sub RadioButton4_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles RadioButton4.CheckedChanged
        CheckBox1.Enabled = True
        CheckBox2.Enabled = True
        CheckBox3.Enabled = True
        CheckBox4.Enabled = True
        LoNibble = 0
        InOutMode(CardAddress, HiNibble, LoNibble)
    End Sub

    Private Sub RadioButton6_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles RadioButton6.CheckedChanged
        CheckBox5.Enabled = False
        CheckBox6.Enabled = False
        CheckBox7.Enabled = False
        CheckBox8.Enabled = False
        HiNibble = 1
        InOutMode(CardAddress, HiNibble, LoNibble)
    End Sub

    Private Sub RadioButton5_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles RadioButton5.CheckedChanged
        CheckBox5.Enabled = True
        CheckBox6.Enabled = True
        CheckBox7.Enabled = True
        CheckBox8.Enabled = True
        HiNibble = 0
        InOutMode(CardAddress, HiNibble, LoNibble)
    End Sub

    Private Sub Button4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button4.Click
        ResetCounter(CardAddress)
    End Sub

    Private Sub CheckBox1_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CheckBox1.CheckedChanged
        If LoNibble = 0 Then
            If CheckBox1.Checked Then
                SetDigitalChannel(CardAddress, 1)
            Else
                ClearDigitalChannel(CardAddress, 1)
            End If
        End If
    End Sub

    Private Sub CheckBox2_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CheckBox2.CheckedChanged
        If LoNibble = 0 Then
            If CheckBox2.Checked Then
                SetDigitalChannel(CardAddress, 2)
            Else
                ClearDigitalChannel(CardAddress, 2)
            End If
        End If
    End Sub

    Private Sub CheckBox3_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CheckBox3.CheckedChanged
        If LoNibble = 0 Then
            If CheckBox3.Checked Then
                SetDigitalChannel(CardAddress, 3)
            Else
                ClearDigitalChannel(CardAddress, 3)
            End If
        End If
    End Sub

    Private Sub CheckBox4_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CheckBox4.CheckedChanged
        If LoNibble = 0 Then
            If CheckBox4.Checked Then
                SetDigitalChannel(CardAddress, 4)
            Else
                ClearDigitalChannel(CardAddress, 4)
            End If
        End If
    End Sub

    Private Sub CheckBox5_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CheckBox5.CheckedChanged
        If HiNibble = 0 Then
            If CheckBox5.Checked Then
                SetDigitalChannel(CardAddress, 5)
            Else
                ClearDigitalChannel(CardAddress, 5)
            End If
        End If
    End Sub

    Private Sub CheckBox6_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CheckBox6.CheckedChanged
        If HiNibble = 0 Then
            If CheckBox6.Checked Then
                SetDigitalChannel(CardAddress, 6)
            Else
                ClearDigitalChannel(CardAddress, 6)
            End If
        End If
    End Sub

    Private Sub CheckBox7_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CheckBox7.CheckedChanged
        If HiNibble = 0 Then
            If CheckBox7.Checked Then
                SetDigitalChannel(CardAddress, 7)
            Else
                ClearDigitalChannel(CardAddress, 7)
            End If
        End If
    End Sub

    Private Sub CheckBox8_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles CheckBox8.CheckedChanged
        If HiNibble = 0 Then
            If CheckBox8.Checked Then
                SetDigitalChannel(CardAddress, 8)
            Else
                ClearDigitalChannel(CardAddress, 8)
            End If
        End If
    End Sub

    Private Sub RadioButton1_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles RadioButton1.CheckedChanged
        Dim IOmode As Integer
        Dim PWM(2) As Integer
        CardAddress = 0
        IOmode = ReadBackInOutMode(CardAddress)
        If ((IOmode And 1) > 0) Then
            RadioButton3.Checked = True
        Else
            RadioButton4.Checked = True
        End If
        If ((IOmode And 2) > 0) Then
            RadioButton6.Checked = True
        Else
            RadioButton5.Checked = True
        End If
        ReadBackPWMOut(CardAddress, PWM(0))
        TrackBar1.Value = PWM(0)
        TrackBar2.Value = PWM(1)
        Label15.Text = TrackBar1.Value.ToString()
        Label16.Text = TrackBar2.Value.ToString()
    End Sub

    Private Sub RadioButton2_CheckedChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles RadioButton2.CheckedChanged
        Dim IOmode As Integer
        Dim PWM(2) As Integer
        CardAddress = 1
        IOmode = ReadBackInOutMode(CardAddress)
        If ((IOmode And 1) > 0) Then
            RadioButton3.Checked = True
        Else
            RadioButton4.Checked = True
        End If
        If ((IOmode And 2) > 0) Then
            RadioButton6.Checked = True
        Else
            RadioButton5.Checked = True
        End If
        ReadBackPWMOut(CardAddress, PWM(0))
        TrackBar1.Value = PWM(0)
        TrackBar2.Value = PWM(1)
        Label15.Text = TrackBar1.Value.ToString()
        Label16.Text = TrackBar2.Value.ToString()
    End Sub

    Private Sub Button5_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button5.Click
        Dim ver As Integer
        ver = VersionFirmware(CardAddress)
        Label17.Text = "Firmware v" + CStr(ver >> 24) + "." + CStr(&HFF And (ver >> 16)) _
            + "." + CStr(&HFF And (ver >> 8)) + "." + CStr(&HFF And ver)

        ver = VersionDLL()
        Label18.Text = "DLL v" + CStr(ver >> 24) + "." + CStr(&HFF And (ver >> 16)) _
            + "." + CStr(&HFF And (ver >> 8)) + "." + CStr(&HFF And ver)
    End Sub
End Class
