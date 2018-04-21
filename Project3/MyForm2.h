#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;


	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label4;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox3;
	private: System::Windows::Forms::Label^  label3;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;



	private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker1;
	private: System::Windows::Forms::Label^  label6;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuDatepicker1 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bunifuMaterialTextbox3 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->shapeContainer2 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->shapeContainer1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1176, 726);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Controls->Add(this->bunifuFlatButton1);
			this->panel3->Controls->Add(this->comboBox5);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->comboBox4);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->comboBox3);
			this->panel3->Controls->Add(this->bunifuDatepicker1);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->bunifuMaterialTextbox3);
			this->panel3->Controls->Add(this->bunifuMaterialTextbox2);
			this->panel3->Controls->Add(this->bunifuMaterialTextbox1);
			this->panel3->Controls->Add(this->shapeContainer2);
			this->panel3->Location = System::Drawing::Point(9, 130);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1162, 593);
			this->panel3->TabIndex = 3;
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::Color::Teal;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(147, 374);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(370, 21);
			this->comboBox5->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Teal;
			this->label11->Location = System::Drawing::Point(7, 346);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(133, 66);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Marital status:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Teal;
			this->label10->Location = System::Drawing::Point(567, 133);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(172, 66);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Department :";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::Teal;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(772, 161);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(366, 21);
			this->comboBox4->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Teal;
			this->label9->Location = System::Drawing::Point(567, 26);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 66);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Ministry :";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::Teal;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(772, 54);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(366, 21);
			this->comboBox3->TabIndex = 19;
			// 
			// bunifuDatepicker1
			// 
			this->bunifuDatepicker1->BackColor = System::Drawing::Color::Teal;
			this->bunifuDatepicker1->BorderRadius = 0;
			this->bunifuDatepicker1->ForeColor = System::Drawing::Color::White;
			this->bunifuDatepicker1->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->bunifuDatepicker1->FormatCustom = nullptr;
			this->bunifuDatepicker1->Location = System::Drawing::Point(147, 550);
			this->bunifuDatepicker1->Name = L"bunifuDatepicker1";
			this->bunifuDatepicker1->Size = System::Drawing::Size(370, 36);
			this->bunifuDatepicker1->TabIndex = 17;
			this->bunifuDatepicker1->Value = System::DateTime(2018, 4, 10, 3, 39, 24, 547);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Teal;
			this->label6->Location = System::Drawing::Point(12, 520);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 66);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Age :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Teal;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(147, 482);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(370, 21);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm2::comboBox1_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(7, 454);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 66);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Gender :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm2::label5_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Teal;
			this->label4->Location = System::Drawing::Point(7, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 66);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Password:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Teal;
			this->label3->Location = System::Drawing::Point(7, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 66);
			this->label3->TabIndex = 5;
			this->label3->Text = L"National ID:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Teal;
			this->label2->Location = System::Drawing::Point(7, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 66);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Name:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bunifuMaterialTextbox3
			// 
			this->bunifuMaterialTextbox3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMaterialTextbox3->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox3->HintText = L"";
			this->bunifuMaterialTextbox3->isPassword = false;
			this->bunifuMaterialTextbox3->LineFocusedColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox3->LineIdleColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox3->LineMouseHoverColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox3->LineThickness = 3;
			this->bunifuMaterialTextbox3->Location = System::Drawing::Point(147, 265);
			this->bunifuMaterialTextbox3->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox3->Name = L"bunifuMaterialTextbox3";
			this->bunifuMaterialTextbox3->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox3->TabIndex = 6;
			this->bunifuMaterialTextbox3->Text = L"bunifuMaterialTextbox3";
			this->bunifuMaterialTextbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMaterialTextbox3->OnValueChanged += gcnew System::EventHandler(this, &MyForm2::bunifuMaterialTextbox3_OnValueChanged);
			// 
			// bunifuMaterialTextbox1
			// 
			this->bunifuMaterialTextbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMaterialTextbox1->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox1->HintText = L"";
			this->bunifuMaterialTextbox1->isPassword = false;
			this->bunifuMaterialTextbox1->LineFocusedColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox1->LineIdleColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox1->LineMouseHoverColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox1->LineThickness = 3;
			this->bunifuMaterialTextbox1->Location = System::Drawing::Point(147, 26);
			this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
			this->bunifuMaterialTextbox1->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox1->TabIndex = 2;
			this->bunifuMaterialTextbox1->Text = L"bunifuMaterialTextbox1";
			this->bunifuMaterialTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMaterialTextbox2
			// 
			this->bunifuMaterialTextbox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMaterialTextbox2->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox2->HintText = L"";
			this->bunifuMaterialTextbox2->isPassword = false;
			this->bunifuMaterialTextbox2->LineFocusedColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox2->LineIdleColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox2->LineMouseHoverColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox2->LineThickness = 3;
			this->bunifuMaterialTextbox2->Location = System::Drawing::Point(147, 144);
			this->bunifuMaterialTextbox2->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox2->Name = L"bunifuMaterialTextbox2";
			this->bunifuMaterialTextbox2->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox2->TabIndex = 4;
			this->bunifuMaterialTextbox2->Text = L"bunifuMaterialTextbox2";
			this->bunifuMaterialTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bunifuMaterialTextbox2->OnValueChanged += gcnew System::EventHandler(this, &MyForm2::bunifuMaterialTextbox2_OnValueChanged);
			// 
			// shapeContainer2
			// 
			this->shapeContainer2->Location = System::Drawing::Point(0, 0);
			this->shapeContainer2->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer2->Name = L"shapeContainer2";
			this->shapeContainer2->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->lineShape2});
			this->shapeContainer2->Size = System::Drawing::Size(1162, 593);
			this->shapeContainer2->TabIndex = 18;
			this->shapeContainer2->TabStop = false;
			// 
			// lineShape2
			// 
			this->lineShape2->BorderColor = System::Drawing::Color::Teal;
			this->lineShape2->BorderWidth = 3;
			this->lineShape2->Name = L"lineShape2";
			this->lineShape2->X1 = 547;
			this->lineShape2->X2 = 545;
			this->lineShape2->Y1 = 10;
			this->lineShape2->Y2 = 585;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1176, 95);
			this->panel2->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::Window;
			this->label8->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Teal;
			this->label8->Location = System::Drawing::Point(554, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(622, 95);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Job INFO.";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Window;
			this->panel4->Controls->Add(this->label1);
			this->panel4->Location = System::Drawing::Point(3, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(554, 100);
			this->panel4->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Teal;
			this->label1->Location = System::Drawing::Point(6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(545, 100);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Personal INFO.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) {this->lineShape1});
			this->shapeContainer1->Size = System::Drawing::Size(1176, 726);
			this->shapeContainer1->TabIndex = 1;
			this->shapeContainer1->TabStop = false;
			// 
			// lineShape1
			// 
			this->lineShape1->BorderColor = System::Drawing::Color::Teal;
			this->lineShape1->BorderWidth = 5;
			this->lineShape1->Name = L"lineShape1";
			this->lineShape1->X1 = 1;
			this->lineShape1->X2 = 1170;
			this->lineShape1->Y1 = 103;
			this->lineShape1->Y2 = 106;
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::Teal;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"Add";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = nullptr;
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 0;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 120;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(772, 506);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Teal;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(138, 48);
			this->bunifuFlatButton1->TabIndex = 25;
			this->bunifuFlatButton1->Text = L"Add";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(3, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(446, 222);
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(628, 212);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(452, 252);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Image";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1200, 750);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bunifuMaterialTextbox2_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void bunifuMaterialTextbox3_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void bunifuMaterialTextbox4_OnValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
