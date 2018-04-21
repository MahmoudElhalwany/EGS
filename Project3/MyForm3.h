#pragma once
#include "MyForm.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  editmaninster;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  bunifuCustomDataGrid1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column6;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton3;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton2;
	protected: 















































	protected: 



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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->editmaninster = (gcnew System::Windows::Forms::Panel());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuDatepicker1 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuCustomDataGrid1 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->bunifuImageButton3 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->panel1->SuspendLayout();
			this->editmaninster->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuCustomDataGrid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->editmaninster);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1184, 726);
			this->panel1->TabIndex = 0;
			// 
			// editmaninster
			// 
			this->editmaninster->Controls->Add(this->groupBox5);
			this->editmaninster->Controls->Add(this->groupBox6);
			this->editmaninster->Controls->Add(this->groupBox3);
			this->editmaninster->Controls->Add(this->groupBox4);
			this->editmaninster->Controls->Add(this->groupBox2);
			this->editmaninster->Controls->Add(this->bunifuFlatButton2);
			this->editmaninster->Controls->Add(this->bunifuFlatButton1);
			this->editmaninster->Controls->Add(this->bunifuCustomDataGrid1);
			this->editmaninster->Dock = System::Windows::Forms::DockStyle::Fill;
			this->editmaninster->Location = System::Drawing::Point(0, 0);
			this->editmaninster->Name = L"editmaninster";
			this->editmaninster->Size = System::Drawing::Size(1184, 726);
			this->editmaninster->TabIndex = 1;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->bunifuImageButton3);
			this->groupBox5->Controls->Add(this->bunifuImageButton2);
			this->groupBox5->Controls->Add(this->bunifuImageButton1);
			this->groupBox5->Controls->Add(this->dateTimePicker1);
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Controls->Add(this->dataGridView1);
			this->groupBox5->Controls->Add(this->textBox4);
			this->groupBox5->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox5->Location = System::Drawing::Point(736, 276);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(418, 462);
			this->groupBox5->TabIndex = 16;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Ministry Departments";
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Teal;
			this->bunifuImageButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(66, 217);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(64, 29);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 8;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::DarkSeaGreen;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::DarkSeaGreen;
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::DarkSeaGreen;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::DarkSeaGreen;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::Color::DarkSeaGreen;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(6, 180);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(406, 26);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox5->Location = System::Drawing::Point(6, 120);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(406, 49);
			this->textBox5->TabIndex = 3;
			this->textBox5->Text = L"Department Descrtiption ";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 252);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(406, 204);
			this->dataGridView1->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox4->Location = System::Drawing::Point(6, 57);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(406, 20);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"Department Name";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->bunifuDatepicker1);
			this->groupBox6->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox6->Location = System::Drawing::Point(365, 631);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(342, 104);
			this->groupBox6->TabIndex = 15;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Created Date";
			// 
			// bunifuDatepicker1
			// 
			this->bunifuDatepicker1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->bunifuDatepicker1->BackColor = System::Drawing::Color::Teal;
			this->bunifuDatepicker1->BorderRadius = 0;
			this->bunifuDatepicker1->ForeColor = System::Drawing::Color::White;
			this->bunifuDatepicker1->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->bunifuDatepicker1->FormatCustom = nullptr;
			this->bunifuDatepicker1->Location = System::Drawing::Point(11, 48);
			this->bunifuDatepicker1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->bunifuDatepicker1->Name = L"bunifuDatepicker1";
			this->bunifuDatepicker1->Size = System::Drawing::Size(316, 21);
			this->bunifuDatepicker1->TabIndex = 5;
			this->bunifuDatepicker1->Value = System::DateTime(2018, 4, 10, 1, 19, 12, 420);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox3->Location = System::Drawing::Point(12, 340);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(334, 398);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ministry Descrtption";
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Location = System::Drawing::Point(3, 16);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(328, 379);
			this->textBox2->TabIndex = 0;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox4->Location = System::Drawing::Point(365, 489);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(342, 133);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ministry Location";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox3->Location = System::Drawing::Point(6, 57);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(330, 31);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"ex:3.6 km · Almaza";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox2->Location = System::Drawing::Point(365, 340);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(342, 133);
			this->groupBox2->TabIndex = 12;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ministry Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox1->Location = System::Drawing::Point(6, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(330, 31);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"ex:Interior";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
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
			this->bunifuFlatButton2->IconZoom = 90;
			this->bunifuFlatButton2->IsTab = false;
			this->bunifuFlatButton2->Location = System::Drawing::Point(192, 276);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(138, 48);
			this->bunifuFlatButton2->TabIndex = 11;
			this->bunifuFlatButton2->Text = L"Delete";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"update";
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
			this->bunifuFlatButton1->IconZoom = 90;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(12, 276);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(138, 48);
			this->bunifuFlatButton1->TabIndex = 10;
			this->bunifuFlatButton1->Text = L"update";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// bunifuCustomDataGrid1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->bunifuCustomDataGrid1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->bunifuCustomDataGrid1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->bunifuCustomDataGrid1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->bunifuCustomDataGrid1->BackgroundColor = System::Drawing::SystemColors::WindowFrame;
			this->bunifuCustomDataGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bunifuCustomDataGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuCustomDataGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->bunifuCustomDataGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->bunifuCustomDataGrid1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->Column1, 
				this->Column2, this->Column3, this->Column4, this->Column5, this->Column6});
			this->bunifuCustomDataGrid1->DoubleBuffered = true;
			this->bunifuCustomDataGrid1->EnableHeadersVisualStyles = false;
			this->bunifuCustomDataGrid1->GridColor = System::Drawing::Color::WhiteSmoke;
			this->bunifuCustomDataGrid1->HeaderBgColor = System::Drawing::Color::Teal;
			this->bunifuCustomDataGrid1->HeaderForeColor = System::Drawing::Color::White;
			this->bunifuCustomDataGrid1->Location = System::Drawing::Point(12, 12);
			this->bunifuCustomDataGrid1->Name = L"bunifuCustomDataGrid1";
			this->bunifuCustomDataGrid1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuCustomDataGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->bunifuCustomDataGrid1->Size = System::Drawing::Size(1160, 234);
			this->bunifuCustomDataGrid1->TabIndex = 9;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Ministry Name";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ministry Location";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Created Date";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Ministry Decritption";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Departments ";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Employees";
			this->Column6->Name = L"Column6";
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Teal;
			this->bunifuImageButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(177, 217);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(64, 29);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 9;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			// 
			// bunifuImageButton3
			// 
			this->bunifuImageButton3->BackColor = System::Drawing::Color::Teal;
			this->bunifuImageButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuImageButton3.Image")));
			this->bunifuImageButton3->ImageActive = nullptr;
			this->bunifuImageButton3->Location = System::Drawing::Point(311, 217);
			this->bunifuImageButton3->Name = L"bunifuImageButton3";
			this->bunifuImageButton3->Size = System::Drawing::Size(64, 29);
			this->bunifuImageButton3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton3->TabIndex = 10;
			this->bunifuImageButton3->TabStop = false;
			this->bunifuImageButton3->Zoom = 10;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1200, 750);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm3";
			this->panel1->ResumeLayout(false);
			this->editmaninster->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuCustomDataGrid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bunifuFlatButton1_Click(System::Object^  sender, System::EventArgs^  e) {
				
			 }
};
}
