#include "Database.h"
#include "Buy_form.h"
namespace RealEstate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for sell
	/// </summary>
	public ref class sell : public System::Windows::Forms::Form
	{
	public:
		String^ cityname;
		String^ username;
		String^ sell_rent;
		String^ sell_name;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  calendar;
	private: System::Windows::Forms::PictureBox^  map;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  map_upload;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	public: 


	public: 



	public: 

		Form^ previous;
		sell(String^ c, String^ u,String^s, Form^ f,String^ n)
		{
			InitializeComponent();
			cityname=c;
			username=u;
			sell_rent=s;
			previous=f;
			sell_name=n;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~sell()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  floor_plan;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  floor_upload;






	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  address;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  age;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  area;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  price;

	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  rand_1;

	private: System::Windows::Forms::TextBox^  rand_2;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  contact;
	private: System::Windows::Forms::TextBox^  desc;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::PictureBox^  image;
	private: System::Windows::Forms::Button^  button2;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(sell::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->age = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->area = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->price = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->rand_1 = (gcnew System::Windows::Forms::TextBox());
			this->rand_2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->desc = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->image = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->floor_plan = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->floor_upload = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->calendar = (gcnew System::Windows::Forms::DateTimePicker());
			this->map = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->map_upload = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->image))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->floor_plan))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(85, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Address";
			// 
			// address
			// 
			this->address->BackColor = System::Drawing::Color::WhiteSmoke;
			this->address->Location = System::Drawing::Point(263, 153);
			this->address->MaximumSize = System::Drawing::Size(301, 1000);
			this->address->Multiline = true;
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(295, 24);
			this->address->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(82, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Category";
			// 
			// radioButton3
			// 
			this->radioButton3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::Black;
			this->radioButton3->Location = System::Drawing::Point(48, 9);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(114, 27);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Apartment";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &sell::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Transparent;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::Color::Black;
			this->radioButton4->Location = System::Drawing::Point(158, 9);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(58, 27);
			this->radioButton4->TabIndex = 9;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Flat";
			this->radioButton4->UseVisualStyleBackColor = false;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &sell::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Transparent;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton5->ForeColor = System::Drawing::Color::Black;
			this->radioButton5->Location = System::Drawing::Point(218, 9);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(59, 27);
			this->radioButton5->TabIndex = 10;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"plot";
			this->radioButton5->UseVisualStyleBackColor = false;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &sell::radioButton5_CheckedChanged);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(83, 225);
			this->label5->Margin = System::Windows::Forms::Padding(3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 23);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Age (years)";
			// 
			// age
			// 
			this->age->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->age->BackColor = System::Drawing::Color::WhiteSmoke;
			this->age->Location = System::Drawing::Point(262, 224);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(113, 20);
			this->age->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(83, 261);
			this->label6->Margin = System::Windows::Forms::Padding(3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 23);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Area (sq ft)";
			// 
			// area
			// 
			this->area->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->area->BackColor = System::Drawing::Color::WhiteSmoke;
			this->area->Location = System::Drawing::Point(263, 260);
			this->area->Name = L"area";
			this->area->Size = System::Drawing::Size(113, 20);
			this->area->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(82, 297);
			this->label7->Margin = System::Windows::Forms::Padding(3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 23);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Price (in Lacs)";
			// 
			// price
			// 
			this->price->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->price->BackColor = System::Drawing::Color::WhiteSmoke;
			this->price->Location = System::Drawing::Point(263, 296);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(296, 20);
			this->price->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(83, 334);
			this->label8->Margin = System::Windows::Forms::Padding(3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 23);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Description";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(83, 425);
			this->label9->Margin = System::Windows::Forms::Padding(3);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 23);
			this->label9->TabIndex = 19;
			this->label9->Text = L"rand";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(82, 459);
			this->label10->Margin = System::Windows::Forms::Padding(3);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 23);
			this->label10->TabIndex = 20;
			this->label10->Text = L"rand";
			this->label10->Visible = false;
			// 
			// rand_1
			// 
			this->rand_1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->rand_1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->rand_1->Location = System::Drawing::Point(263, 424);
			this->rand_1->Name = L"rand_1";
			this->rand_1->Size = System::Drawing::Size(113, 20);
			this->rand_1->TabIndex = 9;
			this->rand_1->Visible = false;
			// 
			// rand_2
			// 
			this->rand_2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->rand_2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->rand_2->Location = System::Drawing::Point(263, 460);
			this->rand_2->Name = L"rand_2";
			this->rand_2->Size = System::Drawing::Size(91, 20);
			this->rand_2->TabIndex = 10;
			this->rand_2->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->ForeColor = System::Drawing::Color::Black;
			this->groupBox1->Location = System::Drawing::Point(258, 56);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(279, 38);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"category";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(1189, 806);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 39);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &sell::button1_Click);
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(85, 189);
			this->label11->Margin = System::Windows::Forms::Padding(3);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(72, 23);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Contact";
			// 
			// contact
			// 
			this->contact->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->contact->BackColor = System::Drawing::Color::WhiteSmoke;
			this->contact->Location = System::Drawing::Point(263, 188);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(113, 20);
			this->contact->TabIndex = 4;
			// 
			// desc
			// 
			this->desc->BackColor = System::Drawing::Color::WhiteSmoke;
			this->desc->Location = System::Drawing::Point(262, 334);
			this->desc->Multiline = true;
			this->desc->Name = L"desc";
			this->desc->Size = System::Drawing::Size(296, 71);
			this->desc->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(118, 566);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 23);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Image";
			this->label12->Click += gcnew System::EventHandler(this, &sell::label12_Click);
			// 
			// image
			// 
			this->image->BackColor = System::Drawing::Color::White;
			this->image->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->image->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"image.Image")));
			this->image->Location = System::Drawing::Point(119, 599);
			this->image->MaximumSize = System::Drawing::Size(163, 99);
			this->image->MinimumSize = System::Drawing::Size(163, 99);
			this->image->Name = L"image";
			this->image->Size = System::Drawing::Size(163, 99);
			this->image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->image->TabIndex = 28;
			this->image->TabStop = false;
			this->image->Click += gcnew System::EventHandler(this, &sell::image_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(202, 729);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 32);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Upload";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &sell::button2_Click);
			// 
			// floor_plan
			// 
			this->floor_plan->BackColor = System::Drawing::Color::White;
			this->floor_plan->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->floor_plan->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"floor_plan.Image")));
			this->floor_plan->Location = System::Drawing::Point(401, 599);
			this->floor_plan->MaximumSize = System::Drawing::Size(163, 99);
			this->floor_plan->MinimumSize = System::Drawing::Size(163, 99);
			this->floor_plan->Name = L"floor_plan";
			this->floor_plan->Size = System::Drawing::Size(163, 99);
			this->floor_plan->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->floor_plan->TabIndex = 30;
			this->floor_plan->TabStop = false;
			this->floor_plan->WaitOnLoad = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(397, 566);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(88, 23);
			this->label13->TabIndex = 31;
			this->label13->Text = L"Floor Plan";
			// 
			// floor_upload
			// 
			this->floor_upload->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->floor_upload->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->floor_upload->ForeColor = System::Drawing::Color::Black;
			this->floor_upload->Location = System::Drawing::Point(484, 727);
			this->floor_upload->Name = L"floor_upload";
			this->floor_upload->Size = System::Drawing::Size(80, 32);
			this->floor_upload->TabIndex = 32;
			this->floor_upload->Text = L"Upload";
			this->floor_upload->UseVisualStyleBackColor = false;
			this->floor_upload->Click += gcnew System::EventHandler(this, &sell::floor_upload_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(82, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 23);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Available From";
			// 
			// calendar
			// 
			this->calendar->Location = System::Drawing::Point(261, 114);
			this->calendar->Name = L"calendar";
			this->calendar->Size = System::Drawing::Size(200, 20);
			this->calendar->TabIndex = 34;
			// 
			// map
			// 
			this->map->BackColor = System::Drawing::Color::White;
			this->map->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->map->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"map.Image")));
			this->map->Location = System::Drawing::Point(732, 599);
			this->map->MaximumSize = System::Drawing::Size(163, 99);
			this->map->MinimumSize = System::Drawing::Size(163, 99);
			this->map->Name = L"map";
			this->map->Size = System::Drawing::Size(163, 99);
			this->map->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->map->TabIndex = 35;
			this->map->TabStop = false;
			this->map->WaitOnLoad = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(737, 566);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 23);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Map";
			// 
			// map_upload
			// 
			this->map_upload->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->map_upload->Font = (gcnew System::Drawing::Font(L"Corbel", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->map_upload->ForeColor = System::Drawing::Color::Black;
			this->map_upload->Location = System::Drawing::Point(815, 729);
			this->map_upload->Name = L"map_upload";
			this->map_upload->Size = System::Drawing::Size(80, 32);
			this->map_upload->TabIndex = 37;
			this->map_upload->Text = L"Upload";
			this->map_upload->UseVisualStyleBackColor = false;
			this->map_upload->Click += gcnew System::EventHandler(this, &sell::map_upload_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(565, 44);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(734, 519);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			// 
			// sell
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoScrollMinSize = System::Drawing::Size(1, 1);
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1350, 729);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->map_upload);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->map);
			this->Controls->Add(this->calendar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->floor_upload);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->floor_plan);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->image);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->rand_2);
			this->Controls->Add(this->rand_1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->desc);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->price);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->area);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->age);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->address);
			this->Controls->Add(this->label3);
			this->Name = L"sell";
			this->Text = L"sell";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &sell::sell_FormClosed);
			this->Load += gcnew System::EventHandler(this, &sell::sell_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->image))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->floor_plan))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ image_location;
		String^ floor_plan_location;
		String^ map_location;
		Database	db;

	private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 label9->Text = "Floor"; 
				 label10->Text = "BHK";
				 rand_1->Visible = true;
				 rand_2->Visible = true;
				 label10->Visible=true;
				 label9->Visible=true;

			 }
	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 label9->Text = "Total floor"; 
				 label10->Text = "";
				 rand_1->Visible = true;
				 rand_2->Visible = false;
				 label10->Visible=true;
				 label9->Visible=true;
			 }
	private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 rand_1->Visible = false;
				 rand_2->Visible = false;
				 label10->Visible=false;
				 label9->Visible=false;
			 }

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
				 openFileDialog1->InitialDirectory = "c:\\" ;
				 openFileDialog1->Filter="Image Files (*.bmp,*.jpeg,*.png,*.jpg)|*.bmp;*.jpeg;*.png;*.jpg";
				 openFileDialog1->ShowDialog();
				 image_location=openFileDialog1->FileName;
				 image->ImageLocation=image_location;
				 int temp=image_location->Length;
				 for(int i=0;i<temp;i++)
				 {
					 if(image_location[i]=='\\')
					 {
						 image_location=image_location->Insert(i,"\\\\");
						 i=i+2;
					 }
				 }
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(address->Text!="" && contact->Text!="" && age->Text!="" && area->Text!="" && price->Text!="" && desc->Text!="" && image_location!="" && map_location!="" && floor_plan_location!="")
				 {
					 try{
					 if(radioButton4->Checked==true)
					 {
						 if(rand_1->Text!="" && rand_2->Text!="")
						 {
							 array<String^>^ details={address->Text,cityname,area->Text,price->Text,sell_rent,image_location,floor_plan_location,map_location,username,rand_2->Text,"Flat",desc->Text,rand_1->Text,"",age->Text,calendar->Text,sell_name};
							 db.properties(details);
							 this->Close();
							 previous->Show();
						 }
						 else
							 MessageBox::Show("All entries must be filled first");
					 }
					 else if(radioButton5->Checked==true)
					 {
						 array<String^>^ details={address->Text,cityname,area->Text,price->Text,sell_rent,image_location,floor_plan_location,map_location,username,"0","Plot",desc->Text,"","",age->Text,calendar->Text,sell_name};
						 db.properties(details);
						 this->Close();
						 previous->Show();
					 }
					 else if(radioButton3->Checked==true)
					 {
						 if(rand_1->Text!="")
						 {
						 array<String^>^ details={address->Text,cityname,area->Text,price->Text,sell_rent,image_location,floor_plan_location,map_location,username,"0","Apartment",desc->Text,"",rand_1->Text,age->Text,calendar->Text,sell_name};
						 db.properties(details);
						 this->Close();
						 previous->Show();
						 }
						 else
							 MessageBox::Show("All entries must be filled first");
					 }
					 else
					 {
						 MessageBox::Show("You must select one of the property types.");
					 }
				 }
				 catch(Exception^ ex)
				 {
					 MessageBox::Show(ex->Message);
				 }
				}
				 else
					 MessageBox::Show("All entries must be filled first.");
			 }
	private: System::Void floor_upload_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
				 openFileDialog1->InitialDirectory = "c:\\" ;
				 openFileDialog1->Filter="Image Files (*.bmp,*.jpeg,*.png,*.jpg)|*.bmp;*.jpeg;*.png;*.jpg";
				 openFileDialog1->ShowDialog();
				 floor_plan_location=openFileDialog1->FileName;
				 floor_plan->ImageLocation=floor_plan_location;
				 int temp=floor_plan_location->Length;
				 for(int i=0;i<temp;i++)
				 {
					 if(floor_plan_location[i]=='\\')
					 {
						 floor_plan_location=floor_plan_location->Insert(i,"\\\\");
						 i=i+2;
					 }
				 }
			 }
	private: System::Void sell_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
			 {
				 previous->Show();
			 }
	private: System::Void map_upload_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
				 openFileDialog1->InitialDirectory = "c:\\" ;
				 openFileDialog1->Filter="Image Files (*.bmp,*.jpeg,*.png,*.jpg)|*.bmp;*.jpeg;*.png;*.jpg";
				 openFileDialog1->ShowDialog();
				 map_location=openFileDialog1->FileName;
				 map->ImageLocation=map_location;
				 int temp=map_location->Length;
				 for(int i=0;i<temp;i++)
				 {
					 if(map_location[i]=='\\')
					 {
						 map_location=map_location->Insert(i,"\\\\");
						 i=i+2;
					 }
				 }
			 }
private: System::Void sell_Load(System::Object^  sender, System::EventArgs^  e) {
			 image_location="";
			 floor_plan_location="";
			 map_location="";
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void image_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

