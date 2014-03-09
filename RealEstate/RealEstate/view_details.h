#pragma once

namespace RealEstate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for view_details
	/// </summary>
	public ref class view_details : public System::Windows::Forms::Form
	{
	public:
		array<String^>^ det;
		view_details(array<String^>^ d)
		{
			det=d;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~view_details()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  available;
	private: System::Windows::Forms::Label^  contact;
	private: System::Windows::Forms::Label^  desc;



	private: System::Windows::Forms::Label^  price;

	private: System::Windows::Forms::Label^  area;

	private: System::Windows::Forms::Label^  age;

	private: System::Windows::Forms::Label^  cat;
	private: System::Windows::Forms::Label^  address;


	private: System::Windows::Forms::PictureBox^  image;
	private: System::Windows::Forms::PictureBox^  floor_plan;
	private: System::Windows::Forms::PictureBox^  map;



	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  floor_nu;
	private: System::Windows::Forms::Label^  no_label;


	private: System::Windows::Forms::Label^  floor;
	private: System::Windows::Forms::Label^  f_label;


	private: System::Windows::Forms::Label^  bhk;
	private: System::Windows::Forms::Label^  b_label;


	private: System::Windows::Forms::Label^  label25;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->available = (gcnew System::Windows::Forms::Label());
			this->contact = (gcnew System::Windows::Forms::Label());
			this->desc = (gcnew System::Windows::Forms::Label());
			this->price = (gcnew System::Windows::Forms::Label());
			this->area = (gcnew System::Windows::Forms::Label());
			this->age = (gcnew System::Windows::Forms::Label());
			this->cat = (gcnew System::Windows::Forms::Label());
			this->address = (gcnew System::Windows::Forms::Label());
			this->image = (gcnew System::Windows::Forms::PictureBox());
			this->floor_plan = (gcnew System::Windows::Forms::PictureBox());
			this->map = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->floor_nu = (gcnew System::Windows::Forms::Label());
			this->no_label = (gcnew System::Windows::Forms::Label());
			this->floor = (gcnew System::Windows::Forms::Label());
			this->f_label = (gcnew System::Windows::Forms::Label());
			this->bhk = (gcnew System::Windows::Forms::Label());
			this->b_label = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->image))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->floor_plan))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(420, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 18);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Available From :";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(420, 201);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(70, 18);
			this->label11->TabIndex = 40;
			this->label11->Text = L"Contact :";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(421, 412);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 18);
			this->label8->TabIndex = 39;
			this->label8->Text = L"Description :";
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(420, 362);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(117, 18);
			this->label7->TabIndex = 38;
			this->label7->Text = L"Price (in Lacs) :";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(420, 309);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 18);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Area (sq ft)  :";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(420, 254);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 18);
			this->label5->TabIndex = 36;
			this->label5->Text = L"Age (years) :";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(420, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 18);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Category :";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(420, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 18);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Address : ";
			// 
			// available
			// 
			this->available->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->available->AutoSize = true;
			this->available->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->available->ForeColor = System::Drawing::Color::Black;
			this->available->Location = System::Drawing::Point(577, 103);
			this->available->Name = L"available";
			this->available->Size = System::Drawing::Size(113, 18);
			this->available->TabIndex = 49;
			this->available->Text = L"Available From";
			// 
			// contact
			// 
			this->contact->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->contact->AutoSize = true;
			this->contact->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->contact->ForeColor = System::Drawing::Color::Black;
			this->contact->Location = System::Drawing::Point(577, 201);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(62, 18);
			this->contact->TabIndex = 48;
			this->contact->Text = L"Contact";
			// 
			// desc
			// 
			this->desc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->desc->AutoSize = true;
			this->desc->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->desc->ForeColor = System::Drawing::Color::Black;
			this->desc->Location = System::Drawing::Point(578, 412);
			this->desc->MaximumSize = System::Drawing::Size(318, 0);
			this->desc->Name = L"desc";
			this->desc->Size = System::Drawing::Size(88, 18);
			this->desc->TabIndex = 47;
			this->desc->Text = L"Description";
			// 
			// price
			// 
			this->price->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->price->AutoSize = true;
			this->price->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->price->ForeColor = System::Drawing::Color::Black;
			this->price->Location = System::Drawing::Point(577, 362);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(109, 18);
			this->price->TabIndex = 46;
			this->price->Text = L"Price (in Lacs)";
			// 
			// area
			// 
			this->area->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->area->AutoSize = true;
			this->area->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->area->ForeColor = System::Drawing::Color::Black;
			this->area->Location = System::Drawing::Point(577, 309);
			this->area->Name = L"area";
			this->area->Size = System::Drawing::Size(85, 18);
			this->area->TabIndex = 45;
			this->area->Text = L"Area (sq ft)";
			// 
			// age
			// 
			this->age->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->age->AutoSize = true;
			this->age->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->age->ForeColor = System::Drawing::Color::Black;
			this->age->Location = System::Drawing::Point(577, 254);
			this->age->Name = L"age";
			this->age->Size = System::Drawing::Size(89, 18);
			this->age->TabIndex = 44;
			this->age->Text = L"Age (years)";
			// 
			// cat
			// 
			this->cat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->cat->AutoSize = true;
			this->cat->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cat->ForeColor = System::Drawing::Color::Black;
			this->cat->Location = System::Drawing::Point(577, 58);
			this->cat->Name = L"cat";
			this->cat->Size = System::Drawing::Size(72, 18);
			this->cat->TabIndex = 43;
			this->cat->Text = L"Category";
			// 
			// address
			// 
			this->address->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->address->AutoSize = true;
			this->address->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->address->ForeColor = System::Drawing::Color::Black;
			this->address->Location = System::Drawing::Point(577, 151);
			this->address->Name = L"address";
			this->address->Size = System::Drawing::Size(67, 18);
			this->address->TabIndex = 42;
			this->address->Text = L"Address";
			// 
			// image
			// 
			this->image->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->image->Location = System::Drawing::Point(35, 88);
			this->image->Name = L"image";
			this->image->Size = System::Drawing::Size(226, 194);
			this->image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->image->TabIndex = 50;
			this->image->TabStop = false;
			// 
			// floor_plan
			// 
			this->floor_plan->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->floor_plan->Location = System::Drawing::Point(35, 347);
			this->floor_plan->Name = L"floor_plan";
			this->floor_plan->Size = System::Drawing::Size(226, 194);
			this->floor_plan->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->floor_plan->TabIndex = 51;
			this->floor_plan->TabStop = false;
			// 
			// map
			// 
			this->map->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->map->Location = System::Drawing::Point(35, 607);
			this->map->Name = L"map";
			this->map->Size = System::Drawing::Size(226, 194);
			this->map->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->map->TabIndex = 52;
			this->map->TabStop = false;
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(32, 320);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(79, 18);
			this->label17->TabIndex = 53;
			this->label17->Text = L"Floor Plan";
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(32, 580);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 18);
			this->label18->TabIndex = 54;
			this->label18->Text = L"Map";
			// 
			// floor_nu
			// 
			this->floor_nu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->floor_nu->AutoSize = true;
			this->floor_nu->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->floor_nu->ForeColor = System::Drawing::Color::Black;
			this->floor_nu->Location = System::Drawing::Point(578, 462);
			this->floor_nu->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->floor_nu->Name = L"floor_nu";
			this->floor_nu->Size = System::Drawing::Size(97, 18);
			this->floor_nu->TabIndex = 56;
			this->floor_nu->Text = L"No. of Floors";
			// 
			// no_label
			// 
			this->no_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->no_label->AutoSize = true;
			this->no_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->no_label->ForeColor = System::Drawing::Color::Black;
			this->no_label->Location = System::Drawing::Point(421, 462);
			this->no_label->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->no_label->Name = L"no_label";
			this->no_label->Size = System::Drawing::Size(105, 18);
			this->no_label->TabIndex = 55;
			this->no_label->Text = L"No. of Floors :";
			// 
			// floor
			// 
			this->floor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->floor->AutoSize = true;
			this->floor->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->floor->ForeColor = System::Drawing::Color::Black;
			this->floor->Location = System::Drawing::Point(578, 511);
			this->floor->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->floor->Name = L"floor";
			this->floor->Size = System::Drawing::Size(100, 18);
			this->floor->TabIndex = 58;
			this->floor->Text = L"Floor number";
			// 
			// f_label
			// 
			this->f_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->f_label->AutoSize = true;
			this->f_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f_label->ForeColor = System::Drawing::Color::Black;
			this->f_label->Location = System::Drawing::Point(421, 511);
			this->f_label->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->f_label->Name = L"f_label";
			this->f_label->Size = System::Drawing::Size(108, 18);
			this->f_label->TabIndex = 57;
			this->f_label->Text = L"Floor number :";
			// 
			// bhk
			// 
			this->bhk->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->bhk->AutoSize = true;
			this->bhk->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bhk->ForeColor = System::Drawing::Color::Black;
			this->bhk->Location = System::Drawing::Point(578, 559);
			this->bhk->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->bhk->Name = L"bhk";
			this->bhk->Size = System::Drawing::Size(41, 18);
			this->bhk->TabIndex = 60;
			this->bhk->Text = L"BHK";
			// 
			// b_label
			// 
			this->b_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->b_label->AutoSize = true;
			this->b_label->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b_label->ForeColor = System::Drawing::Color::Black;
			this->b_label->Location = System::Drawing::Point(421, 559);
			this->b_label->Margin = System::Windows::Forms::Padding(3, 5, 3, 0);
			this->b_label->Name = L"b_label";
			this->b_label->Size = System::Drawing::Size(49, 18);
			this->b_label->TabIndex = 59;
			this->b_label->Text = L"BHK :";
			// 
			// label25
			// 
			this->label25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(32, 57);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(51, 18);
			this->label25->TabIndex = 61;
			this->label25->Text = L"Image";
			// 
			// view_details
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(971, 733);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->bhk);
			this->Controls->Add(this->b_label);
			this->Controls->Add(this->floor);
			this->Controls->Add(this->f_label);
			this->Controls->Add(this->floor_nu);
			this->Controls->Add(this->no_label);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->map);
			this->Controls->Add(this->floor_plan);
			this->Controls->Add(this->image);
			this->Controls->Add(this->available);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->desc);
			this->Controls->Add(this->price);
			this->Controls->Add(this->area);
			this->Controls->Add(this->age);
			this->Controls->Add(this->cat);
			this->Controls->Add(this->address);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"view_details";
			this->Text = L"View Details";
			this->Load += gcnew System::EventHandler(this, &view_details::view_details_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->image))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->floor_plan))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->map))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void view_details_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 cat->Text=det[11];
				 available->Text=det[16];
				 address->Text=det[1];
				 area->Text=det[3];
				 price->Text=det[4];
				 image->ImageLocation=det[6];
				 floor_plan->ImageLocation=det[7];
				 map->ImageLocation=det[8];
				 bhk->Text=det[10];
				 desc->Text=det[12];
				 floor->Text=det[13];
				 floor_nu->Text=det[14];
				 age->Text=det[15];
				 contact->Text=det[18];
				 if(det[11]=="Plot")
				 {
					 floor->Visible=false;
					 floor_nu->Visible=false;
					 bhk->Visible=false;
					 f_label->Visible=false;
					 b_label->Visible=false;
					 no_label->Visible=false;
				 }
				 else if(det[11]=="Apartment")
				 {
					 bhk->Visible=false;
					 floor->Visible=false;
					 f_label->Visible=false;
					 b_label->Visible=false;
				 }
				 else
				 {
					 floor_nu->Visible=false;
					 no_label->Visible=false;
				 }
			 }
};
}
