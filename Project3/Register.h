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
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	//	System::Windows::Forms::Form ^ Otherform;
	public:
		
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Register(System::Windows::Forms::Form^f)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Otherform=f; 
		}
	private:
		System::Windows::Forms::Form^Otherform; 
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox2;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox3;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox4;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuElipse^  bunifuElipse1;
	private: Bunifu::Framework::UI::BunifuThinButton2^  bunifuThinButton21;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuMaterialTextbox1 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox2 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox3 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox4 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->bunifuMaterialTextbox5 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuThinButton21 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Teal;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(399, 528);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(399, 528);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Andalus", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(-60, 320);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(536, 104);
			this->label1->TabIndex = 1;
			this->label1->Text = L"government is ourselves ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Register::label1_Click);
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
			this->bunifuMaterialTextbox1->Location = System::Drawing::Point(423, 46);
			this->bunifuMaterialTextbox1->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox1->Name = L"bunifuMaterialTextbox1";
			this->bunifuMaterialTextbox1->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox1->TabIndex = 1;
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
			this->bunifuMaterialTextbox2->Location = System::Drawing::Point(422, 141);
			this->bunifuMaterialTextbox2->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox2->Name = L"bunifuMaterialTextbox2";
			this->bunifuMaterialTextbox2->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox2->TabIndex = 2;
			this->bunifuMaterialTextbox2->Text = L"bunifuMaterialTextbox2";
			this->bunifuMaterialTextbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
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
			this->bunifuMaterialTextbox3->Location = System::Drawing::Point(422, 232);
			this->bunifuMaterialTextbox3->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox3->Name = L"bunifuMaterialTextbox3";
			this->bunifuMaterialTextbox3->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox3->TabIndex = 3;
			this->bunifuMaterialTextbox3->Text = L"bunifuMaterialTextbox3";
			this->bunifuMaterialTextbox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMaterialTextbox4
			// 
			this->bunifuMaterialTextbox4->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMaterialTextbox4->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox4->HintText = L"";
			this->bunifuMaterialTextbox4->isPassword = false;
			this->bunifuMaterialTextbox4->LineFocusedColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox4->LineIdleColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox4->LineMouseHoverColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox4->LineThickness = 3;
			this->bunifuMaterialTextbox4->Location = System::Drawing::Point(422, 324);
			this->bunifuMaterialTextbox4->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox4->Name = L"bunifuMaterialTextbox4";
			this->bunifuMaterialTextbox4->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox4->TabIndex = 4;
			this->bunifuMaterialTextbox4->Text = L"bunifuMaterialTextbox4";
			this->bunifuMaterialTextbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// bunifuMaterialTextbox5
			// 
			this->bunifuMaterialTextbox5->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMaterialTextbox5->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox5->HintText = L"";
			this->bunifuMaterialTextbox5->isPassword = false;
			this->bunifuMaterialTextbox5->LineFocusedColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox5->LineIdleColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox5->LineMouseHoverColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox5->LineThickness = 3;
			this->bunifuMaterialTextbox5->Location = System::Drawing::Point(422, 419);
			this->bunifuMaterialTextbox5->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox5->Name = L"bunifuMaterialTextbox5";
			this->bunifuMaterialTextbox5->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox5->TabIndex = 5;
			this->bunifuMaterialTextbox5->Text = L"bunifuMaterialTextbox5";
			this->bunifuMaterialTextbox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Teal;
			this->label2->Location = System::Drawing::Point(417, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 29);
			this->label2->TabIndex = 6;
			this->label2->Text = L"First Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Teal;
			this->label3->Location = System::Drawing::Point(417, 108);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Last Name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Teal;
			this->label4->Location = System::Drawing::Point(418, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 29);
			this->label4->TabIndex = 8;
			this->label4->Text = L"National ID:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(417, 291);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(126, 29);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Password:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Teal;
			this->label6->Location = System::Drawing::Point(417, 386);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(208, 29);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Retype Password:";
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::Teal;
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"Register ";
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
			this->bunifuFlatButton1->IconZoom = 60;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(488, 470);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Teal;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(175, 48);
			this->bunifuFlatButton1->TabIndex = 11;
			this->bunifuFlatButton1->Text = L"Register ";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 15;
			this->bunifuElipse1->TargetControl = this;
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
			this->bunifuThinButton21->Location = System::Drawing::Point(773, 1);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(40, 41);
			this->bunifuThinButton21->TabIndex = 12;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &Register::bunifuThinButton21_Click);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(827, 528);
			this->Controls->Add(this->bunifuThinButton21);
			this->Controls->Add(this->bunifuFlatButton1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->bunifuMaterialTextbox5);
			this->Controls->Add(this->bunifuMaterialTextbox4);
			this->Controls->Add(this->bunifuMaterialTextbox3);
			this->Controls->Add(this->bunifuMaterialTextbox2);
			this->Controls->Add(this->bunifuMaterialTextbox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void bunifuThinButton21_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close(); 
				 Otherform->Show(); 
			 }
};
}
