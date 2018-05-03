using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace VM167Demo
{
    public partial class Form1 : Form
    {
        int CardAddress;
        int HiNibble;
        int LoNibble;
        int Cards;

        public Form1()
        {
            InitializeComponent();
        }
            [DllImport("vm167.dll")]
            public static extern int OpenDevices();

            [DllImport("vm167.dll")]
            public static extern void CloseDevices();

            [DllImport("vm167.dll")]
            public static extern int ReadAnalogChannel(int CardAddress, int Channel);

            [DllImport("vm167.dll")]
            public static extern void ReadAllAnalog(int CardAddress, int[] Buffer);

            [DllImport("vm167.dll")]
            public static extern void SetPWM(int CardAddress, int Channel, int Data, int Freq);

            [DllImport("vm167.dll")]
            public static extern void OutputAllPWM(int CardAddress, int Data1, int Data2);

            [DllImport("vm167.dll")]
            public static extern void OutputAllDigital(int CardAddress, int Data);

            [DllImport("vm167.dll")]
            public static extern void ClearDigitalChannel(int CardAddress, int Channel);

            [DllImport("vm167.dll")]
            public static extern void ClearAllDigital(int CardAddress);

            [DllImport("vm167.dll")]
            public static extern void SetDigitalChannel(int CardAddress, int Channel);

            [DllImport("vm167.dll")]
            public static extern void SetAllDigital(int CardAddress);

            [DllImport("vm167.dll")]
            public static extern bool ReadDigitalChannel(int CardAddress, int Channel);

            [DllImport("vm167.dll")]
            public static extern int ReadAllDigital(int CardAddress);

            [DllImport("vm167.dll")]
            public static extern void InOutMode(int CardAddress, int HighNibble, int LowNibble);

            [DllImport("vm167.dll")]
            public static extern uint ReadCounter(int CardAddress);

            [DllImport("vm167.dll")]
            public static extern void ResetCounter(int CardAddress);

        	[DllImport("vm167.dll")]
            public static extern int Connected();

            [DllImport("vm167.dll")]
            public static extern int VersionFirmware(int CardAddress);

            [DllImport("vm167.dll")]
            public static extern int VersionDLL();		
		
            [DllImport("vm167.dll")]
            public static extern void ReadBackPWMOut(int CardAddress, int[] Buffer);

			[DllImport("vm167.dll")]
            public static extern int ReadBackInOutMode(int CardAddress);


        private void Button1_Click_1(object sender, EventArgs e)
        {
            int[] PWM = new int[2];
			int IOmode;
			RadioButton1.Enabled = false;
			RadioButton2.Enabled = false;
            Cards = OpenDevices();
            switch (Cards)
            {
                case 0:
                    Label1.Text = "Card open error.";
                    break;
                case 1:
                    Label1.Text = "Card 0 connected.";
                    RadioButton1.Enabled = true;
                    RadioButton1.Checked = true;
                    CardAddress = 0;
                    Timer1.Interval = 100;
                    Timer1.Enabled = true;
                    break;
                case 2:
                    Label1.Text = "Card 1 connected.";
                    RadioButton2.Enabled = true;
                    RadioButton2.Checked = true;
                    CardAddress = 1;
                    Timer1.Interval = 100;
                    Timer1.Enabled = true;
                    break;
                case 3:
                    Label1.Text = "Cards 0 and 1 connected.";
                    RadioButton1.Enabled = true;
                    RadioButton1.Checked = true;
                    RadioButton2.Enabled = true;
                    RadioButton2.Checked = false;
                    CardAddress = 0;
                    Timer1.Interval = 100;
                    Timer1.Enabled = true;
                    break;
                case -1:
                    Label1.Text = "Card not found.";
                    break;
            }
            IOmode = ReadBackInOutMode(CardAddress);
            if ((IOmode & 1) > 0)
                RadioButton3.Checked = true;
            else
                RadioButton4.Checked = true;
            if ((IOmode & 2) > 0)
                RadioButton6.Checked = true;
            else
                RadioButton5.Checked = true;

            ReadBackPWMOut(CardAddress, PWM);
            TrackBar1.Value = PWM[0];
            TrackBar2.Value = PWM[1];
            Label15.Text = PWM[0].ToString();
            Label16.Text = PWM[1].ToString();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            HiNibble = 1;
            LoNibble = 1;
        }

        private void Form1_FormClosed(object sender, FormClosedEventArgs e)
        {
            CloseDevices();
        }

        private void Button2_Click(object sender, EventArgs e)
        {
            InOutMode(CardAddress, 0, 0);
            SetAllDigital(CardAddress);
            RadioButton4.Checked = true;
            RadioButton5.Checked = true;
        }

        private void Button3_Click(object sender, EventArgs e)
        {
            InOutMode(CardAddress, 0, 0);
            ClearAllDigital(CardAddress);
            RadioButton4.Checked = true;
            RadioButton5.Checked = true;
        }

        private void Timer1_Tick(object sender, EventArgs e)
        {
            int i;
            int[] Buffer = new int[8];
            Timer1.Enabled = false;
            if (Cards != Connected())
            {
                Timer1.Interval = 1000;         // check once a second if there is a connection
                Button1_Click_1(sender, e);     // try to reconnect
            }
            ReadAllAnalog(CardAddress, Buffer);
            ProgressBar1.Value = Buffer[0];
            Label4.Text = Buffer[0].ToString();
            ProgressBar2.Value = Buffer[1];
            Label5.Text = Buffer[1].ToString();
            ProgressBar3.Value = Buffer[2];
            Label7.Text = Buffer[2].ToString();
            ProgressBar4.Value = Buffer[3];
            Label9.Text = Buffer[3].ToString();
            ProgressBar5.Value = Buffer[4];
            Label11.Text = Buffer[4].ToString();

            i = ReadAllDigital(CardAddress);
            CheckBox1.Checked = (i & 1)>0;
            CheckBox2.Checked = (i & 2)>0;
            CheckBox3.Checked = (i & 4)>0;
            CheckBox4.Checked = (i & 8)>0;
            CheckBox5.Checked = (i & 16)>0;
            CheckBox6.Checked = (i & 32)>0;
            CheckBox7.Checked = (i & 64)>0;
            CheckBox8.Checked = (i & 128)>0;
            TextBox1.Text = (ReadCounter(CardAddress)).ToString();
            Timer1.Enabled = true;
        }

        private void TrackBar1_Scroll(object sender, EventArgs e)
        {
            Label15.Text = TrackBar1.Value.ToString();
            SetPWM(CardAddress, 1, TrackBar1.Value, 2);
        }

        private void TrackBar2_Scroll(object sender, EventArgs e)
        {
            Label16.Text = TrackBar2.Value.ToString();
            SetPWM(CardAddress, 2, TrackBar2.Value, 2);
        }

        private void RadioButton3_CheckedChanged(object sender, EventArgs e)
        {
            CheckBox1.Enabled = false;
            CheckBox2.Enabled = false;
            CheckBox3.Enabled = false;
            CheckBox4.Enabled = false;
            LoNibble = 1;
            InOutMode(CardAddress, HiNibble, LoNibble);
        }

        private void RadioButton4_CheckedChanged(object sender, EventArgs e)
        {
            CheckBox1.Enabled = true;
            CheckBox2.Enabled = true;
            CheckBox3.Enabled = true;
            CheckBox4.Enabled = true;
            LoNibble = 0;
            InOutMode(CardAddress, HiNibble, LoNibble);
        }

        private void RadioButton6_CheckedChanged(object sender, EventArgs e)
        {
            CheckBox5.Enabled = false;
            CheckBox6.Enabled = false;
            CheckBox7.Enabled = false;
            CheckBox8.Enabled = false;
            HiNibble = 1;
            InOutMode(CardAddress, HiNibble, LoNibble);

        }

        private void RadioButton5_CheckedChanged(object sender, EventArgs e)
        {
            CheckBox5.Enabled = true;
            CheckBox6.Enabled = true;
            CheckBox7.Enabled = true;
            CheckBox8.Enabled = true;
            HiNibble = 0;
            InOutMode(CardAddress, HiNibble, LoNibble);
        }

        private void Button4_Click(object sender, EventArgs e)
        {
            ResetCounter(CardAddress);
        }

        private void CheckBox1_CheckedChanged(object sender, EventArgs e)
        {
            if (LoNibble == 0)
            {
                if (CheckBox1.Checked)
                    SetDigitalChannel(CardAddress, 1);
                else
                    ClearDigitalChannel(CardAddress, 1);
            }
        }

        private void CheckBox2_CheckedChanged(object sender, EventArgs e)
        {
            if (LoNibble == 0)
            {
                if (CheckBox2.Checked)
                    SetDigitalChannel(CardAddress, 2);
                else
                    ClearDigitalChannel(CardAddress, 2);
            }
        }

        private void CheckBox3_CheckedChanged(object sender, EventArgs e)
        {
            if (LoNibble == 0)
            {
                if (CheckBox3.Checked)
                    SetDigitalChannel(CardAddress, 3);
                else
                    ClearDigitalChannel(CardAddress, 3);
            }
        }

        private void CheckBox4_CheckedChanged(object sender, EventArgs e)
        {
            if (LoNibble == 0)
            {
                if (CheckBox4.Checked)
                    SetDigitalChannel(CardAddress, 4);
                else
                    ClearDigitalChannel(CardAddress, 4);
            }
        }

        private void CheckBox5_CheckedChanged(object sender, EventArgs e)
        {
            if (HiNibble == 0)
            {
                if (CheckBox5.Checked)
                    SetDigitalChannel(CardAddress, 5);
                else
                    ClearDigitalChannel(CardAddress, 5);
            }
        }

        private void CheckBox6_CheckedChanged(object sender, EventArgs e)
        {
            if (HiNibble == 0)
            {
                if (CheckBox6.Checked)
                    SetDigitalChannel(CardAddress, 6);
                else
                    ClearDigitalChannel(CardAddress, 6);
            }
        }

        private void CheckBox7_CheckedChanged(object sender, EventArgs e)
        {
            if (HiNibble == 0)
            {
                if (CheckBox7.Checked)
                    SetDigitalChannel(CardAddress, 7);
                else
                    ClearDigitalChannel(CardAddress, 7);
            }
        }

        private void CheckBox8_CheckedChanged(object sender, EventArgs e)
        {
            if (HiNibble == 0)
            {
                if (CheckBox8.Checked)
                    SetDigitalChannel(CardAddress, 8);
                else
                    ClearDigitalChannel(CardAddress, 8);
            }
        }

        private void RadioButton1_CheckedChanged(object sender, EventArgs e)
        {
            int[] PWM = new int[2]; ;
            int IOmode;
            CardAddress = 0;
            IOmode = ReadBackInOutMode(CardAddress);
            if ((IOmode & 1) > 0)
                RadioButton3.Checked = true;
            else
                RadioButton4.Checked = true;
            if ((IOmode & 2) > 0)
                RadioButton6.Checked = true;
            else
                RadioButton5.Checked = true;

            ReadBackPWMOut(CardAddress, PWM);
            TrackBar1.Value = PWM[0];
            TrackBar2.Value = PWM[1];
            Label15.Text = PWM[0].ToString();
            Label16.Text = PWM[1].ToString();
        }

        private void RadioButton2_CheckedChanged(object sender, EventArgs e)
        {
            int[] PWM = new int[2]; ;
            int IOmode;
            CardAddress = 1;
            IOmode = ReadBackInOutMode(CardAddress);
            if ((IOmode & 1) > 0)
                RadioButton3.Checked = true;
            else
                RadioButton4.Checked = true;
            if ((IOmode & 2) > 0)
                RadioButton6.Checked = true;
            else
                RadioButton5.Checked = true;

            ReadBackPWMOut(CardAddress, PWM);
            TrackBar1.Value = PWM[0];
            TrackBar2.Value = PWM[1];
            Label15.Text = PWM[0].ToString();
            Label16.Text = PWM[1].ToString();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            int ver;
            ver = VersionFirmware(CardAddress);

            label17.Text = "Firmware v" + (ver >> 24).ToString() + "." + ((ver >> 16) & 0xFF).ToString() + "."
                + ((ver >> 8) & 0xFF).ToString() + "." + (ver & 0xFF).ToString();

            ver = VersionDLL();
            label18.Text = "DLL v" + (ver >> 24).ToString() + "." + ((ver >> 16) & 0xFF).ToString() + "."
                + ((ver >> 8) & 0xFF).ToString() + "." + (ver & 0xFF).ToString();
        }
    }
}
