#pragma once

namespace RealEstate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for profile
	/// </summary>
	public ref class profile : public System::Windows::Forms::Form
	{
	public:
		profile(void)
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
		~profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  mydetails;
	private: System::Windows::Forms::TabPage^  sellproperty;
	private: System::Windows::Forms::TabPage^  rentproperty;
	private: System::Windows::Forms::TextBox^  name;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  city;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  contact;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  con_pass;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  username;
	private: System::Windows::Forms::Label^  label8;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->mydetails = (gcnew System::Windows::Forms::TabPage());
			this->sellproperty = (gcnew System::Windows::Forms::TabPage());
			this->rentproperty = (gcnew System::Windows::Forms::TabPage());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->city = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->con_pass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->mydetails->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->mydetails);
			this->tabControl1->Controls->Add(this->sellproperty);
			this->tabControl1->Controls->Add(this->rentproperty);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(955, 688);
			this->tabControl1->TabIndex = 0;
			// 
			// mydetails
			// 
			this->mydetails->Controls->Add(this->label8);
			this->mydetails->Controls->Add(this->name);
			this->mydetails->Controls->Add(this->label7);
			this->mydetails->Controls->Add(this->city);
			this->mydetails->Controls->Add(this->label6);
			this->mydetails->Controls->Add(this->label5);
			this->mydetails->Controls->Add(this->contact);
			this->mydetails->Controls->Add(this->label2);
			this->mydetails->Controls->Add(this->con_pass);
			this->mydetails->Controls->Add(this->label3);
			this->mydetails->Controls->Add(this->pass);
			this->mydetails->Controls->Add(this->label4);
			this->mydetails->Controls->Add(this->email);
			this->mydetails->Controls->Add(this->label1);
			this->mydetails->Controls->Add(this->username);
			this->mydetails->Location = System::Drawing::Point(4, 22);
			this->mydetails->Name = L"mydetails";
			this->mydetails->Padding = System::Windows::Forms::Padding(3);
			this->mydetails->Size = System::Drawing::Size(947, 662);
			this->mydetails->TabIndex = 0;
			this->mydetails->Text = L"My Details";
			this->mydetails->UseVisualStyleBackColor = true;
			this->mydetails->Click += gcnew System::EventHandler(this, &profile::mydetails_Click);
			// 
			// sellproperty
			// 
			this->sellproperty->Location = System::Drawing::Point(4, 22);
			this->sellproperty->Name = L"sellproperty";
			this->sellproperty->Padding = System::Windows::Forms::Padding(3);
			this->sellproperty->Size = System::Drawing::Size(947, 662);
			this->sellproperty->TabIndex = 1;
			this->sellproperty->Text = L"My properties for sell";
			this->sellproperty->UseVisualStyleBackColor = true;
			// 
			// rentproperty
			// 
			this->rentproperty->Location = System::Drawing::Point(4, 22);
			this->rentproperty->Name = L"rentproperty";
			this->rentproperty->Size = System::Drawing::Size(947, 662);
			this->rentproperty->TabIndex = 2;
			this->rentproperty->Text = L"My properties for rent";
			this->rentproperty->UseVisualStyleBackColor = true;
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::SystemColors::Window;
			this->name->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(224, 267);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(200, 26);
			this->name->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(120, 270);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 18);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Name :";
			// 
			// city
			// 
			this->city->BackColor = System::Drawing::SystemColors::Window;
			this->city->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->city->Location = System::Drawing::Point(224, 429);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(200, 26);
			this->city->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(135, 432);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 18);
			this->label6->TabIndex = 27;
			this->label6->Text = L"City :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(58, 377);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 18);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Phone Number :";
			// 
			// contact
			// 
			this->contact->BackColor = System::Drawing::SystemColors::Window;
			this->contact->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->contact->Location = System::Drawing::Point(224, 374);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(200, 26);
			this->contact->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(122, 327);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 18);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Email :";
			// 
			// con_pass
			// 
			this->con_pass->BackColor = System::Drawing::SystemColors::Window;
			this->con_pass->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->con_pass->Location = System::Drawing::Point(224, 217);
			this->con_pass->Name = L"con_pass";
			this->con_pass->Size = System::Drawing::Size(200, 26);
			this->con_pass->TabIndex = 18;
			this->con_pass->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(92, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 18);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Password :";
			// 
			// pass
			// 
			this->pass->BackColor = System::Drawing::SystemColors::Window;
			this->pass->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pass->Location = System::Drawing::Point(224, 163);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(200, 26);
			this->pass->TabIndex = 17;
			this->pass->UseSystemPasswordChar = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(33, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 18);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Confirm Password :";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::SystemColors::Window;
			this->email->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(224, 324);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(200, 26);
			this->email->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(81, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 18);
			this->label1->TabIndex = 16;
			this->label1->Text = L"User Name :";
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::SystemColors::Window;
			this->username->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(224, 110);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(200, 26);
			this->username->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(45, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 30);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Edit Details";
			// 
			// profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 688);
			this->Controls->Add(this->tabControl1);
			this->Name = L"profile";
			this->Text = L"profile";
			this->tabControl1->ResumeLayout(false);
			this->mydetails->ResumeLayout(false);
			this->mydetails->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void mydetails_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
