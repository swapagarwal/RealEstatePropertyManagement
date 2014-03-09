#pragma once
#include "Database.h"
#include <math.h>
#include "view_details.h"
namespace RealEstate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for profile
	/// </summary>
	public ref class profile : public System::Windows::Forms::Form
	{
	public:
		array<String^>^ details;
	private: System::Windows::Forms::Button^  back_button;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	public: 
		Form^ previous;
		profile(array<String^>^ d,Form^ f)
		{
			InitializeComponent();
			details=d;
			previous=f;
			//
			//TODO: Add the constructor code here
			//
		}
		array<Int64>^ ids;
		int pageno,totalpages;
		array<String^>^ props;
		array<String^>^ prop_details;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^  sellproperty;
	protected: 





























	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  view_detail;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::TabPage^  mydetails;

	private: System::Windows::Forms::TextBox^  new_pass;
	private: System::Windows::Forms::Button^  change_pass;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::Label^  label4;












	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  change_button;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  username;
	private: System::Windows::Forms::TextBox^  city;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  save;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  edit;
	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::TextBox^  contact;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  con_pass;
	private: System::Windows::Forms::Label^  label10;













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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(profile::typeid));
			this->sellproperty = (gcnew System::Windows::Forms::TabPage());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->view_detail = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->mydetails = (gcnew System::Windows::Forms::TabPage());
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->change_button = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->city = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->new_pass = (gcnew System::Windows::Forms::TextBox());
			this->change_pass = (gcnew System::Windows::Forms::Button());
			this->con_pass = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->sellproperty->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->mydetails->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// sellproperty
			// 
			this->sellproperty->Controls->Add(this->panel2);
			this->sellproperty->Location = System::Drawing::Point(4, 23);
			this->sellproperty->Name = L"sellproperty";
			this->sellproperty->Padding = System::Windows::Forms::Padding(3);
			this->sellproperty->Size = System::Drawing::Size(947, 661);
			this->sellproperty->TabIndex = 1;
			this->sellproperty->Text = L"My properties";
			this->sellproperty->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->AutoScrollMargin = System::Drawing::Size(1, 130);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(941, 655);
			this->panel2->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(433, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Go to Page";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &profile::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(295, 17);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 22);
			this->comboBox1->TabIndex = 17;
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel7->AutoScroll = true;
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label46);
			this->panel7->Controls->Add(this->button9);
			this->panel7->Controls->Add(this->label36);
			this->panel7->Controls->Add(this->label37);
			this->panel7->Controls->Add(this->label38);
			this->panel7->Controls->Add(this->label39);
			this->panel7->Controls->Add(this->label40);
			this->panel7->Controls->Add(this->label41);
			this->panel7->Controls->Add(this->button10);
			this->panel7->Controls->Add(this->pictureBox5);
			this->panel7->Location = System::Drawing::Point(97, 761);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(603, 143);
			this->panel7->TabIndex = 16;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(402, 59);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(55, 16);
			this->label46->TabIndex = 13;
			this->label46->Text = L"sell/rent";
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(444, 72);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(136, 29);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Delete";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &profile::button9_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(402, 25);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(88, 16);
			this->label36->TabIndex = 7;
			this->label36->Text = L"Possession:  ";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(402, 97);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(87, 16);
			this->label37->TabIndex = 6;
			this->label37->Text = L"INR total cost";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(299, 97);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(62, 16);
			this->label38->TabIndex = 5;
			this->label38->Text = L"INR /sq ft";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(209, 97);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(38, 16);
			this->label39->TabIndex = 4;
			this->label39->Text = L"BHK:";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(209, 59);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(119, 16);
			this->label40->TabIndex = 3;
			this->label40->Text = L"Builder/Residency";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(209, 21);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(62, 16);
			this->label41->TabIndex = 2;
			this->label41->Text = L"Address:";
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(444, 25);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(136, 29);
			this->button10->TabIndex = 1;
			this->button10->Text = L"View Details";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &profile::button10_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Location = System::Drawing::Point(12, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(162, 115);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel6->AutoScroll = true;
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label45);
			this->panel6->Controls->Add(this->button7);
			this->panel6->Controls->Add(this->label30);
			this->panel6->Controls->Add(this->label31);
			this->panel6->Controls->Add(this->label32);
			this->panel6->Controls->Add(this->label33);
			this->panel6->Controls->Add(this->label34);
			this->panel6->Controls->Add(this->label35);
			this->panel6->Controls->Add(this->button8);
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Location = System::Drawing::Point(97, 584);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(603, 143);
			this->panel6->TabIndex = 15;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(402, 59);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(55, 16);
			this->label45->TabIndex = 12;
			this->label45->Text = L"sell/rent";
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(444, 72);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 29);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Delete";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &profile::button7_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(402, 25);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(88, 16);
			this->label30->TabIndex = 7;
			this->label30->Text = L"Possession:  ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(402, 97);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(87, 16);
			this->label31->TabIndex = 6;
			this->label31->Text = L"INR total cost";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(299, 97);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(62, 16);
			this->label32->TabIndex = 5;
			this->label32->Text = L"INR /sq ft";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(209, 97);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(38, 16);
			this->label33->TabIndex = 4;
			this->label33->Text = L"BHK:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(209, 59);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(119, 16);
			this->label34->TabIndex = 3;
			this->label34->Text = L"Builder/Residency";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(209, 21);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(62, 16);
			this->label35->TabIndex = 2;
			this->label35->Text = L"Address:";
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(444, 25);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(136, 29);
			this->button8->TabIndex = 1;
			this->button8->Text = L"View Details";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &profile::button8_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Location = System::Drawing::Point(12, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(162, 115);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->AutoScroll = true;
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label44);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Controls->Add(this->label24);
			this->panel5->Controls->Add(this->label25);
			this->panel5->Controls->Add(this->label26);
			this->panel5->Controls->Add(this->label27);
			this->panel5->Controls->Add(this->label28);
			this->panel5->Controls->Add(this->label29);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->pictureBox3);
			this->panel5->Location = System::Drawing::Point(97, 403);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(603, 143);
			this->panel5->TabIndex = 15;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(402, 59);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(55, 16);
			this->label44->TabIndex = 11;
			this->label44->Text = L"sell/rent";
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(444, 72);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 29);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &profile::button5_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(402, 25);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(88, 16);
			this->label24->TabIndex = 7;
			this->label24->Text = L"Possession:  ";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(402, 97);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(87, 16);
			this->label25->TabIndex = 6;
			this->label25->Text = L"INR total cost";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(299, 97);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(62, 16);
			this->label26->TabIndex = 5;
			this->label26->Text = L"INR /sq ft";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(209, 97);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(38, 16);
			this->label27->TabIndex = 4;
			this->label27->Text = L"BHK:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(209, 59);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(119, 16);
			this->label28->TabIndex = 3;
			this->label28->Text = L"Builder/Residency";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(209, 21);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(62, 16);
			this->label29->TabIndex = 2;
			this->label29->Text = L"Address:";
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(444, 25);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 29);
			this->button6->TabIndex = 1;
			this->button6->Text = L"View Details";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &profile::button6_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(12, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(162, 115);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->AutoScroll = true;
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label43);
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Controls->Add(this->label22);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Location = System::Drawing::Point(97, 222);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(603, 143);
			this->panel4->TabIndex = 15;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(402, 59);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(55, 16);
			this->label43->TabIndex = 10;
			this->label43->Text = L"sell/rent";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(444, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 29);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &profile::button3_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(402, 25);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(88, 16);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Possession:  ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(402, 97);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(87, 16);
			this->label19->TabIndex = 6;
			this->label19->Text = L"INR total cost";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(299, 97);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(62, 16);
			this->label20->TabIndex = 5;
			this->label20->Text = L"INR /sq ft";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(209, 97);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(38, 16);
			this->label21->TabIndex = 4;
			this->label21->Text = L"BHK:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(209, 59);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(119, 16);
			this->label22->TabIndex = 3;
			this->label22->Text = L"Builder/Residency";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(209, 21);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(62, 16);
			this->label23->TabIndex = 2;
			this->label23->Text = L"Address:";
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(444, 25);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 29);
			this->button4->TabIndex = 1;
			this->button4->Text = L"View Details";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &profile::button4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(162, 115);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->AutoScroll = true;
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label42);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->view_detail);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(97, 56);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(603, 143);
			this->panel3->TabIndex = 14;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &profile::panel3_Paint);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(402, 59);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(55, 16);
			this->label42->TabIndex = 9;
			this->label42->Text = L"sell/rent";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(444, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 29);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &profile::button2_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(402, 25);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 16);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Possession:  ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(402, 97);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(87, 16);
			this->label13->TabIndex = 6;
			this->label13->Text = L"INR total cost";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(299, 97);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 16);
			this->label14->TabIndex = 5;
			this->label14->Text = L"INR /sq ft";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(209, 97);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(38, 16);
			this->label15->TabIndex = 4;
			this->label15->Text = L"BHK:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(209, 59);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(119, 16);
			this->label16->TabIndex = 3;
			this->label16->Text = L"Builder/Residency";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(209, 21);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(62, 16);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Address:";
			// 
			// view_detail
			// 
			this->view_detail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->view_detail->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->view_detail->FlatAppearance->BorderSize = 0;
			this->view_detail->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->view_detail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->view_detail->Location = System::Drawing::Point(444, 25);
			this->view_detail->Name = L"view_detail";
			this->view_detail->Size = System::Drawing::Size(136, 29);
			this->view_detail->TabIndex = 1;
			this->view_detail->Text = L"View Details";
			this->view_detail->UseVisualStyleBackColor = true;
			this->view_detail->Click += gcnew System::EventHandler(this, &profile::view_detail_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(162, 115);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->mydetails);
			this->tabControl1->Controls->Add(this->sellproperty);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(955, 688);
			this->tabControl1->TabIndex = 0;
			// 
			// mydetails
			// 
			this->mydetails->Controls->Add(this->back_button);
			this->mydetails->Controls->Add(this->panel1);
			this->mydetails->Controls->Add(this->pass);
			this->mydetails->Controls->Add(this->label3);
			this->mydetails->Controls->Add(this->label10);
			this->mydetails->Controls->Add(this->new_pass);
			this->mydetails->Controls->Add(this->change_pass);
			this->mydetails->Controls->Add(this->con_pass);
			this->mydetails->Controls->Add(this->label4);
			this->mydetails->Controls->Add(this->label11);
			this->mydetails->Location = System::Drawing::Point(4, 23);
			this->mydetails->Name = L"mydetails";
			this->mydetails->Padding = System::Windows::Forms::Padding(3);
			this->mydetails->Size = System::Drawing::Size(947, 661);
			this->mydetails->TabIndex = 0;
			this->mydetails->Text = L"My Details";
			this->mydetails->UseVisualStyleBackColor = true;
			this->mydetails->Click += gcnew System::EventHandler(this, &profile::mydetails_Click);
			// 
			// back_button
			// 
			this->back_button->Location = System::Drawing::Point(37, 34);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(75, 23);
			this->back_button->TabIndex = 74;
			this->back_button->Text = L"Back";
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Visible = false;
			this->back_button->Click += gcnew System::EventHandler(this, &profile::back_button_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->change_button);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->username);
			this->panel1->Controls->Add(this->city);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->save);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->edit);
			this->panel1->Controls->Add(this->name);
			this->panel1->Controls->Add(this->email);
			this->panel1->Controls->Add(this->contact);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(217, 62);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(552, 555);
			this->panel1->TabIndex = 73;
			// 
			// change_button
			// 
			this->change_button->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->change_button->Location = System::Drawing::Point(348, 464);
			this->change_button->Name = L"change_button";
			this->change_button->Size = System::Drawing::Size(178, 35);
			this->change_button->TabIndex = 73;
			this->change_button->Text = L"Change Password";
			this->change_button->UseVisualStyleBackColor = true;
			this->change_button->Click += gcnew System::EventHandler(this, &profile::change_button_Click);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(25, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 36);
			this->label8->TabIndex = 70;
			this->label8->Text = L"Details";
			// 
			// username
			// 
			this->username->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(167, 111);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(203, 26);
			this->username->TabIndex = 71;
			this->username->Text = L"username";
			this->username->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// city
			// 
			this->city->BackColor = System::Drawing::SystemColors::Window;
			this->city->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->city->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->city->Location = System::Drawing::Point(167, 347);
			this->city->Name = L"city";
			this->city->ReadOnly = true;
			this->city->Size = System::Drawing::Size(200, 19);
			this->city->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(78, 350);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 18);
			this->label6->TabIndex = 68;
			this->label6->Text = L"City :";
			// 
			// save
			// 
			this->save->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->save->Location = System::Drawing::Point(167, 464);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(125, 35);
			this->save->TabIndex = 5;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = true;
			this->save->Visible = false;
			this->save->Click += gcnew System::EventHandler(this, &profile::save_Click_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(63, 175);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 18);
			this->label7->TabIndex = 69;
			this->label7->Text = L"Name :";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(27, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 18);
			this->label1->TabIndex = 60;
			this->label1->Text = L"User Name :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(1, 292);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 18);
			this->label5->TabIndex = 67;
			this->label5->Text = L"Phone Number :";
			// 
			// edit
			// 
			this->edit->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->edit->Location = System::Drawing::Point(4, 464);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(125, 35);
			this->edit->TabIndex = 72;
			this->edit->Text = L"Edit Details";
			this->edit->UseVisualStyleBackColor = true;
			this->edit->Click += gcnew System::EventHandler(this, &profile::edit_Click_1);
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::SystemColors::Window;
			this->name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(167, 172);
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Size = System::Drawing::Size(200, 19);
			this->name->TabIndex = 1;
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::SystemColors::Window;
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->email->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(167, 232);
			this->email->Name = L"email";
			this->email->ReadOnly = true;
			this->email->Size = System::Drawing::Size(200, 19);
			this->email->TabIndex = 2;
			// 
			// contact
			// 
			this->contact->BackColor = System::Drawing::SystemColors::Window;
			this->contact->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->contact->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->contact->Location = System::Drawing::Point(167, 289);
			this->contact->Name = L"contact";
			this->contact->ReadOnly = true;
			this->contact->Size = System::Drawing::Size(200, 19);
			this->contact->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(65, 234);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 18);
			this->label2->TabIndex = 66;
			this->label2->Text = L"Email :";
			// 
			// pass
			// 
			this->pass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->pass->BackColor = System::Drawing::SystemColors::Window;
			this->pass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pass->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pass->Location = System::Drawing::Point(489, 178);
			this->pass->Margin = System::Windows::Forms::Padding(0);
			this->pass->MaximumSize = System::Drawing::Size(200, 27);
			this->pass->MinimumSize = System::Drawing::Size(200, 27);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(200, 26);
			this->pass->TabIndex = 25;
			this->pass->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(311, 180);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->MaximumSize = System::Drawing::Size(200, 27);
			this->label3->MinimumSize = System::Drawing::Size(200, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 27);
			this->label3->TabIndex = 58;
			this->label3->Text = L"Current Password :";
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(322, 83);
			this->label10->Margin = System::Windows::Forms::Padding(0);
			this->label10->MaximumSize = System::Drawing::Size(209, 27);
			this->label10->MinimumSize = System::Drawing::Size(209, 27);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(209, 27);
			this->label10->TabIndex = 59;
			this->label10->Text = L"Change Password";
			// 
			// new_pass
			// 
			this->new_pass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->new_pass->BackColor = System::Drawing::SystemColors::Window;
			this->new_pass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->new_pass->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->new_pass->Location = System::Drawing::Point(489, 237);
			this->new_pass->Margin = System::Windows::Forms::Padding(0);
			this->new_pass->MaximumSize = System::Drawing::Size(200, 27);
			this->new_pass->MinimumSize = System::Drawing::Size(200, 27);
			this->new_pass->Name = L"new_pass";
			this->new_pass->Size = System::Drawing::Size(200, 26);
			this->new_pass->TabIndex = 26;
			this->new_pass->UseSystemPasswordChar = true;
			// 
			// change_pass
			// 
			this->change_pass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->change_pass->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->change_pass->Location = System::Drawing::Point(493, 388);
			this->change_pass->Margin = System::Windows::Forms::Padding(0);
			this->change_pass->MaximumSize = System::Drawing::Size(200, 27);
			this->change_pass->MinimumSize = System::Drawing::Size(200, 27);
			this->change_pass->Name = L"change_pass";
			this->change_pass->Size = System::Drawing::Size(200, 27);
			this->change_pass->TabIndex = 28;
			this->change_pass->Text = L"Change Password";
			this->change_pass->UseVisualStyleBackColor = true;
			this->change_pass->Click += gcnew System::EventHandler(this, &profile::change_pass_Click);
			// 
			// con_pass
			// 
			this->con_pass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->con_pass->BackColor = System::Drawing::SystemColors::Window;
			this->con_pass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->con_pass->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->con_pass->Location = System::Drawing::Point(489, 297);
			this->con_pass->Margin = System::Windows::Forms::Padding(0);
			this->con_pass->MaximumSize = System::Drawing::Size(200, 27);
			this->con_pass->MinimumSize = System::Drawing::Size(200, 27);
			this->con_pass->Name = L"con_pass";
			this->con_pass->Size = System::Drawing::Size(200, 26);
			this->con_pass->TabIndex = 27;
			this->con_pass->UseSystemPasswordChar = true;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(331, 239);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->MaximumSize = System::Drawing::Size(200, 27);
			this->label4->MinimumSize = System::Drawing::Size(200, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(200, 27);
			this->label4->TabIndex = 57;
			this->label4->Text = L"New Password :";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(311, 303);
			this->label11->Margin = System::Windows::Forms::Padding(0);
			this->label11->MaximumSize = System::Drawing::Size(200, 27);
			this->label11->MinimumSize = System::Drawing::Size(200, 27);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(200, 27);
			this->label11->TabIndex = 55;
			this->label11->Text = L"Confirm Password :";
			// 
			// profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 688);
			this->Controls->Add(this->tabControl1);
			this->Name = L"profile";
			this->Text = L"My Profile";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &profile::profile_FormClosed);
			this->Load += gcnew System::EventHandler(this, &profile::profile_Load);
			this->sellproperty->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->mydetails->ResumeLayout(false);
			this->mydetails->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		public : Database db;
	private: System::Void mydetails_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void profile_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 username->Text = details[1];
				 name->Text = details[3];
				 email->Text = details[4];
				 contact->Text = details[5];
				 city->Text = details[6];

				 props=gcnew array<String^> {
					 "","","","","","","","","","",details[1],"","","","","","",""
				 };
				 ids=gcnew array<Int64>(1000);
				 ids=db.search(props);
				 prop_details=gcnew array<String^>(18);
				 //MessageBox::Show(ids[0]);
				 totalpages=ceil(ids[0]/5.0);
				 pageno=1;
				 //MessageBox::Show(Convert::ToString(totalpages));
				 comboBox1->BeginUpdate();
				 for ( int i = 1; i <= totalpages; i++ )
				 {
					 comboBox1->Items->Add(i);
				 }
				 comboBox1->EndUpdate();
				 comboBox1->Text=Convert::ToString(pageno);
				 display(pageno);
			 }
	private: System::Void change_pass_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(pass->Text==details[2])
				 {
					 if(new_pass->Text==con_pass->Text)
					 {
						 MySqlConnection^ con=gcnew MySqlConnection("datasource=127.0.0.1;port=3306;user=root;password=toor");
						 MySqlCommand^ cmd = gcnew MySqlCommand("Update repm.users set password='"+con_pass->Text+"' where id='"+details[0]+"';",con);
						 cmd->Connection->Open();
						 cmd->ExecuteNonQuery();
						 cmd->Connection->Close();
						 back_button->Visible=false;
						 panel1->Visible=true;
						 details[2]=con_pass->Text;
						 con_pass->Text="";
						 pass->Text="";
						 new_pass->Text="";
					 }
					 else
					 {
						 MessageBox::Show("New password and confirm password doesn't match.");
						 con_pass->Text="";
						 pass->Text="";
						 new_pass->Text="";
					 }
				 }
				 else
				 {
					 MessageBox::Show("You Entered wrong current password");
					 con_pass->Text="";
					 pass->Text="";
					 new_pass->Text="";
				 }
			 }
	private: System::Void change_button_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 panel1->Visible=false;
				 back_button->Visible=true;
			 }
	private: System::Void edit_Click_1(System::Object^  sender, System::EventArgs^  e) 
			 {
				 name->BorderStyle=System::Windows::Forms::BorderStyle::FixedSingle;
				 email->BorderStyle=System::Windows::Forms::BorderStyle::FixedSingle;
				 contact->BorderStyle=System::Windows::Forms::BorderStyle::FixedSingle;
				 city->BorderStyle=System::Windows::Forms::BorderStyle::FixedSingle;
				 name->ReadOnly=false;
				 email->ReadOnly=false;
				 contact->ReadOnly=false;
				 city->ReadOnly=false;
				 save->Visible=true;
			 }
	private: System::Void save_Click_1(System::Object^  sender, System::EventArgs^  e) 
			 {
				 array<String^>^ p={name->Text,email->Text,contact->Text,city->Text,details[0]};
				 db.update_property_details(p);
				 details[3]=name->Text;
				 details[4]=email->Text;
				 details[5]=contact->Text;
				 details[6]=city->Text;
				 save->Visible=false;
				 name->BorderStyle=System::Windows::Forms::BorderStyle::None;
				 email->BorderStyle=System::Windows::Forms::BorderStyle::None;
				 contact->BorderStyle=System::Windows::Forms::BorderStyle::None;
				 city->BorderStyle=System::Windows::Forms::BorderStyle::None;
				 name->ReadOnly=true;
				 email->ReadOnly=true;
				 contact->ReadOnly=true;
				 city->ReadOnly=true;
			 }
	private: System::Void profile_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
			 {
				 previous->Show();
				 this->Close();
			 }
	private: System::Void back_button_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 con_pass->Text="";
				 pass->Text="";
				 new_pass->Text="";
				 panel1->Visible=true;
				 back_button->Visible=false;
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 pageno=Convert::ToInt32(comboBox1->Text);
				 //MessageBox::Show(Convert::ToString(pageno));
				 display(pageno);
			 }
	private: System::Void display(int pageno) {
				 if(ids[1+5*(pageno-1)]!=-1){
					 //MessageBox::Show(ids[1]);
					 prop_details=db.get_property_details(ids[1+5*(pageno-1)]);
					 //MessageBox::Show(prop_details[10]);
					 label17->Text="Address: "+prop_details[1];
					 label15->Text=prop_details[10]+" BHK";
					 label14->Text="Area: "+prop_details[3];
					 label13->Text="Price: "+prop_details[4];
					 label12->Text="Seller: "+prop_details[17];
					 pictureBox1->ImageLocation=prop_details[6];
					 //MessageBox::Show(prop_details[6]);
					 panel3->Show();
				 }
				 else this->panel3->Hide();
				 if(ids[2+5*(pageno-1)]!=-1){
					 prop_details=db.get_property_details(ids[2+5*(pageno-1)]);
					 label23->Text="Address: "+prop_details[1];
					 label21->Text=prop_details[10]+" BHK";
					 label20->Text="Area: "+prop_details[3];
					 label19->Text="Price: "+prop_details[4];
					 label18->Text="Seller: "+prop_details[17];
					 pictureBox2->ImageLocation=prop_details[6];
					 panel4->Show();
				 }
				 else this->panel4->Hide();
				 if(ids[3+5*(pageno-1)]!=-1){
					 prop_details=db.get_property_details(ids[3+5*(pageno-1)]);
					 label29->Text="Address: "+prop_details[1];
					 label27->Text=prop_details[10]+" BHK";
					 label26->Text="Area: "+prop_details[3];
					 label25->Text="Price: "+prop_details[4];
					 label24->Text="Seller: "+prop_details[17];
					 pictureBox3->ImageLocation=prop_details[6];
					 panel5->Show();
				 }
				 else this->panel5->Hide();
				 if(ids[4+5*(pageno-1)]!=-1){
					 prop_details=db.get_property_details(ids[4+5*(pageno-1)]);
					 label35->Text="Address: "+prop_details[1];
					 label33->Text=prop_details[10]+" BHK";
					 label32->Text="Area: "+prop_details[3];
					 label31->Text="Price: "+prop_details[4];
					 label30->Text="Seller: "+prop_details[17];
					 pictureBox4->ImageLocation=prop_details[6];
					 panel6->Show();
				 }
				 else this->panel6->Hide();
				 if(ids[5+5*(pageno-1)]!=-1){
					 prop_details=db.get_property_details(ids[5+5*(pageno-1)]);
					 label41->Text="Address: "+prop_details[1];
					 label39->Text=prop_details[10]+" BHK";
					 label38->Text="Area: "+prop_details[3];
					 label37->Text="Price: "+prop_details[4];
					 label36->Text="Seller: "+prop_details[17];
					 pictureBox5->ImageLocation=prop_details[6];
					 panel7->Show();
				 }
				 else this->panel7->Hide();
			 }
private: System::Void view_detail_Click(System::Object^  sender, System::EventArgs^  e) {
			 prop_details=db.get_property_details(ids[1+5*(pageno-1)]);
			 view_details^ v;
			 v = gcnew view_details(prop_details);
			 v->Show();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 prop_details=db.get_property_details(ids[2+5*(pageno-1)]);
			 view_details^ v;
			 v = gcnew view_details(prop_details);
			 v->Show();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 prop_details=db.get_property_details(ids[3+5*(pageno-1)]);
			 view_details^ v;
			 v = gcnew view_details(prop_details);
			 v->Show();
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 prop_details=db.get_property_details(ids[4+5*(pageno-1)]);
			 view_details^ v;
			 v = gcnew view_details(prop_details);
			 v->Show();
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 prop_details=db.get_property_details(ids[5+5*(pageno-1)]);
			 view_details^ v;
			 v = gcnew view_details(prop_details);
			 v->Show();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 db.delete_by_id(ids[1+5*(pageno-1)]);

			 props=gcnew array<String^> {
				 "","","","","","","","","","",details[1],"","","","","","",""
			 };
			 ids=gcnew array<Int64>(1000);
			 ids=db.search(props);
			 prop_details=gcnew array<String^>(18);
			 //MessageBox::Show(ids[0]);
			 totalpages=ceil(ids[0]/5.0);
			 pageno=1;
			 //MessageBox::Show(Convert::ToString(totalpages));
			 comboBox1->BeginUpdate();
			 for ( int i = 1; i <= totalpages; i++ )
			 {
				 comboBox1->Items->Add(i);
			 }
			 comboBox1->EndUpdate();
			 comboBox1->Text=Convert::ToString(pageno);
			 display(pageno);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 db.delete_by_id(ids[2+5*(pageno-1)]);

			 props=gcnew array<String^> {
				 "","","","","","","","","","",details[1],"","","","","","",""
			 };
			 ids=gcnew array<Int64>(1000);
			 ids=db.search(props);
			 prop_details=gcnew array<String^>(18);
			 //MessageBox::Show(ids[0]);
			 totalpages=ceil(ids[0]/5.0);
			 pageno=1;
			 //MessageBox::Show(Convert::ToString(totalpages));
			 comboBox1->BeginUpdate();
			 for ( int i = 1; i <= totalpages; i++ )
			 {
				 comboBox1->Items->Add(i);
			 }
			 comboBox1->EndUpdate();
			 comboBox1->Text=Convert::ToString(pageno);
			 display(pageno);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 db.delete_by_id(ids[3+5*(pageno-1)]);

			 props=gcnew array<String^> {
				 "","","","","","","","","","",details[1],"","","","","","",""
			 };
			 ids=gcnew array<Int64>(1000);
			 ids=db.search(props);
			 prop_details=gcnew array<String^>(18);
			 //MessageBox::Show(ids[0]);
			 totalpages=ceil(ids[0]/5.0);
			 pageno=1;
			 //MessageBox::Show(Convert::ToString(totalpages));
			 comboBox1->BeginUpdate();
			 for ( int i = 1; i <= totalpages; i++ )
			 {
				 comboBox1->Items->Add(i);
			 }
			 comboBox1->EndUpdate();
			 comboBox1->Text=Convert::ToString(pageno);
			 display(pageno);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 db.delete_by_id(ids[4+5*(pageno-1)]);

			 props=gcnew array<String^> {
				 "","","","","","","","","","",details[1],"","","","","","",""
			 };
			 ids=gcnew array<Int64>(1000);
			 ids=db.search(props);
			 prop_details=gcnew array<String^>(18);
			 //MessageBox::Show(ids[0]);
			 totalpages=ceil(ids[0]/5.0);
			 pageno=1;
			 //MessageBox::Show(Convert::ToString(totalpages));
			 comboBox1->BeginUpdate();
			 for ( int i = 1; i <= totalpages; i++ )
			 {
				 comboBox1->Items->Add(i);
			 }
			 comboBox1->EndUpdate();
			 comboBox1->Text=Convert::ToString(pageno);
			 display(pageno);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 db.delete_by_id(ids[5+5*(pageno-1)]);

			 props=gcnew array<String^> {
				 "","","","","","","","","","",details[1],"","","","","","",""
			 };
			 ids=gcnew array<Int64>(1000);
			 ids=db.search(props);
			 prop_details=gcnew array<String^>(18);
			 //MessageBox::Show(ids[0]);
			 totalpages=ceil(ids[0]/5.0);
			 pageno=1;
			 //MessageBox::Show(Convert::ToString(totalpages));
			 comboBox1->BeginUpdate();
			 for ( int i = 1; i <= totalpages; i++ )
			 {
				 comboBox1->Items->Add(i);
			 }
			 comboBox1->EndUpdate();
			 comboBox1->Text=Convert::ToString(pageno);
			 display(pageno);
		 }
};
}
