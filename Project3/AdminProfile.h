#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminProfile
	/// </summary>
	public ref class AdminProfile : public System::Windows::Forms::Form
	{
	public:
		AdminProfile(void)
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
		~AdminProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: Bunifu::Framework::UI::BunifuElipse^  bunifuElipse1;














	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  editemployee;





	private: Bunifu::Framework::UI::BunifuFlatButton^  addemployee;

	private: Bunifu::Framework::UI::BunifuFlatButton^  editministry;

	private: Bunifu::Framework::UI::BunifuFlatButton^  addministry;
	private: Bunifu::Framework::UI::BunifuFlatButton^  statistics;


	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton6;
	private: System::Windows::Forms::Panel^  addemp;

	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox3;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox1;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox2;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape2;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  lineShape1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker2;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  editmaninster;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: Bunifu::Framework::UI::BunifuImageButton^  bunifuImageButton2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker3;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::GroupBox^  groupBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton3;
	private: Bunifu::Framework::UI::BunifuCustomDataGrid^  bunifuCustomDataGrid1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column6;
private: System::Windows::Forms::Panel^  editemp;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::Panel^  panel7;
private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton4;
private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton5;
private: Bunifu::Framework::UI::BunifuDatepicker^  bunifuDatepicker4;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::ComboBox^  comboBox6;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::ComboBox^  comboBox7;
private: System::Windows::Forms::ComboBox^  comboBox8;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::ComboBox^  comboBox9;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox4;
private: System::Windows::Forms::Label^  label18;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox5;
private: System::Windows::Forms::Label^  label19;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^  bunifuMaterialTextbox6;
private: System::Windows::Forms::PictureBox^  pictureBox3;




























































	protected: 







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminProfile::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->statistics = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton6 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->editemployee = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->addemployee = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->editministry = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->addministry = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->addemp = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuDatepicker1 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->lineShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuDatepicker2 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuImageButton1 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->editmaninster = (gcnew System::Windows::Forms::Panel());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuImageButton2 = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->bunifuDatepicker3 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuCustomDataGrid1 = (gcnew Bunifu::Framework::UI::BunifuCustomDataGrid());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->editemp = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->bunifuFlatButton4 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton5 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuDatepicker4 = (gcnew Bunifu::Framework::UI::BunifuDatepicker());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->bunifuMaterialTextbox4 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->bunifuMaterialTextbox5 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->bunifuMaterialTextbox6 = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->addemp->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->editmaninster->SuspendLayout();
			this->groupBox7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuCustomDataGrid1))->BeginInit();
			this->editemp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Teal;
			this->panel1->Controls->Add(this->statistics);
			this->panel1->Controls->Add(this->bunifuFlatButton6);
			this->panel1->Controls->Add(this->editemployee);
			this->panel1->Controls->Add(this->addemployee);
			this->panel1->Controls->Add(this->editministry);
			this->panel1->Controls->Add(this->addministry);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(206, 763);
			this->panel1->TabIndex = 0;
			// 
			// statistics
			// 
			this->statistics->Activecolor = System::Drawing::Color::DarkSeaGreen;
			this->statistics->BackColor = System::Drawing::Color::Teal;
			this->statistics->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->statistics->BorderRadius = 0;
			this->statistics->ButtonText = L"Statistics";
			this->statistics->Cursor = System::Windows::Forms::Cursors::Hand;
			this->statistics->DisabledColor = System::Drawing::Color::Gray;
			this->statistics->Dock = System::Windows::Forms::DockStyle::Top;
			this->statistics->Iconcolor = System::Drawing::Color::Transparent;
			this->statistics->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"statistics.Iconimage")));
			this->statistics->Iconimage_right = nullptr;
			this->statistics->Iconimage_right_Selected = nullptr;
			this->statistics->Iconimage_Selected = nullptr;
			this->statistics->IconMarginLeft = 0;
			this->statistics->IconMarginRight = 0;
			this->statistics->IconRightVisible = true;
			this->statistics->IconRightZoom = 0;
			this->statistics->IconVisible = true;
			this->statistics->IconZoom = 70;
			this->statistics->IsTab = true;
			this->statistics->Location = System::Drawing::Point(0, 512);
			this->statistics->Name = L"statistics";
			this->statistics->Normalcolor = System::Drawing::Color::Teal;
			this->statistics->OnHovercolor = System::Drawing::Color::DarkSeaGreen;
			this->statistics->OnHoverTextColor = System::Drawing::Color::White;
			this->statistics->selected = false;
			this->statistics->Size = System::Drawing::Size(206, 60);
			this->statistics->TabIndex = 6;
			this->statistics->Text = L"Statistics";
			this->statistics->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->statistics->Textcolor = System::Drawing::Color::White;
			this->statistics->TextFont = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			// 
			// bunifuFlatButton6
			// 
			this->bunifuFlatButton6->Activecolor = System::Drawing::Color::DarkSeaGreen;
			this->bunifuFlatButton6->BackColor = System::Drawing::Color::Teal;
			this->bunifuFlatButton6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton6->BorderRadius = 0;
			this->bunifuFlatButton6->ButtonText = L"Add_remove";
			this->bunifuFlatButton6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton6->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton6->Dock = System::Windows::Forms::DockStyle::Top;
			this->bunifuFlatButton6->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton6->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton6.Iconimage")));
			this->bunifuFlatButton6->Iconimage_right = nullptr;
			this->bunifuFlatButton6->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton6->Iconimage_Selected = nullptr;
			this->bunifuFlatButton6->IconMarginLeft = 0;
			this->bunifuFlatButton6->IconMarginRight = 0;
			this->bunifuFlatButton6->IconRightVisible = true;
			this->bunifuFlatButton6->IconRightZoom = 0;
			this->bunifuFlatButton6->IconVisible = true;
			this->bunifuFlatButton6->IconZoom = 90;
			this->bunifuFlatButton6->IsTab = true;
			this->bunifuFlatButton6->Location = System::Drawing::Point(0, 452);
			this->bunifuFlatButton6->Name = L"bunifuFlatButton6";
			this->bunifuFlatButton6->Normalcolor = System::Drawing::Color::Teal;
			this->bunifuFlatButton6->OnHovercolor = System::Drawing::Color::DarkSeaGreen;
			this->bunifuFlatButton6->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton6->selected = false;
			this->bunifuFlatButton6->Size = System::Drawing::Size(206, 60);
			this->bunifuFlatButton6->TabIndex = 5;
			this->bunifuFlatButton6->Text = L"Add_remove";
			this->bunifuFlatButton6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton6->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton6->TextFont = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			// 
			// editemployee
			// 
			this->editemployee->Activecolor = System::Drawing::Color::DarkSeaGreen;
			this->editemployee->BackColor = System::Drawing::Color::Teal;
			this->editemployee->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->editemployee->BorderRadius = 0;
			this->editemployee->ButtonText = L"Edit Emplyee";
			this->editemployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editemployee->DisabledColor = System::Drawing::Color::Gray;
			this->editemployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->editemployee->Iconcolor = System::Drawing::Color::Transparent;
			this->editemployee->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"editemployee.Iconimage")));
			this->editemployee->Iconimage_right = nullptr;
			this->editemployee->Iconimage_right_Selected = nullptr;
			this->editemployee->Iconimage_Selected = nullptr;
			this->editemployee->IconMarginLeft = 0;
			this->editemployee->IconMarginRight = 0;
			this->editemployee->IconRightVisible = true;
			this->editemployee->IconRightZoom = 0;
			this->editemployee->IconVisible = true;
			this->editemployee->IconZoom = 60;
			this->editemployee->IsTab = true;
			this->editemployee->Location = System::Drawing::Point(0, 392);
			this->editemployee->Name = L"editemployee";
			this->editemployee->Normalcolor = System::Drawing::Color::Teal;
			this->editemployee->OnHovercolor = System::Drawing::Color::DarkSeaGreen;
			this->editemployee->OnHoverTextColor = System::Drawing::Color::White;
			this->editemployee->selected = false;
			this->editemployee->Size = System::Drawing::Size(206, 60);
			this->editemployee->TabIndex = 4;
			this->editemployee->Text = L"Edit Emplyee";
			this->editemployee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->editemployee->Textcolor = System::Drawing::Color::White;
			this->editemployee->TextFont = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->editemployee->Click += gcnew System::EventHandler(this, &AdminProfile::editemployee_Click);
			// 
			// addemployee
			// 
			this->addemployee->Activecolor = System::Drawing::Color::DarkSeaGreen;
			this->addemployee->BackColor = System::Drawing::Color::Teal;
			this->addemployee->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->addemployee->BorderRadius = 0;
			this->addemployee->ButtonText = L"Add Employee";
			this->addemployee->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addemployee->DisabledColor = System::Drawing::Color::Gray;
			this->addemployee->Dock = System::Windows::Forms::DockStyle::Top;
			this->addemployee->Iconcolor = System::Drawing::Color::Transparent;
			this->addemployee->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"addemployee.Iconimage")));
			this->addemployee->Iconimage_right = nullptr;
			this->addemployee->Iconimage_right_Selected = nullptr;
			this->addemployee->Iconimage_Selected = nullptr;
			this->addemployee->IconMarginLeft = 0;
			this->addemployee->IconMarginRight = 0;
			this->addemployee->IconRightVisible = true;
			this->addemployee->IconRightZoom = 0;
			this->addemployee->IconVisible = true;
			this->addemployee->IconZoom = 90;
			this->addemployee->IsTab = true;
			this->addemployee->Location = System::Drawing::Point(0, 332);
			this->addemployee->Name = L"addemployee";
			this->addemployee->Normalcolor = System::Drawing::Color::Teal;
			this->addemployee->OnHovercolor = System::Drawing::Color::DarkSeaGreen;
			this->addemployee->OnHoverTextColor = System::Drawing::Color::White;
			this->addemployee->selected = false;
			this->addemployee->Size = System::Drawing::Size(206, 60);
			this->addemployee->TabIndex = 3;
			this->addemployee->Text = L"Add Employee";
			this->addemployee->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->addemployee->Textcolor = System::Drawing::Color::White;
			this->addemployee->TextFont = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addemployee->Click += gcnew System::EventHandler(this, &AdminProfile::bunifuFlatButton4_Click);
			this->addemployee->MouseEnter += gcnew System::EventHandler(this, &AdminProfile::addemployee_MouseEnter);
			// 
			// editministry
			// 
			this->editministry->Activecolor = System::Drawing::Color::DarkSeaGreen;
			this->editministry->BackColor = System::Drawing::Color::Teal;
			this->editministry->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->editministry->BorderRadius = 0;
			this->editministry->ButtonText = L"Edit Mininstry";
			this->editministry->Cursor = System::Windows::Forms::Cursors::Hand;
			this->editministry->DisabledColor = System::Drawing::Color::Gray;
			this->editministry->Dock = System::Windows::Forms::DockStyle::Top;
			this->editministry->Iconcolor = System::Drawing::Color::Transparent;
			this->editministry->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"editministry.Iconimage")));
			this->editministry->Iconimage_right = nullptr;
			this->editministry->Iconimage_right_Selected = nullptr;
			this->editministry->Iconimage_Selected = nullptr;
			this->editministry->IconMarginLeft = 0;
			this->editministry->IconMarginRight = 0;
			this->editministry->IconRightVisible = true;
			this->editministry->IconRightZoom = 0;
			this->editministry->IconVisible = true;
			this->editministry->IconZoom = 60;
			this->editministry->IsTab = true;
			this->editministry->Location = System::Drawing::Point(0, 272);
			this->editministry->Name = L"editministry";
			this->editministry->Normalcolor = System::Drawing::Color::Teal;
			this->editministry->OnHovercolor = System::Drawing::Color::DarkSeaGreen;
			this->editministry->OnHoverTextColor = System::Drawing::Color::White;
			this->editministry->selected = false;
			this->editministry->Size = System::Drawing::Size(206, 60);
			this->editministry->TabIndex = 2;
			this->editministry->Text = L"Edit Mininstry";
			this->editministry->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->editministry->Textcolor = System::Drawing::Color::White;
			this->editministry->TextFont = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->editministry->Click += gcnew System::EventHandler(this, &AdminProfile::editministry_Click);
			this->editministry->Enter += gcnew System::EventHandler(this, &AdminProfile::editministry_Enter);
			this->editministry->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminProfile::editministry_KeyPress);
			// 
			// addministry
			// 
			this->addministry->Activecolor = System::Drawing::Color::DarkSeaGreen;
			this->addministry->BackColor = System::Drawing::Color::Teal;
			this->addministry->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->addministry->BorderRadius = 0;
			this->addministry->ButtonText = L"Add Ministry";
			this->addministry->Cursor = System::Windows::Forms::Cursors::Hand;
			this->addministry->DisabledColor = System::Drawing::Color::Gray;
			this->addministry->Dock = System::Windows::Forms::DockStyle::Top;
			this->addministry->Iconcolor = System::Drawing::Color::Transparent;
			this->addministry->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"addministry.Iconimage")));
			this->addministry->Iconimage_right = nullptr;
			this->addministry->Iconimage_right_Selected = nullptr;
			this->addministry->Iconimage_Selected = nullptr;
			this->addministry->IconMarginLeft = 0;
			this->addministry->IconMarginRight = 0;
			this->addministry->IconRightVisible = true;
			this->addministry->IconRightZoom = 0;
			this->addministry->IconVisible = true;
			this->addministry->IconZoom = 70;
			this->addministry->IsTab = true;
			this->addministry->Location = System::Drawing::Point(0, 212);
			this->addministry->Name = L"addministry";
			this->addministry->Normalcolor = System::Drawing::Color::Teal;
			this->addministry->OnHovercolor = System::Drawing::Color::DarkSeaGreen;
			this->addministry->OnHoverTextColor = System::Drawing::Color::White;
			this->addministry->selected = true;
			this->addministry->Size = System::Drawing::Size(206, 60);
			this->addministry->TabIndex = 1;
			this->addministry->Text = L"Add Ministry";
			this->addministry->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->addministry->Textcolor = System::Drawing::Color::White;
			this->addministry->TextFont = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->addministry->Click += gcnew System::EventHandler(this, &AdminProfile::bunifuFlatButton2_Click);
			this->addministry->Enter += gcnew System::EventHandler(this, &AdminProfile::addministry_Enter);
			this->addministry->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminProfile::addministry_KeyPress);
			this->addministry->Leave += gcnew System::EventHandler(this, &AdminProfile::addministry_Leave);
			this->addministry->MouseEnter += gcnew System::EventHandler(this, &AdminProfile::addministry_MouseEnter);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(206, 212);
			this->panel2->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(49, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(106, 130);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// bunifuElipse1
			// 
			this->bunifuElipse1->ElipseRadius = 35;
			this->bunifuElipse1->TargetControl = this;
			// 
			// addemp
			// 
			this->addemp->Controls->Add(this->panel4);
			this->addemp->Controls->Add(this->panel5);
			this->addemp->Controls->Add(this->shapeContainer1);
			this->addemp->Location = System::Drawing::Point(212, 12);
			this->addemp->Name = L"addemp";
			this->addemp->Size = System::Drawing::Size(1150, 726);
			this->addemp->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->comboBox5);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->comboBox4);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->comboBox3);
			this->panel4->Controls->Add(this->bunifuDatepicker1);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->comboBox2);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->bunifuMaterialTextbox3);
			this->panel4->Controls->Add(this->bunifuMaterialTextbox1);
			this->panel4->Controls->Add(this->bunifuMaterialTextbox2);
			this->panel4->Controls->Add(this->shapeContainer2);
			this->panel4->Location = System::Drawing::Point(9, 130);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1162, 593);
			this->panel4->TabIndex = 3;
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
			this->label10->Location = System::Drawing::Point(557, 133);
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
			this->comboBox4->Location = System::Drawing::Point(754, 161);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(366, 21);
			this->comboBox4->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Teal;
			this->label9->Location = System::Drawing::Point(557, 26);
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
			this->comboBox3->Location = System::Drawing::Point(754, 54);
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
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::Teal;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(754, 265);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(366, 21);
			this->comboBox2->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Teal;
			this->label7->Location = System::Drawing::Point(557, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(199, 66);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Military status :";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Teal;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(147, 482);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(370, 21);
			this->comboBox1->TabIndex = 12;
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
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1150, 95);
			this->panel5->TabIndex = 0;
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
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Window;
			this->panel6->Controls->Add(this->label1);
			this->panel6->Location = System::Drawing::Point(3, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(554, 100);
			this->panel6->TabIndex = 0;
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
			this->shapeContainer1->Size = System::Drawing::Size(1150, 726);
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
			this->groupBox1->Location = System::Drawing::Point(212, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1167, 735);
			this->groupBox1->TabIndex = 4;
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
			this->bunifuFlatButton1->Location = System::Drawing::Point(238, 672);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::Teal;
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::DarkSeaGreen;
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(156, 48);
			this->bunifuFlatButton1->TabIndex = 7;
			this->bunifuFlatButton1->Text = L"Save";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->bunifuDatepicker2);
			this->groupBox6->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox6->Location = System::Drawing::Point(738, 67);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(372, 133);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Created Date";
			// 
			// bunifuDatepicker2
			// 
			this->bunifuDatepicker2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->bunifuDatepicker2->BackColor = System::Drawing::Color::Teal;
			this->bunifuDatepicker2->BorderRadius = 0;
			this->bunifuDatepicker2->ForeColor = System::Drawing::Color::White;
			this->bunifuDatepicker2->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->bunifuDatepicker2->FormatCustom = nullptr;
			this->bunifuDatepicker2->Location = System::Drawing::Point(11, 48);
			this->bunifuDatepicker2->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->bunifuDatepicker2->Name = L"bunifuDatepicker2";
			this->bunifuDatepicker2->Size = System::Drawing::Size(346, 40);
			this->bunifuDatepicker2->TabIndex = 5;
			this->bunifuDatepicker2->Value = System::DateTime(2018, 4, 10, 1, 19, 12, 420);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->bunifuImageButton1);
			this->groupBox5->Controls->Add(this->dateTimePicker1);
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Controls->Add(this->dataGridView1);
			this->groupBox5->Controls->Add(this->textBox4);
			this->groupBox5->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox5->Location = System::Drawing::Point(692, 247);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(418, 479);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Ministry Departments";
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
			this->dataGridView1->Location = System::Drawing::Point(6, 269);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(406, 204);
			this->dataGridView1->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox4->Location = System::Drawing::Point(6, 57);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(406, 38);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"Department Name";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->textBox3->Text = L"ex:3.6 km · Almaza";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox2->Location = System::Drawing::Point(6, 67);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(342, 133);
			this->groupBox2->TabIndex = 0;
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
			// editmaninster
			// 
			this->editmaninster->Controls->Add(this->groupBox7);
			this->editmaninster->Controls->Add(this->groupBox8);
			this->editmaninster->Controls->Add(this->groupBox9);
			this->editmaninster->Controls->Add(this->groupBox10);
			this->editmaninster->Controls->Add(this->groupBox11);
			this->editmaninster->Controls->Add(this->bunifuFlatButton2);
			this->editmaninster->Controls->Add(this->bunifuFlatButton3);
			this->editmaninster->Controls->Add(this->bunifuCustomDataGrid1);
			this->editmaninster->Location = System::Drawing::Point(212, 3);
			this->editmaninster->Name = L"editmaninster";
			this->editmaninster->Size = System::Drawing::Size(1132, 748);
			this->editmaninster->TabIndex = 8;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->bunifuImageButton2);
			this->groupBox7->Controls->Add(this->dateTimePicker2);
			this->groupBox7->Controls->Add(this->textBox6);
			this->groupBox7->Controls->Add(this->dataGridView2);
			this->groupBox7->Controls->Add(this->textBox7);
			this->groupBox7->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox7->Location = System::Drawing::Point(711, 270);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(418, 462);
			this->groupBox7->TabIndex = 16;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Ministry Departments";
			// 
			// bunifuImageButton2
			// 
			this->bunifuImageButton2->BackColor = System::Drawing::Color::Teal;
			this->bunifuImageButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuImageButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuImageButton2.Image")));
			this->bunifuImageButton2->ImageActive = nullptr;
			this->bunifuImageButton2->Location = System::Drawing::Point(66, 217);
			this->bunifuImageButton2->Name = L"bunifuImageButton2";
			this->bunifuImageButton2->Size = System::Drawing::Size(64, 29);
			this->bunifuImageButton2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButton2->TabIndex = 8;
			this->bunifuImageButton2->TabStop = false;
			this->bunifuImageButton2->Zoom = 10;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarForeColor = System::Drawing::Color::DarkSeaGreen;
			this->dateTimePicker2->CalendarMonthBackground = System::Drawing::Color::DarkSeaGreen;
			this->dateTimePicker2->CalendarTitleBackColor = System::Drawing::Color::DarkSeaGreen;
			this->dateTimePicker2->CalendarTitleForeColor = System::Drawing::Color::DarkSeaGreen;
			this->dateTimePicker2->CalendarTrailingForeColor = System::Drawing::Color::DarkSeaGreen;
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Location = System::Drawing::Point(6, 180);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(406, 26);
			this->dateTimePicker2->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox6->Location = System::Drawing::Point(6, 120);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(406, 49);
			this->textBox6->TabIndex = 3;
			this->textBox6->Text = L"Department Descrtiption ";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(6, 252);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(406, 204);
			this->dataGridView2->TabIndex = 1;
			// 
			// textBox7
			// 
			this->textBox7->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox7->Location = System::Drawing::Point(6, 57);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(406, 20);
			this->textBox7->TabIndex = 0;
			this->textBox7->Text = L"Department Name";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->bunifuDatepicker3);
			this->groupBox8->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox8->Location = System::Drawing::Point(363, 615);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(342, 104);
			this->groupBox8->TabIndex = 15;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Created Date";
			// 
			// bunifuDatepicker3
			// 
			this->bunifuDatepicker3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->bunifuDatepicker3->BackColor = System::Drawing::Color::Teal;
			this->bunifuDatepicker3->BorderRadius = 0;
			this->bunifuDatepicker3->ForeColor = System::Drawing::Color::White;
			this->bunifuDatepicker3->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->bunifuDatepicker3->FormatCustom = nullptr;
			this->bunifuDatepicker3->Location = System::Drawing::Point(11, 48);
			this->bunifuDatepicker3->Margin = System::Windows::Forms::Padding(8, 7, 8, 7);
			this->bunifuDatepicker3->Name = L"bunifuDatepicker3";
			this->bunifuDatepicker3->Size = System::Drawing::Size(316, 21);
			this->bunifuDatepicker3->TabIndex = 5;
			this->bunifuDatepicker3->Value = System::DateTime(2018, 4, 10, 1, 19, 12, 420);
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->textBox8);
			this->groupBox9->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox9->Location = System::Drawing::Point(12, 340);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(334, 398);
			this->groupBox9->TabIndex = 14;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Ministry Descrtption";
			// 
			// textBox8
			// 
			this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox8->Location = System::Drawing::Point(3, 16);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(328, 379);
			this->textBox8->TabIndex = 0;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->textBox9);
			this->groupBox10->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox10->Location = System::Drawing::Point(363, 473);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(342, 133);
			this->groupBox10->TabIndex = 13;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Ministry Location";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox9->Location = System::Drawing::Point(6, 57);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(330, 31);
			this->textBox9->TabIndex = 0;
			this->textBox9->Text = L"ex:3.6 km · Almaza";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->textBox10);
			this->groupBox11->ForeColor = System::Drawing::Color::DarkSeaGreen;
			this->groupBox11->Location = System::Drawing::Point(363, 324);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(342, 133);
			this->groupBox11->TabIndex = 12;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Ministry Name";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox10->Location = System::Drawing::Point(6, 57);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(330, 31);
			this->textBox10->TabIndex = 0;
			this->textBox10->Text = L"ex:Interior";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->bunifuFlatButton2->Location = System::Drawing::Point(202, 273);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::Teal;
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::Red;
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(138, 48);
			this->bunifuFlatButton2->TabIndex = 11;
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
			this->bunifuFlatButton3->Location = System::Drawing::Point(22, 273);
			this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
			this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::Teal;
			this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton3->selected = false;
			this->bunifuFlatButton3->Size = System::Drawing::Size(138, 48);
			this->bunifuFlatButton3->TabIndex = 10;
			this->bunifuFlatButton3->Text = L"update";
			this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton3->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, 
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
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
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
			this->bunifuCustomDataGrid1->Location = System::Drawing::Point(17, 7);
			this->bunifuCustomDataGrid1->Name = L"bunifuCustomDataGrid1";
			this->bunifuCustomDataGrid1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->bunifuCustomDataGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->bunifuCustomDataGrid1->Size = System::Drawing::Size(1106, 256);
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
			// editemp
			// 
			this->editemp->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"editemp.BackgroundImage")));
			this->editemp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->editemp->Controls->Add(this->pictureBox2);
			this->editemp->Controls->Add(this->textBox11);
			this->editemp->Controls->Add(this->panel7);
			this->editemp->Location = System::Drawing::Point(210, 0);
			this->editemp->Name = L"editemp";
			this->editemp->Size = System::Drawing::Size(1125, 751);
			this->editemp->TabIndex = 17;
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
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox11->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(4) {L"254564648", L"254654654", 
				L"265656564", L"248484842"});
			this->textBox11->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->textBox11->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox11->BackColor = System::Drawing::Color::Teal;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(18, 13);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(1088, 31);
			this->textBox11->TabIndex = 9;
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->bunifuFlatButton4);
			this->panel7->Controls->Add(this->bunifuFlatButton5);
			this->panel7->Controls->Add(this->bunifuDatepicker4);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->comboBox6);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->comboBox7);
			this->panel7->Controls->Add(this->comboBox8);
			this->panel7->Controls->Add(this->label15);
			this->panel7->Controls->Add(this->comboBox9);
			this->panel7->Controls->Add(this->label16);
			this->panel7->Controls->Add(this->label17);
			this->panel7->Controls->Add(this->bunifuMaterialTextbox4);
			this->panel7->Controls->Add(this->label18);
			this->panel7->Controls->Add(this->bunifuMaterialTextbox5);
			this->panel7->Controls->Add(this->label19);
			this->panel7->Controls->Add(this->bunifuMaterialTextbox6);
			this->panel7->Controls->Add(this->pictureBox3);
			this->panel7->Location = System::Drawing::Point(3, 98);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1119, 624);
			this->panel7->TabIndex = 8;
			// 
			// bunifuFlatButton4
			// 
			this->bunifuFlatButton4->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton4->BackColor = System::Drawing::Color::Teal;
			this->bunifuFlatButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton4->BorderRadius = 0;
			this->bunifuFlatButton4->ButtonText = L"Delete";
			this->bunifuFlatButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton4->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton4->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton4->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton4.Iconimage")));
			this->bunifuFlatButton4->Iconimage_right = nullptr;
			this->bunifuFlatButton4->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton4->Iconimage_Selected = nullptr;
			this->bunifuFlatButton4->IconMarginLeft = 0;
			this->bunifuFlatButton4->IconMarginRight = 0;
			this->bunifuFlatButton4->IconRightVisible = true;
			this->bunifuFlatButton4->IconRightZoom = 0;
			this->bunifuFlatButton4->IconVisible = true;
			this->bunifuFlatButton4->IconZoom = 60;
			this->bunifuFlatButton4->IsTab = false;
			this->bunifuFlatButton4->Location = System::Drawing::Point(564, 558);
			this->bunifuFlatButton4->Name = L"bunifuFlatButton4";
			this->bunifuFlatButton4->Normalcolor = System::Drawing::Color::Teal;
			this->bunifuFlatButton4->OnHovercolor = System::Drawing::Color::Red;
			this->bunifuFlatButton4->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton4->selected = false;
			this->bunifuFlatButton4->Size = System::Drawing::Size(138, 48);
			this->bunifuFlatButton4->TabIndex = 38;
			this->bunifuFlatButton4->Text = L"Delete";
			this->bunifuFlatButton4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton4->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton4->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// bunifuFlatButton5
			// 
			this->bunifuFlatButton5->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->bunifuFlatButton5->BackColor = System::Drawing::Color::Teal;
			this->bunifuFlatButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton5->BorderRadius = 0;
			this->bunifuFlatButton5->ButtonText = L"update";
			this->bunifuFlatButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton5->DisabledColor = System::Drawing::Color::Gray;
			this->bunifuFlatButton5->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton5.Iconimage")));
			this->bunifuFlatButton5->Iconimage_right = nullptr;
			this->bunifuFlatButton5->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton5->Iconimage_Selected = nullptr;
			this->bunifuFlatButton5->IconMarginLeft = 0;
			this->bunifuFlatButton5->IconMarginRight = 0;
			this->bunifuFlatButton5->IconRightVisible = true;
			this->bunifuFlatButton5->IconRightZoom = 0;
			this->bunifuFlatButton5->IconVisible = true;
			this->bunifuFlatButton5->IconZoom = 60;
			this->bunifuFlatButton5->IsTab = false;
			this->bunifuFlatButton5->Location = System::Drawing::Point(384, 558);
			this->bunifuFlatButton5->Name = L"bunifuFlatButton5";
			this->bunifuFlatButton5->Normalcolor = System::Drawing::Color::Teal;
			this->bunifuFlatButton5->OnHovercolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bunifuFlatButton5->OnHoverTextColor = System::Drawing::Color::White;
			this->bunifuFlatButton5->selected = false;
			this->bunifuFlatButton5->Size = System::Drawing::Size(138, 48);
			this->bunifuFlatButton5->TabIndex = 37;
			this->bunifuFlatButton5->Text = L"update";
			this->bunifuFlatButton5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton5->Textcolor = System::Drawing::Color::White;
			this->bunifuFlatButton5->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			// 
			// bunifuDatepicker4
			// 
			this->bunifuDatepicker4->BackColor = System::Drawing::Color::Teal;
			this->bunifuDatepicker4->BorderRadius = 0;
			this->bunifuDatepicker4->ForeColor = System::Drawing::Color::White;
			this->bunifuDatepicker4->Format = System::Windows::Forms::DateTimePickerFormat::Long;
			this->bunifuDatepicker4->FormatCustom = nullptr;
			this->bunifuDatepicker4->Location = System::Drawing::Point(152, 416);
			this->bunifuDatepicker4->Name = L"bunifuDatepicker4";
			this->bunifuDatepicker4->Size = System::Drawing::Size(370, 21);
			this->bunifuDatepicker4->TabIndex = 36;
			this->bunifuDatepicker4->Value = System::DateTime(2018, 4, 10, 3, 39, 24, 547);
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Teal;
			this->label12->Location = System::Drawing::Point(8, 388);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(116, 66);
			this->label12->TabIndex = 35;
			this->label12->Text = L"Age :";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Teal;
			this->label13->Location = System::Drawing::Point(553, 477);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(172, 66);
			this->label13->TabIndex = 34;
			this->label13->Text = L"Department :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox6
			// 
			this->comboBox6->BackColor = System::Drawing::Color::Teal;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(731, 505);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(370, 21);
			this->comboBox6->TabIndex = 33;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Teal;
			this->label14->Location = System::Drawing::Point(8, 477);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(132, 66);
			this->label14->TabIndex = 32;
			this->label14->Text = L"Ministry :";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox7
			// 
			this->comboBox7->BackColor = System::Drawing::Color::Teal;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(146, 505);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(376, 21);
			this->comboBox7->TabIndex = 31;
			// 
			// comboBox8
			// 
			this->comboBox8->BackColor = System::Drawing::Color::Teal;
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(731, 416);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(370, 21);
			this->comboBox8->TabIndex = 30;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Teal;
			this->label15->Location = System::Drawing::Point(582, 388);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(133, 66);
			this->label15->TabIndex = 29;
			this->label15->Text = L"Marital status:";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBox9
			// 
			this->comboBox9->BackColor = System::Drawing::Color::Teal;
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(731, 248);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(370, 21);
			this->comboBox9->TabIndex = 26;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Teal;
			this->label16->Location = System::Drawing::Point(572, 220);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(122, 66);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Gender :";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Teal;
			this->label17->Location = System::Drawing::Point(572, 303);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(133, 66);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Password:";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->bunifuMaterialTextbox4->Location = System::Drawing::Point(731, 323);
			this->bunifuMaterialTextbox4->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox4->Name = L"bunifuMaterialTextbox4";
			this->bunifuMaterialTextbox4->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox4->TabIndex = 8;
			this->bunifuMaterialTextbox4->Text = L"bunifuMaterialTextbox4";
			this->bunifuMaterialTextbox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Teal;
			this->label18->Location = System::Drawing::Point(8, 281);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(125, 66);
			this->label18->TabIndex = 7;
			this->label18->Text = L"National ID:";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->bunifuMaterialTextbox5->Location = System::Drawing::Point(152, 303);
			this->bunifuMaterialTextbox5->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox5->Name = L"bunifuMaterialTextbox5";
			this->bunifuMaterialTextbox5->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox5->TabIndex = 6;
			this->bunifuMaterialTextbox5->Text = L"bunifuMaterialTextbox5";
			this->bunifuMaterialTextbox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Teal;
			this->label19->Location = System::Drawing::Point(12, 203);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(116, 66);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Name:";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// bunifuMaterialTextbox6
			// 
			this->bunifuMaterialTextbox6->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bunifuMaterialTextbox6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bunifuMaterialTextbox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->bunifuMaterialTextbox6->HintForeColor = System::Drawing::Color::Empty;
			this->bunifuMaterialTextbox6->HintText = L"";
			this->bunifuMaterialTextbox6->isPassword = false;
			this->bunifuMaterialTextbox6->LineFocusedColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox6->LineIdleColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox6->LineMouseHoverColor = System::Drawing::Color::Teal;
			this->bunifuMaterialTextbox6->LineThickness = 3;
			this->bunifuMaterialTextbox6->Location = System::Drawing::Point(152, 215);
			this->bunifuMaterialTextbox6->Margin = System::Windows::Forms::Padding(4);
			this->bunifuMaterialTextbox6->Name = L"bunifuMaterialTextbox6";
			this->bunifuMaterialTextbox6->Size = System::Drawing::Size(370, 44);
			this->bunifuMaterialTextbox6->TabIndex = 4;
			this->bunifuMaterialTextbox6->Text = L"bunifuMaterialTextbox6";
			this->bunifuMaterialTextbox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Teal;
			this->pictureBox3->Location = System::Drawing::Point(467, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(227, 174);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// AdminProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1353, 763);
			this->Controls->Add(this->editemp);
			this->Controls->Add(this->editmaninster);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->addemp);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminProfile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminProfile";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AdminProfile::AdminProfile_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->addemp->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->editmaninster->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuImageButton2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			this->groupBox8->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bunifuCustomDataGrid1))->EndInit();
			this->editemp->ResumeLayout(false);
			this->editemp->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				// panel4->Visible=true; 
				// panel2->Visible=false; 
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			// panel2->Visible=true; 
			// panel4->Visible=false ; 
		 }
private: System::Void bunifuFlatButton2_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Visible=true; 
			 addemp->Visible=false; 
			 editmaninster->Visible=false; 
			 editemp->Visible=false;  
		 }
private: System::Void bunifuFlatButton4_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Visible=false; 
			 addemp->Visible=true;
			 editmaninster->Visible=false;
			 editemp->Visible=false; 
		 }
private: System::Void addministry_Enter(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void addministry_Leave(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void editministry_Enter(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void editministry_Click(System::Object^  sender, System::EventArgs^  e) {
			groupBox1->Visible=false; 
			addemp->Visible=false;		
			editmaninster->Visible=true; 
			editemp->Visible=false;
		 }
private: System::Void editministry_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 
		 }
private: System::Void addministry_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 
		 }
private: System::Void addministry_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			  
		 }
private: System::Void addemployee_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void AdminProfile_Load(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Visible=true;  
			addemp->Visible=false;		
			editmaninster->Visible=false;
			editemp->Visible=false; 

		 }
private: System::Void editemployee_Click(System::Object^  sender, System::EventArgs^  e) {
			 groupBox1->Visible=false;  
			addemp->Visible=false;		
			editmaninster->Visible=false; 
			editemp->Visible=true; 

		 }
};
}
