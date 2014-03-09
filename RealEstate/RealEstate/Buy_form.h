#pragma once
#include "Database.h";
#include <math.h>
namespace RealEstate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Buy_form
	/// </summary>
	public ref class Buy_form : public System::Windows::Forms::Form
	{
	public:
		Form^ previous;
		Buy_form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Buy_form(Form^ f)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			previous=f;
		}
		array<Int64>^ ids;
		int pageno,totalpages;
		array<String^>^ props;

	public: 
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button21;
			 array<String^>^ prop_details;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Buy_form()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 









	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  contact;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  details;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::Panel^  panel13;



	private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Button^  button19;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Panel^  panel14;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Button^  button20;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Panel^  panel15;
private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::Label^  label73;








































































































































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Buy_form::typeid));
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->contact = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->details = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->panel5->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel12->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel13->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel5
			// 
			this->panel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel5->AutoScroll = true;
			this->panel5->AutoScrollMargin = System::Drawing::Size(1, 130);
			this->panel5->AutoScrollMinSize = System::Drawing::Size(1, 1);
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->panel11);
			this->panel5->Controls->Add(this->panel10);
			this->panel5->Controls->Add(this->panel9);
			this->panel5->Controls->Add(this->panel8);
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->panel4);
			this->panel5->Controls->Add(this->panel3);
			this->panel5->Controls->Add(this->panel2);
			this->panel5->Controls->Add(this->panel1);
			this->panel5->Location = System::Drawing::Point(186, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(770, 733);
			this->panel5->TabIndex = 11;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Buy_form::panel5_Paint);
			// 
			// panel11
			// 
			this->panel11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel11->AutoScroll = true;
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Controls->Add(this->button17);
			this->panel11->Controls->Add(this->label55);
			this->panel11->Controls->Add(this->label56);
			this->panel11->Controls->Add(this->label57);
			this->panel11->Controls->Add(this->label58);
			this->panel11->Controls->Add(this->label59);
			this->panel11->Controls->Add(this->label60);
			this->panel11->Controls->Add(this->button18);
			this->panel11->Controls->Add(this->pictureBox10);
			this->panel11->Location = System::Drawing::Point(35, 1503);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(676, 143);
			this->panel11->TabIndex = 16;
			// 
			// button17
			// 
			this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(517, 59);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(136, 29);
			this->button17->TabIndex = 8;
			this->button17->Text = L"Contact Dealer";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(402, 21);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(88, 16);
			this->label55->TabIndex = 7;
			this->label55->Text = L"Possession:  ";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(402, 97);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(87, 16);
			this->label56->TabIndex = 6;
			this->label56->Text = L"INR total cost";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(299, 97);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(62, 16);
			this->label57->TabIndex = 5;
			this->label57->Text = L"INR /sq ft";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(209, 97);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(38, 16);
			this->label58->TabIndex = 4;
			this->label58->Text = L"BHK:";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(209, 59);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(119, 16);
			this->label59->TabIndex = 3;
			this->label59->Text = L"Builder/Residency";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(209, 21);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(62, 16);
			this->label60->TabIndex = 2;
			this->label60->Text = L"Address:";
			// 
			// button18
			// 
			this->button18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(517, 12);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(136, 29);
			this->button18->TabIndex = 1;
			this->button18->Text = L"View Details";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox10->Location = System::Drawing::Point(12, 12);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(162, 115);
			this->pictureBox10->TabIndex = 0;
			this->pictureBox10->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel10->AutoScroll = true;
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->button15);
			this->panel10->Controls->Add(this->label49);
			this->panel10->Controls->Add(this->label50);
			this->panel10->Controls->Add(this->label51);
			this->panel10->Controls->Add(this->label52);
			this->panel10->Controls->Add(this->label53);
			this->panel10->Controls->Add(this->label54);
			this->panel10->Controls->Add(this->button16);
			this->panel10->Controls->Add(this->pictureBox9);
			this->panel10->Location = System::Drawing::Point(35, 1335);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(676, 143);
			this->panel10->TabIndex = 22;
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(517, 59);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(136, 29);
			this->button15->TabIndex = 8;
			this->button15->Text = L"Contact Dealer";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(402, 21);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(88, 16);
			this->label49->TabIndex = 7;
			this->label49->Text = L"Possession:  ";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(402, 97);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(87, 16);
			this->label50->TabIndex = 6;
			this->label50->Text = L"INR total cost";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(299, 97);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(62, 16);
			this->label51->TabIndex = 5;
			this->label51->Text = L"INR /sq ft";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(209, 97);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(38, 16);
			this->label52->TabIndex = 4;
			this->label52->Text = L"BHK:";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(209, 59);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(119, 16);
			this->label53->TabIndex = 3;
			this->label53->Text = L"Builder/Residency";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(209, 21);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(62, 16);
			this->label54->TabIndex = 2;
			this->label54->Text = L"Address:";
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(517, 12);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(136, 29);
			this->button16->TabIndex = 1;
			this->button16->Text = L"View Details";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox9->Location = System::Drawing::Point(12, 12);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(162, 115);
			this->pictureBox9->TabIndex = 0;
			this->pictureBox9->TabStop = false;
			// 
			// panel9
			// 
			this->panel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel9->AutoScroll = true;
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->button13);
			this->panel9->Controls->Add(this->label43);
			this->panel9->Controls->Add(this->label44);
			this->panel9->Controls->Add(this->label45);
			this->panel9->Controls->Add(this->label46);
			this->panel9->Controls->Add(this->label47);
			this->panel9->Controls->Add(this->label48);
			this->panel9->Controls->Add(this->button14);
			this->panel9->Controls->Add(this->pictureBox8);
			this->panel9->Location = System::Drawing::Point(35, 1167);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(676, 143);
			this->panel9->TabIndex = 18;
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(517, 59);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(136, 29);
			this->button13->TabIndex = 8;
			this->button13->Text = L"Contact Dealer";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(402, 21);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(88, 16);
			this->label43->TabIndex = 7;
			this->label43->Text = L"Possession:  ";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(402, 97);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(87, 16);
			this->label44->TabIndex = 6;
			this->label44->Text = L"INR total cost";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(299, 97);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(62, 16);
			this->label45->TabIndex = 5;
			this->label45->Text = L"INR /sq ft";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(209, 97);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(38, 16);
			this->label46->TabIndex = 4;
			this->label46->Text = L"BHK:";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(209, 59);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(119, 16);
			this->label47->TabIndex = 3;
			this->label47->Text = L"Builder/Residency";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(209, 21);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(62, 16);
			this->label48->TabIndex = 2;
			this->label48->Text = L"Address:";
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(517, 12);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(136, 29);
			this->button14->TabIndex = 1;
			this->button14->Text = L"View Details";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox8->Location = System::Drawing::Point(12, 12);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(162, 115);
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel8->AutoScroll = true;
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->button11);
			this->panel8->Controls->Add(this->label37);
			this->panel8->Controls->Add(this->label38);
			this->panel8->Controls->Add(this->label39);
			this->panel8->Controls->Add(this->label40);
			this->panel8->Controls->Add(this->label41);
			this->panel8->Controls->Add(this->label42);
			this->panel8->Controls->Add(this->button12);
			this->panel8->Controls->Add(this->pictureBox7);
			this->panel8->Location = System::Drawing::Point(35, 1001);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(676, 143);
			this->panel8->TabIndex = 19;
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(517, 59);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(136, 29);
			this->button11->TabIndex = 8;
			this->button11->Text = L"Contact Dealer";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(402, 21);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(88, 16);
			this->label37->TabIndex = 7;
			this->label37->Text = L"Possession:  ";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(402, 97);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(87, 16);
			this->label38->TabIndex = 6;
			this->label38->Text = L"INR total cost";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(299, 97);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(62, 16);
			this->label39->TabIndex = 5;
			this->label39->Text = L"INR /sq ft";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(209, 97);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(38, 16);
			this->label40->TabIndex = 4;
			this->label40->Text = L"BHK:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(209, 59);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(119, 16);
			this->label41->TabIndex = 3;
			this->label41->Text = L"Builder/Residency";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(209, 21);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(62, 16);
			this->label42->TabIndex = 2;
			this->label42->Text = L"Address:";
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(517, 12);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(136, 29);
			this->button12->TabIndex = 1;
			this->button12->Text = L"View Details";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Location = System::Drawing::Point(12, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(162, 115);
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// panel7
			// 
			this->panel7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel7->AutoScroll = true;
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->button9);
			this->panel7->Controls->Add(this->label31);
			this->panel7->Controls->Add(this->label32);
			this->panel7->Controls->Add(this->label33);
			this->panel7->Controls->Add(this->label34);
			this->panel7->Controls->Add(this->label35);
			this->panel7->Controls->Add(this->label36);
			this->panel7->Controls->Add(this->button10);
			this->panel7->Controls->Add(this->pictureBox6);
			this->panel7->Location = System::Drawing::Point(35, 836);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(676, 143);
			this->panel7->TabIndex = 17;
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(517, 59);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(136, 29);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Contact Dealer";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(402, 21);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(88, 16);
			this->label31->TabIndex = 7;
			this->label31->Text = L"Possession:  ";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(402, 97);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(87, 16);
			this->label32->TabIndex = 6;
			this->label32->Text = L"INR total cost";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(299, 97);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(62, 16);
			this->label33->TabIndex = 5;
			this->label33->Text = L"INR /sq ft";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(209, 97);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(38, 16);
			this->label34->TabIndex = 4;
			this->label34->Text = L"BHK:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(209, 59);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(119, 16);
			this->label35->TabIndex = 3;
			this->label35->Text = L"Builder/Residency";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(209, 21);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(62, 16);
			this->label36->TabIndex = 2;
			this->label36->Text = L"Address:";
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(517, 12);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(136, 29);
			this->button10->TabIndex = 1;
			this->button10->Text = L"View Details";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Location = System::Drawing::Point(12, 12);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(162, 115);
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel6->AutoScroll = true;
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->button7);
			this->panel6->Controls->Add(this->label25);
			this->panel6->Controls->Add(this->label26);
			this->panel6->Controls->Add(this->label27);
			this->panel6->Controls->Add(this->label28);
			this->panel6->Controls->Add(this->label29);
			this->panel6->Controls->Add(this->label30);
			this->panel6->Controls->Add(this->button8);
			this->panel6->Controls->Add(this->pictureBox5);
			this->panel6->Location = System::Drawing::Point(35, 670);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(676, 143);
			this->panel6->TabIndex = 21;
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(517, 59);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 29);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Contact Dealer";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(402, 21);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(88, 16);
			this->label25->TabIndex = 7;
			this->label25->Text = L"Possession:  ";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(402, 97);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(87, 16);
			this->label26->TabIndex = 6;
			this->label26->Text = L"INR total cost";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(299, 97);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(62, 16);
			this->label27->TabIndex = 5;
			this->label27->Text = L"INR /sq ft";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(209, 97);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(38, 16);
			this->label28->TabIndex = 4;
			this->label28->Text = L"BHK:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(209, 59);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(119, 16);
			this->label29->TabIndex = 3;
			this->label29->Text = L"Builder/Residency";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(209, 21);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(62, 16);
			this->label30->TabIndex = 2;
			this->label30->Text = L"Address:";
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(517, 12);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(136, 29);
			this->button8->TabIndex = 1;
			this->button8->Text = L"View Details";
			this->button8->UseVisualStyleBackColor = true;
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
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->AutoScroll = true;
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label21);
			this->panel4->Controls->Add(this->label22);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->label24);
			this->panel4->Controls->Add(this->button6);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Location = System::Drawing::Point(35, 505);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(676, 143);
			this->panel4->TabIndex = 20;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(517, 59);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 29);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Contact Dealer";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(402, 21);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(88, 16);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Possession:  ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(402, 97);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(87, 16);
			this->label20->TabIndex = 6;
			this->label20->Text = L"INR total cost";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(299, 97);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(62, 16);
			this->label21->TabIndex = 5;
			this->label21->Text = L"INR /sq ft";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(209, 97);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(38, 16);
			this->label22->TabIndex = 4;
			this->label22->Text = L"BHK:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(209, 59);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(119, 16);
			this->label23->TabIndex = 3;
			this->label23->Text = L"Builder/Residency";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(209, 21);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(62, 16);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Address:";
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(517, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 29);
			this->button6->TabIndex = 1;
			this->button6->Text = L"View Details";
			this->button6->UseVisualStyleBackColor = true;
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
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->AutoScroll = true;
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Location = System::Drawing::Point(35, 341);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(676, 143);
			this->panel3->TabIndex = 14;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(517, 59);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 29);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Contact Dealer";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(402, 21);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(88, 16);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Possession:  ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(402, 97);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(87, 16);
			this->label14->TabIndex = 6;
			this->label14->Text = L"INR total cost";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(299, 97);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(62, 16);
			this->label15->TabIndex = 5;
			this->label15->Text = L"INR /sq ft";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(209, 97);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 16);
			this->label16->TabIndex = 4;
			this->label16->Text = L"BHK:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(209, 59);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(119, 16);
			this->label17->TabIndex = 3;
			this->label17->Text = L"Builder/Residency";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(209, 21);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 16);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Address:";
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(517, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 29);
			this->button4->TabIndex = 1;
			this->button4->Text = L"View Details";
			this->button4->UseVisualStyleBackColor = true;
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
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->AutoScroll = true;
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(35, 179);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(676, 143);
			this->panel2->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(517, 59);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 29);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Contact Dealer";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(402, 21);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Possession:  ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(402, 97);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 16);
			this->label8->TabIndex = 6;
			this->label8->Text = L"INR total cost";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(299, 97);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 16);
			this->label9->TabIndex = 5;
			this->label9->Text = L"INR /sq ft";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(209, 97);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(38, 16);
			this->label10->TabIndex = 4;
			this->label10->Text = L"BHK:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(209, 59);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(119, 16);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Builder/Residency";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(209, 21);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 16);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Address:";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(517, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 29);
			this->button2->TabIndex = 1;
			this->button2->Text = L"View Details";
			this->button2->UseVisualStyleBackColor = true;
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
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoScroll = true;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->contact);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->details);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(35, 20);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(676, 143);
			this->panel1->TabIndex = 13;
			// 
			// contact
			// 
			this->contact->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->contact->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->contact->FlatAppearance->BorderSize = 0;
			this->contact->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->contact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->contact->Location = System::Drawing::Point(517, 59);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(136, 29);
			this->contact->TabIndex = 8;
			this->contact->Text = L"Contact Dealer";
			this->contact->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(398, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Possession:  ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(402, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"INR total cost";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(299, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"INR /sq ft";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(209, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"BHK:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(209, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Builder/Residency";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(209, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Address:";
			// 
			// details
			// 
			this->details->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->details->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->details->FlatAppearance->BorderSize = 0;
			this->details->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->details->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->details->Location = System::Drawing::Point(517, 12);
			this->details->Name = L"details";
			this->details->Size = System::Drawing::Size(136, 29);
			this->details->TabIndex = 1;
			this->details->Text = L"View Details";
			this->details->UseVisualStyleBackColor = true;
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
			// button21
			// 
			this->button21->Location = System::Drawing::Point(56, 680);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 24;
			this->button21->Text = L"Go to Page";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Buy_form::button21_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(31, 653);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 23;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::White;
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Controls->Add(this->button21);
			this->panel12->Controls->Add(this->panel15);
			this->panel12->Controls->Add(this->comboBox1);
			this->panel12->Controls->Add(this->panel14);
			this->panel12->Controls->Add(this->panel13);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel12->Location = System::Drawing::Point(0, 0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(188, 733);
			this->panel12->TabIndex = 12;
			// 
			// panel15
			// 
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->checkBox5);
			this->panel15->Controls->Add(this->checkBox4);
			this->panel15->Controls->Add(this->checkBox3);
			this->panel15->Controls->Add(this->checkBox2);
			this->panel15->Controls->Add(this->checkBox1);
			this->panel15->Controls->Add(this->label73);
			this->panel15->Location = System::Drawing::Point(0, 429);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(187, 203);
			this->panel15->TabIndex = 8;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(26, 148);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(95, 17);
			this->checkBox5->TabIndex = 12;
			this->checkBox5->Text = L"5 BHK or more";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(26, 125);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(57, 17);
			this->checkBox4->TabIndex = 11;
			this->checkBox4->Text = L"4 BHK";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(26, 102);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(57, 17);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"3 BHK";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(26, 78);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(57, 17);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"2 BHK";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(26, 55);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(57, 17);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"1 BHK";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(27, 17);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(41, 18);
			this->label73->TabIndex = 0;
			this->label73->Text = L"BHK";
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Controls->Add(this->label68);
			this->panel14->Controls->Add(this->label67);
			this->panel14->Controls->Add(this->button20);
			this->panel14->Controls->Add(this->textBox3);
			this->panel14->Controls->Add(this->textBox4);
			this->panel14->Controls->Add(this->label64);
			this->panel14->Controls->Add(this->label65);
			this->panel14->Controls->Add(this->label66);
			this->panel14->Location = System::Drawing::Point(0, 220);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(187, 203);
			this->panel14->TabIndex = 7;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(3, 132);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(23, 13);
			this->label68->TabIndex = 7;
			this->label68->Text = L"Rs.";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(3, 75);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(23, 13);
			this->label67->TabIndex = 6;
			this->label67->Text = L"Rs.";
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(30, 158);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(79, 23);
			this->button20->TabIndex = 5;
			this->button20->Text = L"Refine";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Buy_form::button20_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(30, 129);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(30, 73);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(27, 113);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(84, 13);
			this->label64->TabIndex = 2;
			this->label64->Text = L"Maximum Price :";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(27, 57);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(81, 13);
			this->label65->TabIndex = 1;
			this->label65->Text = L"Minimum Price :";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(27, 17);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(114, 18);
			this->label66->TabIndex = 0;
			this->label66->Text = L"Refine by Price";
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->button19);
			this->panel13->Controls->Add(this->textBox2);
			this->panel13->Controls->Add(this->textBox1);
			this->panel13->Controls->Add(this->label63);
			this->panel13->Controls->Add(this->label62);
			this->panel13->Controls->Add(this->label61);
			this->panel13->Location = System::Drawing::Point(0, 11);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(187, 203);
			this->panel13->TabIndex = 2;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(30, 158);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(79, 23);
			this->button19->TabIndex = 5;
			this->button19->Text = L"Refine";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Buy_form::button19_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(30, 129);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(30, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(27, 113);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(82, 13);
			this->label63->TabIndex = 2;
			this->label63->Text = L"Maximum Area :";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(27, 57);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(79, 13);
			this->label62->TabIndex = 1;
			this->label62->Text = L"Minimum Area :";
			this->label62->Click += gcnew System::EventHandler(this, &Buy_form::label62_Click);
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(27, 17);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(110, 18);
			this->label61->TabIndex = 0;
			this->label61->Text = L"Refine by Area";
			// 
			// Buy_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoScrollMinSize = System::Drawing::Size(1, 1);
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(956, 733);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel5);
			this->Name = L"Buy_form";
			this->Text = L"Buy";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Buy_form::Buy_form_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Buy_form::Buy_form_Load);
			this->panel5->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		public : Database db;
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label62_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Buy_form_Load(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text="0";
			 textBox2->Text="2147483647";
			 textBox4->Text="0";
			 textBox3->Text="2147483647";
			 checkBox1->Checked=true;
			 checkBox2->Checked=true;
			 checkBox3->Checked=true;
			 checkBox4->Checked=true;
			 checkBox5->Checked=true;
			 props=gcnew array<String^> {
				"","",textBox1->Text,textBox2->Text,textBox4->Text,textBox3->Text,"","","","","","1","2147483647","","","","","",""
			};
			 ids=gcnew array<Int64>(1000);
			 ids=db.search(props);
			 prop_details=gcnew array<String^>(16);
			 //MessageBox::Show(ids[0]);
			 totalpages=ceil(ids[0]/10.0);
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

			 /*System::Windows::Forms::Panel^  panel100;
			 System::Windows::Forms::Label^  label100;
			 System::Windows::Forms::Label^  label200;
			 System::Windows::Forms::Label^  label300;
			 System::Windows::Forms::Label^  label400;
			 System::Windows::Forms::Label^  label500;
			 System::Windows::Forms::Label^  label600;
			 System::Windows::Forms::PictureBox^  pictureBox100;
			 panel100 = (gcnew System::Windows::Forms::Panel());
			 label100 = (gcnew System::Windows::Forms::Label());
			 label200 = (gcnew System::Windows::Forms::Label());
			 label300 = (gcnew System::Windows::Forms::Label());
			 label400 = (gcnew System::Windows::Forms::Label());
			 label500 = (gcnew System::Windows::Forms::Label());
			 label600 = (gcnew System::Windows::Forms::Label());
			 pictureBox100 = (gcnew System::Windows::Forms::PictureBox());

			 panel100->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				 | System::Windows::Forms::AnchorStyles::Right));
			 panel100->AutoScroll = true;
			 panel100->BackColor = System::Drawing::Color::White;
			 panel100->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			 panel100->Controls->Add(contact);
			 panel100->Controls->Add(label600);
			 panel100->Controls->Add(label500);
			 panel100->Controls->Add(label400);
			 panel100->Controls->Add(label300);
			 panel100->Controls->Add(label200);
			 panel100->Controls->Add(label100);
			 panel100->Controls->Add(details);
			 panel100->Controls->Add(pictureBox100);
			 panel100->Location = System::Drawing::Point(35, 20);
			 panel100->Name = L"panel100";
			 panel100->Size = System::Drawing::Size(676, 143);
			 panel100->TabIndex = 13;*/
		 }
private: System::Void Buy_form_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 previous->Show();
		 }
private: System::Void label69_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 pageno=Convert::ToInt32(comboBox1->Text);
			 //MessageBox::Show(Convert::ToString(pageno));
			 display(pageno);
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(Convert::ToInt32(textBox1->Text)<0 && Convert::ToInt32(textBox1->Text)>2147483647)
			 {
				 //MessageBox::Show(textBox1->Text);
				 MessageBox::Show("Please enter a value between 0 and 2147483647.");
			 }
			 else if(Convert::ToInt32(textBox2->Text)<0 && Convert::ToInt32(textBox2->Text)>2147483647)
			 {
				 //MessageBox::Show(textBox2->Text);
				 MessageBox::Show("Please enter a value between 0 and 2147483647.");
			 }
			 else
			 {
				 props=gcnew array<String^> {
					 "","",textBox1->Text,textBox2->Text,textBox4->Text,textBox3->Text,"","","","","","1","2147483647","","","","","",""
				 };
				 ids=gcnew array<Int64>(1000);
				 ids=db.search(props);
				 prop_details=gcnew array<String^>(16);
				 //MessageBox::Show(ids[0]);
				 totalpages=ceil(ids[0]/10.0);
				 pageno=1;
				 //MessageBox::Show(Convert::ToString(totalpages));
				 comboBox1->BeginUpdate();
				 comboBox1->Items->Clear();
				 for ( int i = 1; i <= totalpages; i++ )
				 {
					 comboBox1->Items->Add(i);
				 }
				 comboBox1->EndUpdate();
				 comboBox1->Text=Convert::ToString(pageno);
				 display(pageno);
			 }
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(Convert::ToInt32(textBox4->Text)<0 && Convert::ToInt32(textBox4->Text)>2147483647)
			 {
				 //MessageBox::Show(textBox4->Text);
				 MessageBox::Show("Please enter a value between 0 and 2147483647.");
			 }
			 else if(Convert::ToInt32(textBox3->Text)<0 && Convert::ToInt32(textBox3->Text)>2147483647)
			 {
				 //MessageBox::Show(textBox3->Text);
				 MessageBox::Show("Please enter a value between 0 and 2147483647.");
			 }
			 else
			 {
				 props=gcnew array<String^> {
					 "","",textBox1->Text,textBox2->Text,textBox4->Text,textBox3->Text,"","","","","","1","2147483647","","","","","",""
				 };
				 ids=gcnew array<Int64>(1000);
				 ids=db.search(props);
				 prop_details=gcnew array<String^>(16);
				 //MessageBox::Show(ids[0]);
				 totalpages=ceil(ids[0]/10.0);
				 pageno=1;
				 //MessageBox::Show(Convert::ToString(totalpages));
				 comboBox1->BeginUpdate();
				 comboBox1->Items->Clear();
				 for ( int i = 1; i <= totalpages; i++ )
				 {
					 comboBox1->Items->Add(i);
				 }
				 comboBox1->EndUpdate();
				 comboBox1->Text=Convert::ToString(pageno);
				 display(pageno);
			 }
		 }
private: System::Void display(int pageno) {
			 if(ids[1+10*(pageno-1)]!=-1){
				 //MessageBox::Show(ids[1]);
				 prop_details=db.get_property_details(ids[1+10*(pageno-1)]);
				 //MessageBox::Show(prop_details[10]);
				 label1->Text="Address: "+prop_details[1];
				 label3->Text=prop_details[10]+" BHK";
				 label4->Text="Area: "+prop_details[3];
				 label5->Text="Price: "+prop_details[4];
				 label6->Text="Seller: "+prop_details[9];
				 pictureBox1->ImageLocation=prop_details[6];
				 //MessageBox::Show(prop_details[6]);
				 panel1->Show();
			 }
			 else this->panel1->Hide();
			 if(ids[2+10*(pageno-1)]!=-1){
				 prop_details=db.get_property_details(ids[2+10*(pageno-1)]);
				 label12->Text="Address: "+prop_details[1];
				 label10->Text=prop_details[10]+" BHK";
				 label9->Text="Area: "+prop_details[3];
				 label8->Text="Price: "+prop_details[4];
				 label7->Text="Seller: "+prop_details[9];
				 pictureBox2->ImageLocation=prop_details[6];
				 panel2->Show();
			 }
			 else this->panel2->Hide();
			 if(ids[3+10*(pageno-1)]!=-1){
				 prop_details=db.get_property_details(ids[3+10*(pageno-1)]);
				 label18->Text="Address: "+prop_details[1];
				 label16->Text=prop_details[10]+" BHK";
				 label15->Text="Area: "+prop_details[3];
				 label14->Text="Price: "+prop_details[4];
				 label13->Text="Seller: "+prop_details[9];
				 pictureBox3->ImageLocation=prop_details[6];
				 panel3->Show();
			 }
			 else this->panel3->Hide();
			 if(ids[4+10*(pageno-1)]!=-1){
				 prop_details=db.get_property_details(ids[4+10*(pageno-1)]);
				 label24->Text="Address: "+prop_details[1];
				 label22->Text=prop_details[10]+" BHK";
				 label21->Text="Area: "+prop_details[3];
				 label20->Text="Price: "+prop_details[4];
				 label19->Text="Seller: "+prop_details[9];
				 pictureBox4->ImageLocation=prop_details[6];
				 panel4->Show();
			 }
			 else this->panel4->Hide();
			 if(ids[5+10*(pageno-1)]!=-1){
				 prop_details=db.get_property_details(ids[5+10*(pageno-1)]);
				 label30->Text="Address: "+prop_details[1];
				 label28->Text=prop_details[10]+" BHK";
				 label27->Text="Area: "+prop_details[3];
				 label26->Text="Price: "+prop_details[4];
				 label25->Text="Seller: "+prop_details[9];
				 pictureBox5->ImageLocation=prop_details[6];
				 panel6->Show();
			 }
			 else this->panel6->Hide();
			 if(ids[6+10*(pageno-1)]!=-1){
				 prop_details=db.get_property_details(ids[6+10*(pageno-1)]);
				 label36->Text="Address: "+prop_details[1];
				 label34->Text=prop_details[10]+" BHK";
				 label33->Text="Area: "+prop_details[3];
				 label32->Text="Price: "+prop_details[4];
				 label31->Text="Seller: "+prop_details[9];
				 pictureBox6->ImageLocation=prop_details[6];
				 panel7->Show();
			 }
			 else this->panel7->Hide();
			 if(ids[7+10*(pageno-1)]!=-1){
				 prop_details=db.get_property_details(ids[7+10*(pageno-1)]);
				 label42->Text="Address: "+prop_details[1];
				 label40->Text=prop_details[10]+" BHK";
				 label39->Text="Area: "+prop_details[3];
				 label38->Text="Price: "+prop_details[4];
				 label37->Text="Seller: "+prop_details[9];
				 pictureBox7->ImageLocation=prop_details[6];
				 panel8->Show();
			 }
			 else this->panel8->Hide();
			 if(ids[8+10*(pageno-1)]!=-1){
				 prop_details=db.get_property_details(ids[8+10*(pageno-1)]);
				 label48->Text="Address: "+prop_details[1];
				 label46->Text=prop_details[10]+" BHK";
				 label45->Text="Area: "+prop_details[3];
				 label44->Text="Price: "+prop_details[4];
				 label43->Text="Seller: "+prop_details[9];
				 pictureBox8->ImageLocation=prop_details[6];
				 panel9->Show();
			 }
			 else this->panel9->Hide();
			 if(ids[9+10*(pageno-1)]!=-1){
				 prop_details=db.get_property_details(ids[9+10*(pageno-1)]);
				 label54->Text="Address: "+prop_details[1];
				 label52->Text=prop_details[10]+" BHK";
				 label51->Text="Area: "+prop_details[3];
				 label50->Text="Price: "+prop_details[4];
				 label49->Text="Seller: "+prop_details[9];
				 pictureBox9->ImageLocation=prop_details[6];
				 panel10->Show();
			 }
			 else this->panel10->Hide();
			 if(ids[10+10*(pageno-1)]!=-1){
				 prop_details=db.get_property_details(ids[10+10*(pageno-1)]);
				 label60->Text="Address: "+prop_details[1];
				 label58->Text=prop_details[10]+" BHK";
				 label57->Text="Area: "+prop_details[3];
				 label56->Text="Price: "+prop_details[4];
				 label55->Text="Seller: "+prop_details[9];
				 pictureBox10->ImageLocation=prop_details[6];
				 panel11->Show();
			 }
			 else this->panel11->Hide();
		 }
};
}
