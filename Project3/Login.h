#pragma once
#include "MyForm.h"
#include "Login.h"
#include "Register.h"
#include "AdminProfile.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::TextBox^  password;


	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  username;

	private: Bunifu::Framework::UI::BunifuElipse^  bunifuElipse1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: Bunifu::Framework::UI::BunifuThinButton2^  bunifuThinButton21;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton21 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->bunifuThinButton21);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 182);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Login::panel1_Paint);
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 20;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Teal;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::Teal;
			this->bunifuThinButton21->BackColor = System::Drawing::Color::White;
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"X";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton21->IdleBorderThickness = 2;
			this->bunifuThinButton21->IdleCornerRadius = 20;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::Teal;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::Teal;
			this->bunifuThinButton21->Location = System::Drawing::Point(446, 0);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(40, 41);
			this->bunifuThinButton21->TabIndex = 1;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &Login::bunifuThinButton21_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(196, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(115, 79);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 182);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(500, 100);
			this->panel2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(253, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(244, 100);
			this->label2->TabIndex = 3;
			this->label2->Text = L"User";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Login::label2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Teal;
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(250, 100);
			this->panel3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 100);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->username);
			this->panel4->Controls->Add(this->password);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 282);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(500, 198);
			this->panel4->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(196, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 44);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// username
			// 
			this->username->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->username->ForeColor = System::Drawing::Color::LightGray;
			this->username->Location = System::Drawing::Point(81, 37);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(343, 39);
			this->username->TabIndex = 4;
			this->username->Text = L"User Name";
			this->username->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			this->username->Enter += gcnew System::EventHandler(this, &Login::username_Enter);
			this->username->Leave += gcnew System::EventHandler(this, &Login::username_Leave);
			// 
			// password
			// 
			this->password->Font = (gcnew System::Drawing::Font(L"Arial", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->password->ForeColor = System::Drawing::Color::LightGray;
			this->password->Location = System::Drawing::Point(81, 94);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(343, 39);
			this->password->TabIndex = 3;
			this->password->Text = L"Password";
			this->password->UseSystemPasswordChar = true;
			this->password->Enter += gcnew System::EventHandler(this, &Login::textBox2_Enter);
			this->password->Leave += gcnew System::EventHandler(this, &Login::password_Leave);
			// 
			// panel6
			// 
			this->panel6->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel6->Location = System::Drawing::Point(430, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(70, 198);
			this->panel6->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(75, 198);
			this->panel5->TabIndex = 0;
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 25;
			this->bunifuElipse1->TargetControl = this;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(167, 502);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(131, 22);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Remember me";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::DarkSeaGreen;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::Color::White;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(345, 507);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(61, 18);
			this->linkLabel1->TabIndex = 4;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Sign up";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(500, 550);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bunifuThinButton21_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit(); 
			 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->panel2->BackColor = System::Drawing::Color::Teal; 
			 this->panel3->BackColor = System::Drawing::Color::DarkSeaGreen; 
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->panel2->BackColor = System::Drawing::Color::DarkSeaGreen; 
			 this->panel3->BackColor = System::Drawing::Color::Teal; 
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			// username->Text=""; 
		 }
private: System::Void username_Enter(System::Object^  sender, System::EventArgs^  e) {
			 if (username->Text=="User Name")
			  {
			  username->Text=""; 
			  username->ForeColor=Color::Teal; 
			  }
		 }
private: System::Void username_Leave(System::Object^  sender, System::EventArgs^  e) {
			 if (username->Text=="")
			 {
				 username->Text="User Name";
				 username->ForeColor=Color::LightGray; 
			 }
		 }
private: System::Void textBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
			 if (password->Text=="Password")
			 {
			 password->Text=""; 
			 password->ForeColor=Color::Teal; 
			 }
		 }
private: System::Void password_Leave(System::Object^  sender, System::EventArgs^  e) {
			 if (password->Text=="")
			 {
				 password->Text="Password"; 
				 password->ForeColor=Color::LightGray; 
			 }
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void Login_Load(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {			 
			 Register ^ f = gcnew Register(this); 
			 this->Hide(); 
			 f->Show(); 
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
};
}
