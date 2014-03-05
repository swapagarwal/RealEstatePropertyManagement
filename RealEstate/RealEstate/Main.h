#pragma once
#include "stdafx.h"
#include "Register.h"
#include "sell.h"
#include "Buy_form.h"
#include "Database.h"
namespace RealEstate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  login1;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  username;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Button^  login;




	private: System::Windows::Forms::Button^  REGISTER;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::RadioButton^  buy;
	private: System::Windows::Forms::RadioButton^  Sell;

	private: System::Windows::Forms::RadioButton^  rent;
	private: System::Windows::Forms::RadioButton^  rental;
	private: System::Windows::Forms::ComboBox^  city;
	private: System::Windows::Forms::Button^  go;



















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->login1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::Button());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->REGISTER = (gcnew System::Windows::Forms::Button());
			this->buy = (gcnew System::Windows::Forms::RadioButton());
			this->Sell = (gcnew System::Windows::Forms::RadioButton());
			this->rent = (gcnew System::Windows::Forms::RadioButton());
			this->rental = (gcnew System::Windows::Forms::RadioButton());
			this->city = (gcnew System::Windows::Forms::ComboBox());
			this->go = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(999, 52);
			this->label1->TabIndex = 0;
			// 
			// login1
			// 
			this->login1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->login1->BackColor = System::Drawing::Color::Transparent;
			this->login1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"login1.BackgroundImage")));
			this->login1->FlatAppearance->BorderSize = 0;
			this->login1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->login1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->login1->ForeColor = System::Drawing::Color::White;
			this->login1->Location = System::Drawing::Point(908, 12);
			this->login1->Name = L"login1";
			this->login1->Size = System::Drawing::Size(79, 29);
			this->login1->TabIndex = 1;
			this->login1->Text = L"Log In";
			this->login1->UseVisualStyleBackColor = false;
			this->login1->Click += gcnew System::EventHandler(this, &Main::login_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->login);
			this->panel1->Controls->Add(this->password);
			this->panel1->Controls->Add(this->username);
			this->panel1->Location = System::Drawing::Point(802, 55);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(185, 195);
			this->panel1->TabIndex = 3;
			this->panel1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(18, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(18, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"User Name";
			// 
			// login
			// 
			this->login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"login.BackgroundImage")));
			this->login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->login->FlatAppearance->BorderSize = 0;
			this->login->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->login->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->login->ForeColor = System::Drawing::Color::White;
			this->login->Location = System::Drawing::Point(21, 131);
			this->login->Margin = System::Windows::Forms::Padding(0);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(145, 28);
			this->login->TabIndex = 2;
			this->login->Text = L"Log In";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Main::login_Click_1);
			// 
			// password
			// 
			this->password->AcceptsTab = true;
			this->password->AllowDrop = true;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(20, 88);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(145, 21);
			this->password->TabIndex = 1;
			this->password->UseSystemPasswordChar = true;
			this->password->TextChanged += gcnew System::EventHandler(this, &Main::password_TextChanged);
			// 
			// username
			// 
			this->username->AcceptsTab = true;
			this->username->AllowDrop = true;
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(20, 32);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(145, 21);
			this->username->TabIndex = 0;
			// 
			// REGISTER
			// 
			this->REGISTER->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->REGISTER->BackColor = System::Drawing::Color::Transparent;
			this->REGISTER->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"REGISTER.BackgroundImage")));
			this->REGISTER->FlatAppearance->BorderSize = 0;
			this->REGISTER->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->REGISTER->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->REGISTER->ForeColor = System::Drawing::Color::White;
			this->REGISTER->Location = System::Drawing::Point(802, 12);
			this->REGISTER->Name = L"REGISTER";
			this->REGISTER->Size = System::Drawing::Size(97, 29);
			this->REGISTER->TabIndex = 4;
			this->REGISTER->Text = L"Sign Up";
			this->REGISTER->UseVisualStyleBackColor = false;
			this->REGISTER->Click += gcnew System::EventHandler(this, &Main::REGISTER_Click);
			// 
			// buy
			// 
			this->buy->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->buy->BackColor = System::Drawing::Color::Transparent;
			this->buy->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buy.BackgroundImage")));
			this->buy->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buy->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buy->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buy->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buy->ForeColor = System::Drawing::Color::Black;
			this->buy->Location = System::Drawing::Point(138, 255);
			this->buy->Name = L"buy";
			this->buy->Size = System::Drawing::Size(167, 90);
			this->buy->TabIndex = 6;
			this->buy->TabStop = true;
			this->buy->Text = L"I want to buy property";
			this->buy->UseVisualStyleBackColor = false;
			// 
			// Sell
			// 
			this->Sell->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Sell->BackColor = System::Drawing::Color::Transparent;
			this->Sell->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Sell.BackgroundImage")));
			this->Sell->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Sell->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Sell->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Sell->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Sell->ForeColor = System::Drawing::Color::Black;
			this->Sell->Location = System::Drawing::Point(342, 255);
			this->Sell->Name = L"Sell";
			this->Sell->Size = System::Drawing::Size(167, 90);
			this->Sell->TabIndex = 7;
			this->Sell->TabStop = true;
			this->Sell->Text = L"I want to sell property";
			this->Sell->UseVisualStyleBackColor = false;
			// 
			// rent
			// 
			this->rent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->rent->BackColor = System::Drawing::Color::Transparent;
			this->rent->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rent.BackgroundImage")));
			this->rent->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->rent->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rent->ForeColor = System::Drawing::Color::Black;
			this->rent->Location = System::Drawing::Point(548, 255);
			this->rent->Name = L"rent";
			this->rent->Size = System::Drawing::Size(167, 90);
			this->rent->TabIndex = 8;
			this->rent->TabStop = true;
			this->rent->Text = L"I want to rent property";
			this->rent->UseVisualStyleBackColor = false;
			// 
			// rental
			// 
			this->rental->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->rental->BackColor = System::Drawing::Color::Transparent;
			this->rental->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"rental.BackgroundImage")));
			this->rental->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rental->Cursor = System::Windows::Forms::Cursors::Hand;
			this->rental->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->rental->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->rental->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rental->ForeColor = System::Drawing::Color::Black;
			this->rental->Location = System::Drawing::Point(750, 255);
			this->rental->Name = L"rental";
			this->rental->Size = System::Drawing::Size(167, 90);
			this->rental->TabIndex = 9;
			this->rental->TabStop = true;
			this->rental->Text = L"I want a rental property";
			this->rental->UseVisualStyleBackColor = false;
			// 
			// city
			// 
			this->city->AllowDrop = true;
			this->city->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->city->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->city->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->city->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->city->FormattingEnabled = true;
			this->city->Location = System::Drawing::Point(463, 381);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(149, 30);
			this->city->TabIndex = 20;
			this->city->SelectedIndexChanged += gcnew System::EventHandler(this, &Main::city_SelectedIndexChanged);
			// 
			// go
			// 
			this->go->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->go->BackColor = System::Drawing::Color::Transparent;
			this->go->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"go.BackgroundImage")));
			this->go->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->go->FlatAppearance->BorderSize = 0;
			this->go->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->go->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->go->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->go->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->go->ForeColor = System::Drawing::Color::White;
			this->go->Location = System::Drawing::Point(502, 434);
			this->go->Name = L"go";
			this->go->Size = System::Drawing::Size(75, 30);
			this->go->TabIndex = 21;
			this->go->Text = L"GO";
			this->go->UseVisualStyleBackColor = false;
			this->go->Click += gcnew System::EventHandler(this, &Main::go_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(999, 607);
			this->Controls->Add(this->go);
			this->Controls->Add(this->city);
			this->Controls->Add(this->rental);
			this->Controls->Add(this->rent);
			this->Controls->Add(this->Sell);
			this->Controls->Add(this->buy);
			this->Controls->Add(this->REGISTER);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->login1);
			this->Controls->Add(this->label1);
			this->Name = L"Main";
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
public : Database db;
private: System::Void REGISTER_Click(System::Object^  sender, System::EventArgs^  e) {
			 //this->Hide();
			 //Register^ f2 = gcnew Register();
			 //f2->ShowDialog();
			 Register^ f2 = gcnew Register();
			 f2->ShowDialog();
		 }
private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->panel1->Visible == false)
			 {
				 this->panel1->Visible = true;
			 }
			 else
			 {
				 this->panel1->Visible = false;
			 }
		 }
private: System::Void city_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {
			 array<String^>^ cities={"Agra","Raipur","Gwalior","Bhopal","Indore","Churu","Calcutta","Delhi","Guwahati","Jaipur",};
			 city->BeginUpdate();
   for ( int i = 0; i < 10; i++ )
   {
      city->Items->Add(cities[i]);
   }
   city->EndUpdate();
		 }
private: System::Void login_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 if(db.login_verify(username->Text,password->Text)==true)
			 {
				 array<String^>^ details=db.get_user_details(username->Text,password->Text);
				 MessageBox::Show("Welcome, "+details[3]);
			 }
			 else
				 MessageBox::Show("Wrong Details");
		 }
private: System::Void password_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void go_Click(System::Object^  sender, System::EventArgs^  e) {
			 sell^ f2 = gcnew sell();
			 f2->ShowDialog();
		 }
};
}

