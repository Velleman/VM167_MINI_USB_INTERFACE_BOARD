#pragma once

namespace VM167Demo {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices; // needed for DllImport

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	internal: System::Windows::Forms::RadioButton^  RadioButton4;
	protected: 
	internal: System::Windows::Forms::GroupBox^  GroupBox4;
	internal: System::Windows::Forms::Label^  Label11;
	internal: System::Windows::Forms::Label^  Label12;
	internal: System::Windows::Forms::ProgressBar^  ProgressBar5;
	internal: System::Windows::Forms::Label^  Label9;
	internal: System::Windows::Forms::Label^  Label10;
	internal: System::Windows::Forms::ProgressBar^  ProgressBar4;
	internal: System::Windows::Forms::Label^  Label7;
	internal: System::Windows::Forms::Label^  Label8;
	internal: System::Windows::Forms::ProgressBar^  ProgressBar3;
	internal: System::Windows::Forms::Label^  Label5;
	internal: System::Windows::Forms::Label^  Label6;
	internal: System::Windows::Forms::ProgressBar^  ProgressBar2;
	internal: System::Windows::Forms::Label^  Label4;
	internal: System::Windows::Forms::Label^  Label3;
	internal: System::Windows::Forms::ProgressBar^  ProgressBar1;
	internal: System::Windows::Forms::TextBox^  TextBox1;
	internal: System::Windows::Forms::RadioButton^  RadioButton3;
	internal: System::Windows::Forms::Button^  Button3;
	internal: System::Windows::Forms::CheckBox^  CheckBox4;
	internal: System::Windows::Forms::GroupBox^  GroupBox1;
	internal: System::Windows::Forms::CheckBox^  CheckBox3;
	internal: System::Windows::Forms::CheckBox^  CheckBox2;
	internal: System::Windows::Forms::CheckBox^  CheckBox1;
	internal: System::Windows::Forms::CheckBox^  CheckBox8;
	internal: System::Windows::Forms::Button^  Button2;
	internal: System::Windows::Forms::RadioButton^  RadioButton5;
	internal: System::Windows::Forms::RadioButton^  RadioButton6;
	internal: System::Windows::Forms::GroupBox^  GroupBox2;
	internal: System::Windows::Forms::CheckBox^  CheckBox5;
	internal: System::Windows::Forms::CheckBox^  CheckBox6;
	internal: System::Windows::Forms::CheckBox^  CheckBox7;
	internal: System::Windows::Forms::Label^  Label2;
	internal: System::Windows::Forms::GroupBox^  GroupBox3;
	internal: System::Windows::Forms::Button^  Button4;
	internal: System::Windows::Forms::RadioButton^  RadioButton2;
	internal: System::Windows::Forms::Label^  Label1;
	internal: System::Windows::Forms::RadioButton^  RadioButton1;
	internal: System::Windows::Forms::Timer^  Timer1;
	internal: System::Windows::Forms::Button^  Button1;
	internal: System::Windows::Forms::Label^  Label16;
	internal: System::Windows::Forms::Label^  Label15;
	internal: System::Windows::Forms::Label^  Label14;
	internal: System::Windows::Forms::Label^  Label13;
	internal: System::Windows::Forms::TrackBar^  TrackBar2;
	internal: System::Windows::Forms::GroupBox^  GroupBox5;
	internal: System::Windows::Forms::TrackBar^  TrackBar1;
	internal: System::Windows::Forms::Button^  button5;
	internal: System::Windows::Forms::Label^  label17;
	internal: System::Windows::Forms::Label^  label18;



	internal: 

	private: 



	private: System::ComponentModel::IContainer^  components;
	internal: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->RadioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->GroupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->Label11 = (gcnew System::Windows::Forms::Label());
			this->Label12 = (gcnew System::Windows::Forms::Label());
			this->ProgressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->Label9 = (gcnew System::Windows::Forms::Label());
			this->Label10 = (gcnew System::Windows::Forms::Label());
			this->ProgressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->Label7 = (gcnew System::Windows::Forms::Label());
			this->Label8 = (gcnew System::Windows::Forms::Label());
			this->ProgressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->Label5 = (gcnew System::Windows::Forms::Label());
			this->Label6 = (gcnew System::Windows::Forms::Label());
			this->ProgressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->Label4 = (gcnew System::Windows::Forms::Label());
			this->Label3 = (gcnew System::Windows::Forms::Label());
			this->ProgressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->TextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->RadioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->Button3 = (gcnew System::Windows::Forms::Button());
			this->CheckBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->GroupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->CheckBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->Button2 = (gcnew System::Windows::Forms::Button());
			this->RadioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->RadioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->GroupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->CheckBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->CheckBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->Label2 = (gcnew System::Windows::Forms::Label());
			this->GroupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->Button4 = (gcnew System::Windows::Forms::Button());
			this->RadioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->RadioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->Timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Button1 = (gcnew System::Windows::Forms::Button());
			this->Label16 = (gcnew System::Windows::Forms::Label());
			this->Label15 = (gcnew System::Windows::Forms::Label());
			this->Label14 = (gcnew System::Windows::Forms::Label());
			this->Label13 = (gcnew System::Windows::Forms::Label());
			this->TrackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->GroupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->TrackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->GroupBox4->SuspendLayout();
			this->GroupBox1->SuspendLayout();
			this->GroupBox2->SuspendLayout();
			this->GroupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TrackBar2))->BeginInit();
			this->GroupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TrackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// RadioButton4
			// 
			this->RadioButton4->AutoSize = true;
			this->RadioButton4->Location = System::Drawing::Point(6, 39);
			this->RadioButton4->Name = L"RadioButton4";
			this->RadioButton4->Size = System::Drawing::Size(42, 17);
			this->RadioButton4->TabIndex = 5;
			this->RadioButton4->Text = L"Out";
			this->RadioButton4->UseVisualStyleBackColor = true;
			this->RadioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButton4_CheckedChanged);
			// 
			// GroupBox4
			// 
			this->GroupBox4->Controls->Add(this->Label11);
			this->GroupBox4->Controls->Add(this->Label12);
			this->GroupBox4->Controls->Add(this->ProgressBar5);
			this->GroupBox4->Controls->Add(this->Label9);
			this->GroupBox4->Controls->Add(this->Label10);
			this->GroupBox4->Controls->Add(this->ProgressBar4);
			this->GroupBox4->Controls->Add(this->Label7);
			this->GroupBox4->Controls->Add(this->Label8);
			this->GroupBox4->Controls->Add(this->ProgressBar3);
			this->GroupBox4->Controls->Add(this->Label5);
			this->GroupBox4->Controls->Add(this->Label6);
			this->GroupBox4->Controls->Add(this->ProgressBar2);
			this->GroupBox4->Controls->Add(this->Label4);
			this->GroupBox4->Controls->Add(this->Label3);
			this->GroupBox4->Controls->Add(this->ProgressBar1);
			this->GroupBox4->Location = System::Drawing::Point(136, 130);
			this->GroupBox4->Name = L"GroupBox4";
			this->GroupBox4->Size = System::Drawing::Size(215, 122);
			this->GroupBox4->TabIndex = 34;
			this->GroupBox4->TabStop = false;
			this->GroupBox4->Text = L"Analog In";
			// 
			// Label11
			// 
			this->Label11->AutoSize = true;
			this->Label11->Location = System::Drawing::Point(181, 98);
			this->Label11->Name = L"Label11";
			this->Label11->Size = System::Drawing::Size(19, 13);
			this->Label11->TabIndex = 14;
			this->Label11->Text = L"00";
			// 
			// Label12
			// 
			this->Label12->AutoSize = true;
			this->Label12->Location = System::Drawing::Point(6, 98);
			this->Label12->Name = L"Label12";
			this->Label12->Size = System::Drawing::Size(13, 13);
			this->Label12->TabIndex = 13;
			this->Label12->Text = L"5";
			// 
			// ProgressBar5
			// 
			this->ProgressBar5->Location = System::Drawing::Point(23, 98);
			this->ProgressBar5->MarqueeAnimationSpeed = 0;
			this->ProgressBar5->Maximum = 1023;
			this->ProgressBar5->Name = L"ProgressBar5";
			this->ProgressBar5->Size = System::Drawing::Size(152, 13);
			this->ProgressBar5->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->ProgressBar5->TabIndex = 12;
			// 
			// Label9
			// 
			this->Label9->AutoSize = true;
			this->Label9->Location = System::Drawing::Point(181, 79);
			this->Label9->Name = L"Label9";
			this->Label9->Size = System::Drawing::Size(19, 13);
			this->Label9->TabIndex = 11;
			this->Label9->Text = L"00";
			// 
			// Label10
			// 
			this->Label10->AutoSize = true;
			this->Label10->Location = System::Drawing::Point(6, 79);
			this->Label10->Name = L"Label10";
			this->Label10->Size = System::Drawing::Size(13, 13);
			this->Label10->TabIndex = 10;
			this->Label10->Text = L"4";
			// 
			// ProgressBar4
			// 
			this->ProgressBar4->Location = System::Drawing::Point(23, 79);
			this->ProgressBar4->MarqueeAnimationSpeed = 0;
			this->ProgressBar4->Maximum = 1023;
			this->ProgressBar4->Name = L"ProgressBar4";
			this->ProgressBar4->Size = System::Drawing::Size(152, 13);
			this->ProgressBar4->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->ProgressBar4->TabIndex = 9;
			// 
			// Label7
			// 
			this->Label7->AutoSize = true;
			this->Label7->Location = System::Drawing::Point(181, 60);
			this->Label7->Name = L"Label7";
			this->Label7->Size = System::Drawing::Size(19, 13);
			this->Label7->TabIndex = 8;
			this->Label7->Text = L"00";
			// 
			// Label8
			// 
			this->Label8->AutoSize = true;
			this->Label8->Location = System::Drawing::Point(6, 60);
			this->Label8->Name = L"Label8";
			this->Label8->Size = System::Drawing::Size(13, 13);
			this->Label8->TabIndex = 7;
			this->Label8->Text = L"3";
			// 
			// ProgressBar3
			// 
			this->ProgressBar3->Location = System::Drawing::Point(23, 60);
			this->ProgressBar3->MarqueeAnimationSpeed = 0;
			this->ProgressBar3->Maximum = 1023;
			this->ProgressBar3->Name = L"ProgressBar3";
			this->ProgressBar3->Size = System::Drawing::Size(152, 13);
			this->ProgressBar3->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->ProgressBar3->TabIndex = 6;
			// 
			// Label5
			// 
			this->Label5->AutoSize = true;
			this->Label5->Location = System::Drawing::Point(181, 41);
			this->Label5->Name = L"Label5";
			this->Label5->Size = System::Drawing::Size(19, 13);
			this->Label5->TabIndex = 5;
			this->Label5->Text = L"00";
			// 
			// Label6
			// 
			this->Label6->AutoSize = true;
			this->Label6->Location = System::Drawing::Point(6, 41);
			this->Label6->Name = L"Label6";
			this->Label6->Size = System::Drawing::Size(13, 13);
			this->Label6->TabIndex = 4;
			this->Label6->Text = L"2";
			// 
			// ProgressBar2
			// 
			this->ProgressBar2->Location = System::Drawing::Point(23, 41);
			this->ProgressBar2->MarqueeAnimationSpeed = 0;
			this->ProgressBar2->Maximum = 1023;
			this->ProgressBar2->Name = L"ProgressBar2";
			this->ProgressBar2->Size = System::Drawing::Size(152, 13);
			this->ProgressBar2->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->ProgressBar2->TabIndex = 3;
			// 
			// Label4
			// 
			this->Label4->AutoSize = true;
			this->Label4->Location = System::Drawing::Point(181, 22);
			this->Label4->Name = L"Label4";
			this->Label4->Size = System::Drawing::Size(19, 13);
			this->Label4->TabIndex = 2;
			this->Label4->Text = L"00";
			// 
			// Label3
			// 
			this->Label3->AutoSize = true;
			this->Label3->Location = System::Drawing::Point(6, 22);
			this->Label3->Name = L"Label3";
			this->Label3->Size = System::Drawing::Size(13, 13);
			this->Label3->TabIndex = 1;
			this->Label3->Text = L"1";
			// 
			// ProgressBar1
			// 
			this->ProgressBar1->Location = System::Drawing::Point(23, 22);
			this->ProgressBar1->MarqueeAnimationSpeed = 0;
			this->ProgressBar1->Maximum = 1023;
			this->ProgressBar1->Name = L"ProgressBar1";
			this->ProgressBar1->Size = System::Drawing::Size(152, 13);
			this->ProgressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->ProgressBar1->TabIndex = 0;
			// 
			// TextBox1
			// 
			this->TextBox1->Location = System::Drawing::Point(9, 18);
			this->TextBox1->Name = L"TextBox1";
			this->TextBox1->Size = System::Drawing::Size(86, 20);
			this->TextBox1->TabIndex = 0;
			this->TextBox1->Text = L"0";
			// 
			// RadioButton3
			// 
			this->RadioButton3->AutoSize = true;
			this->RadioButton3->Checked = true;
			this->RadioButton3->Location = System::Drawing::Point(6, 18);
			this->RadioButton3->Name = L"RadioButton3";
			this->RadioButton3->Size = System::Drawing::Size(34, 17);
			this->RadioButton3->TabIndex = 4;
			this->RadioButton3->TabStop = true;
			this->RadioButton3->Text = L"In";
			this->RadioButton3->UseVisualStyleBackColor = true;
			this->RadioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButton3_CheckedChanged);
			// 
			// Button3
			// 
			this->Button3->Location = System::Drawing::Point(12, 162);
			this->Button3->Name = L"Button3";
			this->Button3->Size = System::Drawing::Size(89, 26);
			this->Button3->TabIndex = 30;
			this->Button3->Text = L"Clear All Digital";
			this->Button3->UseVisualStyleBackColor = true;
			this->Button3->Click += gcnew System::EventHandler(this, &Form1::Button3_Click);
			// 
			// CheckBox4
			// 
			this->CheckBox4->AutoSize = true;
			this->CheckBox4->Enabled = false;
			this->CheckBox4->Location = System::Drawing::Point(68, 86);
			this->CheckBox4->Name = L"CheckBox4";
			this->CheckBox4->Size = System::Drawing::Size(32, 17);
			this->CheckBox4->TabIndex = 3;
			this->CheckBox4->Text = L"4";
			this->CheckBox4->UseVisualStyleBackColor = true;
			this->CheckBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::CheckBox4_CheckedChanged);
			// 
			// GroupBox1
			// 
			this->GroupBox1->Controls->Add(this->RadioButton4);
			this->GroupBox1->Controls->Add(this->RadioButton3);
			this->GroupBox1->Controls->Add(this->CheckBox4);
			this->GroupBox1->Controls->Add(this->CheckBox3);
			this->GroupBox1->Controls->Add(this->CheckBox2);
			this->GroupBox1->Controls->Add(this->CheckBox1);
			this->GroupBox1->Location = System::Drawing::Point(136, 16);
			this->GroupBox1->Name = L"GroupBox1";
			this->GroupBox1->Size = System::Drawing::Size(104, 108);
			this->GroupBox1->TabIndex = 31;
			this->GroupBox1->TabStop = false;
			this->GroupBox1->Text = L"Digital In/Out";
			// 
			// CheckBox3
			// 
			this->CheckBox3->AutoSize = true;
			this->CheckBox3->Enabled = false;
			this->CheckBox3->Location = System::Drawing::Point(68, 63);
			this->CheckBox3->Name = L"CheckBox3";
			this->CheckBox3->Size = System::Drawing::Size(32, 17);
			this->CheckBox3->TabIndex = 2;
			this->CheckBox3->Text = L"3";
			this->CheckBox3->UseVisualStyleBackColor = true;
			this->CheckBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::CheckBox3_CheckedChanged);
			// 
			// CheckBox2
			// 
			this->CheckBox2->AutoSize = true;
			this->CheckBox2->Enabled = false;
			this->CheckBox2->Location = System::Drawing::Point(68, 40);
			this->CheckBox2->Name = L"CheckBox2";
			this->CheckBox2->Size = System::Drawing::Size(32, 17);
			this->CheckBox2->TabIndex = 1;
			this->CheckBox2->Text = L"2";
			this->CheckBox2->UseVisualStyleBackColor = true;
			this->CheckBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::CheckBox2_CheckedChanged);
			// 
			// CheckBox1
			// 
			this->CheckBox1->AutoSize = true;
			this->CheckBox1->Enabled = false;
			this->CheckBox1->Location = System::Drawing::Point(68, 19);
			this->CheckBox1->Name = L"CheckBox1";
			this->CheckBox1->Size = System::Drawing::Size(32, 17);
			this->CheckBox1->TabIndex = 0;
			this->CheckBox1->Text = L"1";
			this->CheckBox1->UseVisualStyleBackColor = true;
			this->CheckBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::CheckBox1_CheckedChanged);
			// 
			// CheckBox8
			// 
			this->CheckBox8->AutoSize = true;
			this->CheckBox8->Enabled = false;
			this->CheckBox8->Location = System::Drawing::Point(67, 85);
			this->CheckBox8->Name = L"CheckBox8";
			this->CheckBox8->Size = System::Drawing::Size(32, 17);
			this->CheckBox8->TabIndex = 0;
			this->CheckBox8->Text = L"8";
			this->CheckBox8->UseVisualStyleBackColor = true;
			this->CheckBox8->CheckedChanged += gcnew System::EventHandler(this, &Form1::CheckBox8_CheckedChanged);
			// 
			// Button2
			// 
			this->Button2->Location = System::Drawing::Point(12, 130);
			this->Button2->Name = L"Button2";
			this->Button2->Size = System::Drawing::Size(89, 26);
			this->Button2->TabIndex = 29;
			this->Button2->Text = L"Set All Digital";
			this->Button2->UseVisualStyleBackColor = true;
			this->Button2->Click += gcnew System::EventHandler(this, &Form1::Button2_Click);
			// 
			// RadioButton5
			// 
			this->RadioButton5->AutoSize = true;
			this->RadioButton5->Location = System::Drawing::Point(6, 41);
			this->RadioButton5->Name = L"RadioButton5";
			this->RadioButton5->Size = System::Drawing::Size(42, 17);
			this->RadioButton5->TabIndex = 5;
			this->RadioButton5->Text = L"Out";
			this->RadioButton5->UseVisualStyleBackColor = true;
			this->RadioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButton5_CheckedChanged);
			// 
			// RadioButton6
			// 
			this->RadioButton6->AutoSize = true;
			this->RadioButton6->Checked = true;
			this->RadioButton6->Location = System::Drawing::Point(6, 18);
			this->RadioButton6->Name = L"RadioButton6";
			this->RadioButton6->Size = System::Drawing::Size(34, 17);
			this->RadioButton6->TabIndex = 4;
			this->RadioButton6->TabStop = true;
			this->RadioButton6->Text = L"In";
			this->RadioButton6->UseVisualStyleBackColor = true;
			this->RadioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButton6_CheckedChanged);
			// 
			// GroupBox2
			// 
			this->GroupBox2->Controls->Add(this->RadioButton5);
			this->GroupBox2->Controls->Add(this->RadioButton6);
			this->GroupBox2->Controls->Add(this->CheckBox5);
			this->GroupBox2->Controls->Add(this->CheckBox6);
			this->GroupBox2->Controls->Add(this->CheckBox7);
			this->GroupBox2->Controls->Add(this->CheckBox8);
			this->GroupBox2->Location = System::Drawing::Point(246, 16);
			this->GroupBox2->Name = L"GroupBox2";
			this->GroupBox2->Size = System::Drawing::Size(105, 108);
			this->GroupBox2->TabIndex = 32;
			this->GroupBox2->TabStop = false;
			this->GroupBox2->Text = L"Digital In/Out";
			// 
			// CheckBox5
			// 
			this->CheckBox5->AutoSize = true;
			this->CheckBox5->Enabled = false;
			this->CheckBox5->Location = System::Drawing::Point(67, 16);
			this->CheckBox5->Name = L"CheckBox5";
			this->CheckBox5->Size = System::Drawing::Size(32, 17);
			this->CheckBox5->TabIndex = 3;
			this->CheckBox5->Text = L"5";
			this->CheckBox5->UseVisualStyleBackColor = true;
			this->CheckBox5->CheckedChanged += gcnew System::EventHandler(this, &Form1::CheckBox5_CheckedChanged);
			// 
			// CheckBox6
			// 
			this->CheckBox6->AutoSize = true;
			this->CheckBox6->Enabled = false;
			this->CheckBox6->Location = System::Drawing::Point(67, 39);
			this->CheckBox6->Name = L"CheckBox6";
			this->CheckBox6->Size = System::Drawing::Size(32, 17);
			this->CheckBox6->TabIndex = 2;
			this->CheckBox6->Text = L"6";
			this->CheckBox6->UseVisualStyleBackColor = true;
			this->CheckBox6->CheckedChanged += gcnew System::EventHandler(this, &Form1::CheckBox6_CheckedChanged);
			// 
			// CheckBox7
			// 
			this->CheckBox7->AutoSize = true;
			this->CheckBox7->Enabled = false;
			this->CheckBox7->Location = System::Drawing::Point(67, 61);
			this->CheckBox7->Name = L"CheckBox7";
			this->CheckBox7->Size = System::Drawing::Size(32, 17);
			this->CheckBox7->TabIndex = 1;
			this->CheckBox7->Text = L"7";
			this->CheckBox7->UseVisualStyleBackColor = true;
			this->CheckBox7->CheckedChanged += gcnew System::EventHandler(this, &Form1::CheckBox7_CheckedChanged);
			// 
			// Label2
			// 
			this->Label2->AutoSize = true;
			this->Label2->Location = System::Drawing::Point(12, 63);
			this->Label2->Name = L"Label2";
			this->Label2->Size = System::Drawing::Size(64, 13);
			this->Label2->TabIndex = 28;
			this->Label2->Text = L"Select card:";
			// 
			// GroupBox3
			// 
			this->GroupBox3->Controls->Add(this->Button4);
			this->GroupBox3->Controls->Add(this->TextBox1);
			this->GroupBox3->Location = System::Drawing::Point(357, 16);
			this->GroupBox3->Name = L"GroupBox3";
			this->GroupBox3->Size = System::Drawing::Size(106, 108);
			this->GroupBox3->TabIndex = 33;
			this->GroupBox3->TabStop = false;
			this->GroupBox3->Text = L"Counter";
			// 
			// Button4
			// 
			this->Button4->Location = System::Drawing::Point(19, 56);
			this->Button4->Name = L"Button4";
			this->Button4->Size = System::Drawing::Size(65, 24);
			this->Button4->TabIndex = 1;
			this->Button4->Text = L"Reset";
			this->Button4->UseVisualStyleBackColor = true;
			this->Button4->Click += gcnew System::EventHandler(this, &Form1::Button4_Click);
			// 
			// RadioButton2
			// 
			this->RadioButton2->AutoSize = true;
			this->RadioButton2->Enabled = false;
			this->RadioButton2->Location = System::Drawing::Point(52, 79);
			this->RadioButton2->Name = L"RadioButton2";
			this->RadioButton2->Size = System::Drawing::Size(31, 17);
			this->RadioButton2->TabIndex = 27;
			this->RadioButton2->TabStop = true;
			this->RadioButton2->Text = L"1";
			this->RadioButton2->UseVisualStyleBackColor = true;
			this->RadioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButton2_CheckedChanged);
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Location = System::Drawing::Point(12, 41);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(22, 13);
			this->Label1->TabIndex = 25;
			this->Label1->Text = L"- - -";
			// 
			// RadioButton1
			// 
			this->RadioButton1->AutoSize = true;
			this->RadioButton1->Enabled = false;
			this->RadioButton1->Location = System::Drawing::Point(15, 79);
			this->RadioButton1->Name = L"RadioButton1";
			this->RadioButton1->Size = System::Drawing::Size(31, 17);
			this->RadioButton1->TabIndex = 26;
			this->RadioButton1->TabStop = true;
			this->RadioButton1->Text = L"0";
			this->RadioButton1->UseVisualStyleBackColor = true;
			this->RadioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButton1_CheckedChanged);
			// 
			// Timer1
			// 
			this->Timer1->Tick += gcnew System::EventHandler(this, &Form1::Timer1_Tick);
			// 
			// Button1
			// 
			this->Button1->Location = System::Drawing::Point(12, 12);
			this->Button1->Name = L"Button1";
			this->Button1->Size = System::Drawing::Size(89, 26);
			this->Button1->TabIndex = 24;
			this->Button1->Text = L"Open";
			this->Button1->UseVisualStyleBackColor = true;
			this->Button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// Label16
			// 
			this->Label16->AutoSize = true;
			this->Label16->Location = System::Drawing::Point(81, 106);
			this->Label16->Name = L"Label16";
			this->Label16->Size = System::Drawing::Size(19, 13);
			this->Label16->TabIndex = 7;
			this->Label16->Text = L"00";
			// 
			// Label15
			// 
			this->Label15->AutoSize = true;
			this->Label15->Location = System::Drawing::Point(33, 106);
			this->Label15->Name = L"Label15";
			this->Label15->Size = System::Drawing::Size(19, 13);
			this->Label15->TabIndex = 6;
			this->Label15->Text = L"00";
			// 
			// Label14
			// 
			this->Label14->AutoSize = true;
			this->Label14->Location = System::Drawing::Point(84, 13);
			this->Label14->Name = L"Label14";
			this->Label14->Size = System::Drawing::Size(13, 13);
			this->Label14->TabIndex = 5;
			this->Label14->Text = L"2";
			// 
			// Label13
			// 
			this->Label13->AutoSize = true;
			this->Label13->Location = System::Drawing::Point(36, 13);
			this->Label13->Name = L"Label13";
			this->Label13->Size = System::Drawing::Size(13, 13);
			this->Label13->TabIndex = 2;
			this->Label13->Text = L"1";
			// 
			// TrackBar2
			// 
			this->TrackBar2->Location = System::Drawing::Point(55, 29);
			this->TrackBar2->Maximum = 255;
			this->TrackBar2->Name = L"TrackBar2";
			this->TrackBar2->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->TrackBar2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->TrackBar2->RightToLeftLayout = true;
			this->TrackBar2->Size = System::Drawing::Size(45, 82);
			this->TrackBar2->TabIndex = 1;
			this->TrackBar2->TickFrequency = 20;
			this->TrackBar2->Scroll += gcnew System::EventHandler(this, &Form1::TrackBar2_Scroll);
			// 
			// GroupBox5
			// 
			this->GroupBox5->Controls->Add(this->Label16);
			this->GroupBox5->Controls->Add(this->Label15);
			this->GroupBox5->Controls->Add(this->Label14);
			this->GroupBox5->Controls->Add(this->Label13);
			this->GroupBox5->Controls->Add(this->TrackBar2);
			this->GroupBox5->Controls->Add(this->TrackBar1);
			this->GroupBox5->Location = System::Drawing::Point(357, 130);
			this->GroupBox5->Name = L"GroupBox5";
			this->GroupBox5->Size = System::Drawing::Size(106, 122);
			this->GroupBox5->TabIndex = 35;
			this->GroupBox5->TabStop = false;
			this->GroupBox5->Text = L"PWM Out";
			// 
			// TrackBar1
			// 
			this->TrackBar1->Location = System::Drawing::Point(6, 29);
			this->TrackBar1->Maximum = 255;
			this->TrackBar1->Name = L"TrackBar1";
			this->TrackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->TrackBar1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->TrackBar1->RightToLeftLayout = true;
			this->TrackBar1->Size = System::Drawing::Size(45, 82);
			this->TrackBar1->TabIndex = 0;
			this->TrackBar1->TickFrequency = 20;
			this->TrackBar1->Scroll += gcnew System::EventHandler(this, &Form1::TrackBar1_Scroll);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 194);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(89, 26);
			this->button5->TabIndex = 36;
			this->button5->Text = L"Version";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(12, 223);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(22, 13);
			this->label17->TabIndex = 37;
			this->label17->Text = L"- - -";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(12, 236);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(22, 13);
			this->label18->TabIndex = 38;
			this->label18->Text = L"- - -";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(468, 256);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->GroupBox4);
			this->Controls->Add(this->Button3);
			this->Controls->Add(this->GroupBox1);
			this->Controls->Add(this->Button2);
			this->Controls->Add(this->GroupBox2);
			this->Controls->Add(this->Label2);
			this->Controls->Add(this->GroupBox3);
			this->Controls->Add(this->RadioButton2);
			this->Controls->Add(this->Label1);
			this->Controls->Add(this->RadioButton1);
			this->Controls->Add(this->Button1);
			this->Controls->Add(this->GroupBox5);
			this->Name = L"Form1";
			this->Text = L"VM167 Demo";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->GroupBox4->ResumeLayout(false);
			this->GroupBox4->PerformLayout();
			this->GroupBox1->ResumeLayout(false);
			this->GroupBox1->PerformLayout();
			this->GroupBox2->ResumeLayout(false);
			this->GroupBox2->PerformLayout();
			this->GroupBox3->ResumeLayout(false);
			this->GroupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TrackBar2))->EndInit();
			this->GroupBox5->ResumeLayout(false);
			this->GroupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->TrackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
				      
				int CardAddress;
				int HiNibble;
				int LoNibble;
				int Cards;

				// Function prototypes to call from VM167.dll
				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static int OpenDevices();

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void CloseDevices();

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static int ReadAnalogChannel(int CardAddress, int Channel);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void ReadAllAnalog(int CardAddress, int *Buffer);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void SetPWM(int CardAddress, int Channel, int Data, int Freq);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void OutputAllPWM(int CardAddress, int Data1, int Data2);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void OutputAllDigital(int CardAddress, int Data);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void ClearDigitalChannel(int CardAddress, int Channel);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void ClearAllDigital(int CardAddress);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void SetDigitalChannel(int CardAddress, int Channel);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void SetAllDigital(int CardAddress);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static bool ReadDigitalChannel(int CardAddress, int Channel);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				 static int ReadAllDigital(int CardAddress);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void InOutMode(int CardAddress, int HighNibble, int LowNibble);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static unsigned int ReadCounter(int CardAddress);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void ResetCounter(int CardAddress);
								
				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static int Connected();

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static int VersionFirmware(int CardAddress);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static int VersionDLL();

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				static void ReadBackPWMOut(int CardAddress, int *Buffer);

				[DllImport("vm167.dll", CharSet=CharSet::Ansi)]
				 static int ReadBackInOutMode(int CardAddress);

	private: System::Void Button1_Click(System::Object^  sender, System::EventArgs^  e) {
			int PWM[2];
			int IOmode;
			RadioButton1->Enabled = false;
			RadioButton2->Enabled = false;
			RadioButton1->Checked = false;
			RadioButton2->Checked = false;
			Cards = OpenDevices();
			switch (Cards)
			{
                case 0:
                    Label1->Text = "Card open error.";
                    break;
                case 1:
                    Label1->Text = "Card 0 connected.";
                    RadioButton1->Enabled = true;
                    RadioButton1->Checked = true;
                    CardAddress = 0;
					Timer1->Interval = 100;
                    Timer1->Enabled = true;
                    break;
                case 2:
                    Label1->Text = "Card 1 connected.";
                    RadioButton2->Enabled = true;
                    RadioButton2->Checked = true;
                    CardAddress = 1;
					Timer1->Interval = 100;
                    Timer1->Enabled = true;
                    break;
                case 3:
                    Label1->Text = "Cards 0 and 1 connected.";
                    RadioButton1->Enabled = true;
                    RadioButton1->Checked = true;
                    RadioButton2->Enabled = true;
                    RadioButton2->Checked = false;
                    CardAddress = 0;
					Timer1->Interval = 100;
                    Timer1->Enabled = true;
                    break;
                case -1:
                    Label1->Text = "Card not found.";
                    break;
			}
			IOmode = ReadBackInOutMode(CardAddress);
			if ((IOmode & 1)>0) 
				RadioButton3->Checked = true;
			else 
				RadioButton4->Checked = true;
			if ((IOmode & 2)>0) 
				RadioButton6->Checked = true;
			else 
				RadioButton5->Checked = true;

			ReadBackPWMOut(CardAddress, PWM);
			TrackBar1->Value = PWM[0];
			TrackBar2->Value = PWM[1];
			Label15->Text = PWM[0].ToString();
			Label16->Text = PWM[1].ToString();

		}
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			HiNibble = 1;
            LoNibble = 1;
		 }
private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
		 {
			CloseDevices();
		 }
private: System::Void Button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
            InOutMode(CardAddress, 0, 0);
            SetAllDigital(CardAddress);
            RadioButton4->Checked = true;
            RadioButton5->Checked = true;
		 }
private: System::Void Button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			InOutMode(CardAddress, 0, 0);
            ClearAllDigital(CardAddress);
            RadioButton4->Checked = true;
            RadioButton5->Checked = true;
		 }
private: System::Void Timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
            int i;
            int Buffer[8];
            Timer1->Enabled = false;
			if (Cards != Connected())
			{
				Timer1->Interval = 1000;		// check once a second if there is a connection
				Button1_Click(sender, e);		// try to reconnect
			}
            ReadAllAnalog(CardAddress, Buffer);
            ProgressBar1->Value = Buffer[0];
            Label4->Text = Buffer[0].ToString();
            ProgressBar2->Value = Buffer[1];
            Label5->Text = Buffer[1].ToString();
            ProgressBar3->Value = Buffer[2];
            Label7->Text = Buffer[2].ToString();
            ProgressBar4->Value = Buffer[3];
            Label9->Text = Buffer[3].ToString();
            ProgressBar5->Value = Buffer[4];
            Label11->Text = Buffer[4].ToString();

            i = ReadAllDigital(CardAddress);
            CheckBox1->Checked = (i & 1)>0;
            CheckBox2->Checked = (i & 2)>0;
            CheckBox3->Checked = (i & 4)>0;
            CheckBox4->Checked = (i & 8)>0;
            CheckBox5->Checked = (i & 16)>0;
            CheckBox6->Checked = (i & 32)>0;
            CheckBox7->Checked = (i & 64)>0;
            CheckBox8->Checked = (i & 128)>0;
            TextBox1->Text = (ReadCounter(CardAddress)).ToString();
            Timer1->Enabled = true;
		 }
private: System::Void TrackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) 
		 {
			Label15->Text = TrackBar1->Value.ToString();
            SetPWM(CardAddress, 1, TrackBar1->Value, 2);
		 }
private: System::Void TrackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) 
		 {
			Label16->Text = TrackBar2->Value.ToString();
            SetPWM(CardAddress, 2, TrackBar2->Value, 2);
		 }
private: System::Void RadioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            CheckBox1->Enabled = false;
            CheckBox2->Enabled = false;
            CheckBox3->Enabled = false;
            CheckBox4->Enabled = false;
            LoNibble = 1;
            InOutMode(CardAddress, HiNibble, LoNibble);
		 }
private: System::Void RadioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            CheckBox1->Enabled = true;
            CheckBox2->Enabled = true;
            CheckBox3->Enabled = true;
            CheckBox4->Enabled = true;
            LoNibble = 0;
            InOutMode(CardAddress, HiNibble, LoNibble);
		 }
private: System::Void RadioButton6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            CheckBox5->Enabled = false;
            CheckBox6->Enabled = false;
            CheckBox7->Enabled = false;
            CheckBox8->Enabled = false;
            HiNibble = 1;
            InOutMode(CardAddress, HiNibble, LoNibble);
		 }
private: System::Void RadioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            CheckBox5->Enabled = true;
            CheckBox6->Enabled = true;
            CheckBox7->Enabled = true;
            CheckBox8->Enabled = true;
            HiNibble = 0;
            InOutMode(CardAddress, HiNibble, LoNibble);
		 }
private: System::Void Button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			ResetCounter(CardAddress);
		 }
private: System::Void CheckBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            if (LoNibble == 0)
            {
                if (CheckBox1->Checked)
                    SetDigitalChannel(CardAddress, 1);
                else
                    ClearDigitalChannel(CardAddress, 1);
            }
		 }
private: System::Void CheckBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            if (LoNibble == 0)
            {
                if (CheckBox2->Checked)
                    SetDigitalChannel(CardAddress, 2);
                else
                    ClearDigitalChannel(CardAddress, 2);
            }
		 }
private: System::Void CheckBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            if (LoNibble == 0)
            {
                if (CheckBox3->Checked)
                    SetDigitalChannel(CardAddress, 3);
                else
                    ClearDigitalChannel(CardAddress, 3);
            }
		 }
private: System::Void CheckBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            if (LoNibble == 0)
            {
                if (CheckBox4->Checked)
                    SetDigitalChannel(CardAddress, 4);
                else
                    ClearDigitalChannel(CardAddress, 4);
            }
		 }
private: System::Void CheckBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            if (HiNibble == 0)
            {
                if (CheckBox5->Checked)
                    SetDigitalChannel(CardAddress, 5);
                else
                    ClearDigitalChannel(CardAddress, 5);
            }
		 }
private: System::Void CheckBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            if (HiNibble == 0)
            {
                if (CheckBox6->Checked)
                    SetDigitalChannel(CardAddress, 6);
                else
                    ClearDigitalChannel(CardAddress, 6);
            }
		 }
private: System::Void CheckBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            if (HiNibble == 0)
            {
                if (CheckBox7->Checked)
                    SetDigitalChannel(CardAddress, 7);
                else
                    ClearDigitalChannel(CardAddress, 7);
            }
		 }
private: System::Void CheckBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
            if (HiNibble == 0)
            {
                if (CheckBox8->Checked)
                    SetDigitalChannel(CardAddress, 8);
                else
                    ClearDigitalChannel(CardAddress, 8);
            }
		 }
private: System::Void RadioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			int PWM[2];
			int IOmode;
			CardAddress = 0;
			IOmode = ReadBackInOutMode(CardAddress);
			if ((IOmode & 1)>0) 
				RadioButton3->Checked = true;
			else 
				RadioButton4->Checked = true;
			if ((IOmode & 2)>0) 
				RadioButton6->Checked = true;
			else 
				RadioButton5->Checked = true;

			ReadBackPWMOut(CardAddress, PWM);
			TrackBar1->Value = PWM[0];
			TrackBar2->Value = PWM[1];
			Label15->Text = PWM[0].ToString();
			Label16->Text = PWM[1].ToString();
		 }
private: System::Void RadioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			int PWM[2];
			int IOmode;
			CardAddress = 1;
			IOmode = ReadBackInOutMode(CardAddress);
			if ((IOmode & 1)>0) 
				RadioButton3->Checked = true;
			else 
				RadioButton4->Checked = true;
			if ((IOmode & 2)>0) 
				RadioButton6->Checked = true;
			else 
				RadioButton5->Checked = true;

			ReadBackPWMOut(CardAddress, PWM);
			TrackBar1->Value = PWM[0];
			TrackBar2->Value = PWM[1];
			Label15->Text = PWM[0].ToString();
			Label16->Text = PWM[1].ToString();
		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			int ver;
			ver = VersionFirmware(CardAddress);

			label17->Text = "Firmware v"+(ver >> 24).ToString()+"."+((ver >> 16) & 0xFF).ToString()+"."
				+((ver >> 8) & 0xFF).ToString()+"."+(ver & 0xFF).ToString();

			ver = VersionDLL();
			label18->Text = "DLL v"+(ver >> 24).ToString()+"."+((ver >> 16) & 0xFF).ToString()+"."
				+((ver >> 8) & 0xFF).ToString()+"."+(ver & 0xFF).ToString();

		 }
};
}

