#pragma once
#include "Database.h"
namespace RealEstate {

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
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  username;
	protected: 

	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  email;


	protected: 



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  pass;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  con_pass;







	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  contact;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  city;
	private: System::Windows::Forms::Button^  signup;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  name;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->con_pass = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->city = (gcnew System::Windows::Forms::TextBox());
			this->signup = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// username
			// 
			this->username->BackColor = System::Drawing::SystemColors::Window;
			this->username->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(154, 12);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(200, 26);
			this->username->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(51, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(3, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Confirm Password :";
			// 
			// email
			// 
			this->email->BackColor = System::Drawing::SystemColors::Window;
			this->email->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(152, 189);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(200, 26);
			this->email->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(62, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password :";
			// 
			// pass
			// 
			this->pass->BackColor = System::Drawing::SystemColors::Window;
			this->pass->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->pass->Location = System::Drawing::Point(154, 53);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(200, 26);
			this->pass->TabIndex = 2;
			this->pass->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(90, 192);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Email :";
			// 
			// con_pass
			// 
			this->con_pass->BackColor = System::Drawing::SystemColors::Window;
			this->con_pass->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->con_pass->Location = System::Drawing::Point(154, 98);
			this->con_pass->Name = L"con_pass";
			this->con_pass->Size = System::Drawing::Size(200, 26);
			this->con_pass->TabIndex = 3;
			this->con_pass->UseSystemPasswordChar = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(28, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 18);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Phone Number :";
			// 
			// contact
			// 
			this->contact->BackColor = System::Drawing::SystemColors::Window;
			this->contact->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->contact->Location = System::Drawing::Point(154, 231);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(200, 26);
			this->contact->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(105, 278);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"City :";
			// 
			// city
			// 
			this->city->BackColor = System::Drawing::SystemColors::Window;
			this->city->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->city->Location = System::Drawing::Point(154, 275);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(200, 26);
			this->city->TabIndex = 7;
			// 
			// signup
			// 
			this->signup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->signup->FlatAppearance->BorderSize = 0;
			this->signup->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->signup->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->signup->ForeColor = System::Drawing::Color::White;
			this->signup->Location = System::Drawing::Point(154, 339);
			this->signup->Name = L"signup";
			this->signup->Size = System::Drawing::Size(180, 29);
			this->signup->TabIndex = 8;
			this->signup->Text = L"Sign Up";
			this->signup->UseVisualStyleBackColor = false;
			this->signup->Click += gcnew System::EventHandler(this, &Register::signup_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(90, 144);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 18);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Name :";
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::SystemColors::Window;
			this->name->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name->Location = System::Drawing::Point(154, 144);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(200, 26);
			this->name->TabIndex = 4;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(210)), 
				static_cast<System::Int32>(static_cast<System::Byte>(210)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(378, 398);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->signup);
			this->Controls->Add(this->city);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->con_pass);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->username);
			this->Location = System::Drawing::Point(402, 100);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Database db;
private: System::Void Register_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void signup_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(pass->Text==con_pass->Text)
			 {
				 db.user_reg(username->Text,pass->Text,name->Text,email->Text,contact->Text,city->Text);
				 this->Close();
			 }
			 else
				MessageBox::Show("Passwords do not match !");
		 }
};
}
