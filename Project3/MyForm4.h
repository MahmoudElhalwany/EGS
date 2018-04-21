#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}






















	private: Bunifu::Framework::UI::BunifuElipse^  bunifuElipse1;

	private: Bunifu::Framework::UI::BunifuElipse^  bunifuElipse2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel2;
	private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox3;
	private: System::Windows::Forms::Label^  label3;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox2;
	private: System::Windows::Forms::Label^  label2;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton3;

	private: System::ComponentModel::IContainer^  components;









	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuElipse2 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->bunifuDatepicker1 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bunifuMaterialTextbox3 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bunifuMaterialTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 15;
			// 
			// bunifuElipse2
			// 
			this->bunifuElipse2->ElipseRadius = 20;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1125, 717);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Teal;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1054, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(43, 31);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {L"254564648", L"254654654", L"265656564", 
				L"248484842"});
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox1->BackColor = System::Drawing::Color::Teal;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(18, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1088, 31);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->bunifuFlatButton2);
			this->panel2->Controls->Add(this->bunifuFlatButton3);
			this->panel2->Controls->Add(this->bunifuDatepicker1);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->comboBox4);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->comboBox3);
			this->panel2->Controls->Add(this->comboBox5);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->bunifuMaterialTextbox3);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->bunifuMaterialTextbox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->bunifuMaterialTextbox1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(3, 81);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1119, 624);
			this->panel2->TabIndex = 8;
			// 
			// bunifuDatepicker1
			// 
			this->bunifuDatepicker1->BackColor = System::Drawing::Color::Teal;
			this->bunifuDatepicker1->BorderRadius = 0;
			this->bunifuDatepicker1->ForeColor = System::Drawing::Color::White;
			this->bunifuDatepicker1->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->bunifuDatepicker1->FormatCustom = nullptr;
			this->bunifuDatepicker1->Location = System::Drawing::Point(152, 416);
			this->bunifuDatepicker1->Name = L"bunifuDatepicker1";
			this->bunifuDatepicker1->Size = System::Drawing::Size(370, 21);
			this->bunifuDatepicker1->TabIndex = 36;
			this->bunifuDatepicker1->Value = System::DateTime(2018, 4, 10, 3, 39, 24, 547);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Teal;
			this->label6->Location = System::Drawing::Point(8, 388);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 66);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Age :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Teal;
			this->label10->Location = System::Drawing::Point(553, 477);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(172, 66);
			this->label10->TabIndex = 34;
			this->label10->Text = L"Department :";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox4
			// 
			this->comboBox4->BackColor = System::Drawing::Color::Teal;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(731, 505);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(370, 21);
			this->comboBox4->TabIndex = 33;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Teal;
			this->label9->Location = System::Drawing::Point(8, 477);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 66);
			this->label9->TabIndex = 32;
			this->label9->Text = L"Ministry :";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox3
			// 
			this->comboBox3->BackColor = System::Drawing::Color::Teal;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(146, 505);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(376, 21);
			this->comboBox3->TabIndex = 31;
			// 
			// comboBox5
			// 
			this->comboBox5->BackColor = System::Drawing::Color::Teal;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(731, 416);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(370, 21);
			this->comboBox5->TabIndex = 30;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Teal;
			this->label11->Location = System::Drawing::Point(582, 388);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(133, 66);
			this->label11->TabIndex = 29;
			this->label11->Text = L"Marital status:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Teal;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(731, 248);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(370, 21);
			this->comboBox1->TabIndex = 26;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(572, 220);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 66);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Gender :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Teal;
			this->label4->Location = System::Drawing::Point(572, 303);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 66);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Password:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->bunifuMaterialTextbox3->Location = System::Drawing::Point(731, 323);
			this->bunifuMaterialTextbox3->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox3->Name = L"bunifuMaterialTextbox3";
			this->bunifuMaterialTextbox3->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox3->TabIndex = 8;
			this->bunifuMaterialTextbox3->Text = L"bunifuMaterialTextbox3";
			this->bunifuMaterialTextbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Teal;
			this->label3->Location = System::Drawing::Point(8, 281);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 66);
			this->label3->TabIndex = 7;
			this->label3->Text = L"National ID:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->bunifuMaterialTextbox2->Location = System::Drawing::Point(152, 303);
			this->bunifuMaterialTextbox2->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox2->Name = L"bunifuMaterialTextbox2";
			this->bunifuMaterialTextbox2->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox2->TabIndex = 6;
			this->bunifuMaterialTextbox2->Text = L"bunifuMaterialTextbox2";
			this->bunifuMaterialTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Teal;
			this->label2->Location = System::Drawing::Point(12, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 66);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Name:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->bunifuMaterialTextbox1->Location = System::Drawing::Point(152, 215);
			this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
			this->bunifuMaterialTextbox1->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox1->TabIndex = 4;
			this->bunifuMaterialTextbox1->Text = L"bunifuMaterialTextbox1";
			this->bunifuMaterialTextbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Teal;
			this->pictureBox1->Location = System::Drawing::Point(467, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(227, 174);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::Teal;
			this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton2->BorderRadius = 0;
			this->bunifuFlatButton2->ButtonText = L"Delete";
			this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
			this->bunifuFlatButton2->Iconimage_right = nullptr;
			this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton2->Iconimage_Selected = nullptr;
			this->bunifuFlatButton2->IconMarginLeft = 0;
			this->bunifuFlatButton2->IconMarginRight = 0;
			this->bunifuFlatButton2->IconRightVisible = true;
			this->bunifuFlatButton2->IconRightZoom = 0;
			this->bunifuFlatButton2->IconVisible = true;
			this->bunifuFlatButton2->IconZoom = 60;
			this->bunifuFlatButton2->IsTab = false;
			this->bunifuFlatButton2->Location = System::Drawing::Point(564, 558);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::Teal;
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::Red;
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(138, 48);
			this->bunifuFlatButton2->TabIndex = 38;
			this->bunifuFlatButton2->Text = L"Delete";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// bunifuFlatButton3
			// 
			this->bunifuFlatButton3->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton3->BackColor = System::Drawing::Color::Teal;
			this->bunifuFlatButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton3->BorderRadius = 0;
			this->bunifuFlatButton3->ButtonText = L"update";
			this->bunifuFlatButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton3->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton3->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton3.Iconimage")));
			this->bunifuFlatButton3->Iconimage_right = nullptr;
			this->bunifuFlatButton3->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton3->Iconimage_Selected = nullptr;
			this->bunifuFlatButton3->IconMarginLeft = 0;
			this->bunifuFlatButton3->IconMarginRight = 0;
			this->bunifuFlatButton3->IconRightVisible = true;
			this->bunifuFlatButton3->IconRightZoom = 0;
			this->bunifuFlatButton3->IconVisible = true;
			this->bunifuFlatButton3->IconZoom = 60;
			this->bunifuFlatButton3->IsTab = false;
			this->bunifuFlatButton3->Location = System::Drawing::Point(384, 558);
			this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
			this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::Teal;
			this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->selected = false;
			this->bunifuFlatButton3->Size = System::Drawing::Size(138, 48);
			this->bunifuFlatButton3->TabIndex = 37;
			this->bunifuFlatButton3->Text = L"update";
			this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton3->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1150, 742);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm4";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void bunifuDatepicker1_onValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
