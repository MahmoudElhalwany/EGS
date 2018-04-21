#pragma once
#include "citizen.h"
#include"alllministeries.h"
#include <msclr\marshal_cppstd.h>
#include"departments.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: System::Windows::Forms::GroupBox^  groupBox6;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;

	private: System::Windows::Forms::TextBox^  textBox5;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: Bunifu::Framework::UI::BunifuElipse^  bunifuElipse1;
	private: System::Windows::Forms::ComboBox^  comboBox1;



	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  bunifuCustomDataGrid1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  des;



	protected: 





















	private: System::ComponentModel::IContainer^  components;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuCustomDataGrid1 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->des = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->groupBox1->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuCustomDataGrid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->bunifuFlatButton1);
			this->groupBox1->Controls->Add(this->groupBox6);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox1->Location = System::Drawing::Point(61, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1167, 748);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ministry info ";
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::DarkSeaGreen;
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::Teal;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"Save";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->ForeColor = System::Drawing::Color::DarkSeaGreen;
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
			this->bunifuFlatButton1->IconZoom = 160;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(280, 683);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Teal;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::DarkSeaGreen;
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(241, 37);
			this->bunifuFlatButton1->TabIndex = 7;
			this->bunifuFlatButton1->Text = L"Save";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->Click += gcnew System::EventHandler(this, &MyForm::bunifuFlatButton1_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->comboBox2);
			this->groupBox6->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox6->Location = System::Drawing::Point(738, 67);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(372, 133);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"minister Name";
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::Teal;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) {L"null"});
			this->comboBox2->Location = System::Drawing::Point(41, 57);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(302, 39);
			this->comboBox2->TabIndex = 0;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->bunifuCustomDataGrid1);
			this->groupBox5->Controls->Add(this->bunifuImageButton1);
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Controls->Add(this->textBox4);
			this->groupBox5->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox5->Location = System::Drawing::Point(692, 247);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(418, 479);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Ministry Departments";
			// 
			// bunifuCustomDataGrid1
			// 
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->bunifuCustomDataGrid1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->bunifuCustomDataGrid1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->bunifuCustomDataGrid1->BackgroundColor = System::Drawing::Color::Gainsboro;
			this->bunifuCustomDataGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bunifuCustomDataGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Teal;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->bunifuCustomDataGrid1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->bunifuCustomDataGrid1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->bunifuCustomDataGrid1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->name, 
				this->des});
			this->bunifuCustomDataGrid1->DoubleBuffered = true;
			this->bunifuCustomDataGrid1->EnableHeadersVisualStyles = false;
			this->bunifuCustomDataGrid1->HeaderBgColor = System::Drawing::Color::Teal;
			this->bunifuCustomDataGrid1->HeaderForeColor = System::Drawing::Color::White;
			this->bunifuCustomDataGrid1->Location = System::Drawing::Point(6, 282);
			this->bunifuCustomDataGrid1->Name = L"bunifuCustomDataGrid1";
			this->bunifuCustomDataGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->bunifuCustomDataGrid1->RowHeadersWidth = 50;
			this->bunifuCustomDataGrid1->RowTemplate->Height = 30;
			this->bunifuCustomDataGrid1->Size = System::Drawing::Size(406, 191);
			this->bunifuCustomDataGrid1->TabIndex = 9;
			// 
			// name
			// 
			this->name->HeaderText = L"Dep. Name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// des
			// 
			this->des->HeaderText = L"Dep. Description";
			this->des->Name = L"des";
			this->des->ReadOnly = true;
			// 
			// bunifuImageButton1
			// 
			this->bunifuImageButton1->BackColor = System::Drawing::Color::Teal;
			this->bunifuImageButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuImageButton1.Image")));
			this->bunifuImageButton1->ImageActive = nullptr;
			this->bunifuImageButton1->Location = System::Drawing::Point(191, 212);
			this->bunifuImageButton1->Name = L"bunifuImageButton1";
			this->bunifuImageButton1->Size = System::Drawing::Size(71, 51);
			this->bunifuImageButton1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton1->TabIndex = 8;
			this->bunifuImageButton1->TabStop = false;
			this->bunifuImageButton1->Zoom = 10;
			this->bunifuImageButton1->Click += gcnew System::EventHandler(this, &MyForm::bunifuImageButton1_Click);
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox5->Location = System::Drawing::Point(6, 120);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(406, 65);
			this->textBox5->TabIndex = 3;
			this->textBox5->Text = L"Department Descrtiption ";
			this->textBox5->MouseEnter += gcnew System::EventHandler(this, &MyForm::textBox5_MouseEnter);
			this->textBox5->MouseLeave += gcnew System::EventHandler(this, &MyForm::textBox5_MouseLeave);
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox4->Location = System::Drawing::Point(6, 57);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(406, 38);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"Department Name";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged_1);
			this->textBox4->MouseEnter += gcnew System::EventHandler(this, &MyForm::textBox4_MouseEnter);
			this->textBox4->MouseLeave += gcnew System::EventHandler(this, &MyForm::textBox4_MouseLeave);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox4->Location = System::Drawing::Point(378, 67);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(342, 133);
			this->groupBox4->TabIndex = 2;
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
			this->textBox3->Text = L"ex:3.6 km � Almaza";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->MouseEnter += gcnew System::EventHandler(this, &MyForm::textBox3_MouseEnter);
			this->textBox3->MouseLeave += gcnew System::EventHandler(this, &MyForm::textBox3_MouseLeave);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox3->Location = System::Drawing::Point(12, 247);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(635, 402);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Ministry Descrtption";
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Location = System::Drawing::Point(3, 34);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(629, 365);
			this->textBox2->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox2->Location = System::Drawing::Point(6, 67);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(342, 133);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ministry Name";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Teal;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"Interior", L"Education", L"Finance ", L"Transportation", 
				L"Tourism", L"Electricity and Energy", L"Health and population"});
			this->comboBox1->Location = System::Drawing::Point(9, 57);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(327, 39);
			this->comboBox1->TabIndex = 1;
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 15;
			this->bunifuElipse1->TargetControl = this;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1386, 788);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuCustomDataGrid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 MyForm::Close(); 
			 }
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void bunifuThinButton21_Click(System::Object^  sender, System::EventArgs^  e) {
			  MyForm::Close(); 
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void bunifuFlatButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context context;

			 string ministry=msclr::interop::marshal_as<string >(comboBox1->Text->ToString());
			 string loc=msclr::interop::marshal_as<string >(textBox3->Text->ToString());
			 minister m;
			 string dis=msclr::interop::marshal_as<string >(textBox2->Text->ToString());
			 if(ministry!=""&&loc!=""&&dis!=""){
			 int exeption =alllministeries::create(ministry,loc,m,dis,departments::get());
			 if(exeption==-1){
			  MessageBox::Show("ministry is already exist");
			 }}
			 else {
				 MessageBox::Show("please fill data");
			 return;
			 }
				 departments::clear();
			 textBox4->Text="Department Name"; 
			 textBox4->ForeColor=Color::LightGray; 
			 textBox5->Text="Department Descrtiption ";
			 textBox5->ForeColor=Color::LightGray;
			 textBox3->Text="ex:3.6 km � Almaza"; 
			 textBox3->ForeColor=Color::LightGray; 

		 }
private: System::Void bunifuImageButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			  msclr::interop::marshal_context context;

			  string name=msclr::interop::marshal_as<string >(textBox4->Text->ToString());
			   string des=msclr::interop::marshal_as<string >(textBox5->Text->ToString());
			   string date="";
			 department nd(name,des,date);
			 departments::add(nd);
			
			 bunifuCustomDataGrid1->Rows->Add(textBox4->Text->ToString(),textBox5->Text->ToString());
			 textBox4->Text="Department Name"; 
			 textBox4->ForeColor=Color::LightGray; 
			 textBox5->Text="Department Descrtiption ";
			 textBox5->ForeColor=Color::LightGray; 
		 }
private: System::Void textBox4_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox4->Text=="Department Name")
			 {
				 textBox4->Text=""; 
				 textBox4->ForeColor=Color::Black; 
			 }
		 }

private: System::Void textBox4_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox4->Text=="")
			 {
				 textBox4->Text="Department Name"; 
				 textBox4->ForeColor=Color::LightGray; 
			 }
		 }
private: System::Void textBox5_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox5->Text=="Department Descrtiption ")
			 {
				 textBox5->Text=""; 
				 textBox5->ForeColor=Color::Black; 
			 }
		 }
private: System::Void textBox5_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox5->Text=="")
			 {
				textBox5->Text="Department Descrtiption "; 
				textBox5->ForeColor=Color::LightGray; 
			 }
		 }
private: System::Void textBox3_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox3->Text=="ex:3.6 km � Almaza")
			 {
				 textBox3->Text=""; 
				 textBox3->ForeColor=Color::Black; 
			 }
		 }
private: System::Void textBox3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox3->Text=="")
			 {
				 textBox3->Text="ex:3.6 km � Almaza"; 
				 textBox3->ForeColor=Color::LightGray; 
			 }
		 }
};
}
