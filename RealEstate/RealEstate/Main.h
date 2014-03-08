#pragma once
#include "stdafx.h"
#include "Register.h"
#include "sell.h"
#include "Buy_form.h"
#include "Database.h"
#include "profile.h"

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
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Panel^  logoutpanel;


	private: System::Windows::Forms::Button^  Logout;
	private: System::Windows::Forms::Button^  myaccount;
























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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->logoutpanel = (gcnew System::Windows::Forms::Panel());
			this->myaccount = (gcnew System::Windows::Forms::Button());
			this->Logout = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->logoutpanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(952, 52);
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
			this->login1->Location = System::Drawing::Point(861, 12);
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
			this->panel1->Location = System::Drawing::Point(755, 55);
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
			this->login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->login->FlatAppearance->BorderSize = 0;
			this->login->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->login->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->login->ForeColor = System::Drawing::Color::Black;
			this->login->Location = System::Drawing::Point(-8, 131);
			this->login->Margin = System::Windows::Forms::Padding(0);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(196, 28);
			this->login->TabIndex = 2;
			this->login->Text = L"Log In";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Main::login_Click_1);
			this->login->MouseLeave += gcnew System::EventHandler(this, &Main::login_MouseLeave);
			this->login->MouseHover += gcnew System::EventHandler(this, &Main::login_MouseHover);
			// 
			// password
			// 
			this->password->AcceptsTab = true;
			this->password->AllowDrop = true;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(20, 97);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(145, 17);
			this->password->TabIndex = 1;
			this->password->UseSystemPasswordChar = true;
			this->password->Enter += gcnew System::EventHandler(this, &Main::password_Enter);
			this->password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Main::password_KeyDown);
			// 
			// username
			// 
			this->username->AcceptsTab = true;
			this->username->AllowDrop = true;
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(20, 32);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(145, 17);
			this->username->TabIndex = 0;
			this->username->Enter += gcnew System::EventHandler(this, &Main::username_Enter);
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
			this->REGISTER->Location = System::Drawing::Point(755, 12);
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
			this->buy->Location = System::Drawing::Point(115, 273);
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
			this->Sell->Location = System::Drawing::Point(319, 273);
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
			this->rent->Location = System::Drawing::Point(525, 273);
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
			this->rental->Location = System::Drawing::Point(727, 273);
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
			this->city->Location = System::Drawing::Point(440, 399);
			this->city->Name = L"city";
			this->city->Size = System::Drawing::Size(149, 30);
			this->city->TabIndex = 20;
			this->city->Text = L"City";
			this->city->SelectedIndexChanged += gcnew System::EventHandler(this, &Main::city_SelectedIndexChanged);
			this->city->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Main::city_MouseClick_1);
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
			this->go->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->go->ForeColor = System::Drawing::Color::White;
			this->go->Location = System::Drawing::Point(479, 452);
			this->go->Name = L"go";
			this->go->Size = System::Drawing::Size(75, 30);
			this->go->TabIndex = 21;
			this->go->Text = L"GO";
			this->go->UseVisualStyleBackColor = false;
			this->go->Click += gcnew System::EventHandler(this, &Main::go_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::White;
			this->linkLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->linkLabel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->linkLabel1->LinkColor = System::Drawing::Color::Silver;
			this->linkLabel1->Location = System::Drawing::Point(506, 12);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(434, 29);
			this->linkLabel1->TabIndex = 22;
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->linkLabel1->Visible = false;
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), 
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Main::linkLabel1_LinkClicked);
			this->linkLabel1->MouseLeave += gcnew System::EventHandler(this, &Main::linkLabel1_MouseLeave);
			this->linkLabel1->MouseHover += gcnew System::EventHandler(this, &Main::linkLabel1_MouseHover);
			// 
			// logoutpanel
			// 
			this->logoutpanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->logoutpanel->BackColor = System::Drawing::Color::Transparent;
			this->logoutpanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"logoutpanel.BackgroundImage")));
			this->logoutpanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->logoutpanel->Controls->Add(this->myaccount);
			this->logoutpanel->Controls->Add(this->Logout);
			this->logoutpanel->Location = System::Drawing::Point(784, 52);
			this->logoutpanel->Name = L"logoutpanel";
			this->logoutpanel->Size = System::Drawing::Size(158, 118);
			this->logoutpanel->TabIndex = 5;
			this->logoutpanel->Visible = false;
			// 
			// myaccount
			// 
			this->myaccount->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"myaccount.BackgroundImage")));
			this->myaccount->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->myaccount->Cursor = System::Windows::Forms::Cursors::Hand;
			this->myaccount->FlatAppearance->BorderSize = 0;
			this->myaccount->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->myaccount->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->myaccount->ForeColor = System::Drawing::Color::Black;
			this->myaccount->Location = System::Drawing::Point(-6, 21);
			this->myaccount->Margin = System::Windows::Forms::Padding(0);
			this->myaccount->Name = L"myaccount";
			this->myaccount->Size = System::Drawing::Size(167, 28);
			this->myaccount->TabIndex = 5;
			this->myaccount->Text = L"My Account";
			this->myaccount->UseVisualStyleBackColor = true;
			this->myaccount->Click += gcnew System::EventHandler(this, &Main::myaccount_Click);
			this->myaccount->MouseLeave += gcnew System::EventHandler(this, &Main::myaccount_MouseLeave);
			this->myaccount->MouseHover += gcnew System::EventHandler(this, &Main::myaccount_MouseHover);
			// 
			// Logout
			// 
			this->Logout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Logout.BackgroundImage")));
			this->Logout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Logout->FlatAppearance->BorderSize = 0;
			this->Logout->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Logout->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Logout->ForeColor = System::Drawing::Color::Black;
			this->Logout->Location = System::Drawing::Point(-6, 62);
			this->Logout->Margin = System::Windows::Forms::Padding(0);
			this->Logout->Name = L"Logout";
			this->Logout->Size = System::Drawing::Size(167, 28);
			this->Logout->TabIndex = 6;
			this->Logout->Text = L"Log Out";
			this->Logout->UseVisualStyleBackColor = true;
			this->Logout->Click += gcnew System::EventHandler(this, &Main::Logout_Click);
			this->Logout->MouseLeave += gcnew System::EventHandler(this, &Main::Logout_MouseLeave);
			this->Logout->MouseHover += gcnew System::EventHandler(this, &Main::Logout_MouseHover);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(952, 642);
			this->Controls->Add(this->logoutpanel);
			this->Controls->Add(this->linkLabel1);
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
			this->MinimumSize = System::Drawing::Size(900, 670);
			this->Name = L"Main";
			this->Text = L"Main";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->logoutpanel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
public : Database db;
		 array<String^>^ details;
private: System::Void REGISTER_Click(System::Object^  sender, System::EventArgs^  e) {
			 Register^ f2 = gcnew Register();
			 f2->ShowDialog();
		 }
private: System::Void login_Click(System::Object^  sender, System::EventArgs^  e) {
			 username->SelectionStart = 0;
			 username->SelectionLength = username->Text->Length;
			 if(this->panel1->Visible == false)
			 {
				 this->panel1->Visible = true;
				 username->Focus();
			 }
			 else
			 {
				 this->panel1->Visible = false;
			 }
		 }
private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
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
				 details=db.get_user_details(username->Text,password->Text);
				 //MessageBox::Show("Welcome, "+details[3]);
				 REGISTER->Visible = false;
				 linkLabel1->Text = details[1];
				 login1->Visible = false;
				 panel1->Visible = false;
				 linkLabel1->Visible = true;
			 }
			 else
			 {
				 MessageBox::Show("Wrong Details");
			 }
			 username->Text = "";                   //reset username text 
			 password->Text = "";                   //reset password text
		 }
private: System::Void go_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(buy->Checked==true)
			 {
				 Buy_form^ f3;
				 
				 f3=gcnew Buy_form(this);
				 f3->Show();
				 this->Hide();
			 }
			 if(Sell->Checked==true || rent->Checked==true)
			 {
				 if(linkLabel1->Text!="")
				 {
					 if(city->Text!="" && city->Text!="City")
					 {
						 sell^ f2;
						 this->Hide();
						 if(Sell->Checked==true)
							 f2 = gcnew sell(city->Text,linkLabel1->Text,"Sell",this,details[3]);
						 else
							 f2 = gcnew sell(city->Text,linkLabel1->Text,"Rent",this,details[3]);
						 f2->Show();
					 }
					 else
						 MessageBox::Show("Enter your city first.");
				 }
				 else
					 MessageBox::Show("You must login first to sell/rent a property");
			 }
		 }
private: System::Void password_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void linkLabel1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 linkLabel1->LinkColor = System::Drawing::Color::White;
		 }
private: System::Void linkLabel1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 linkLabel1->LinkColor = System::Drawing::Color::Silver;
		 }
private: System::Void password_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 //login if user press enter
			 if (e->KeyCode == Keys::Enter) {
				login_Click_1(sender, e);
			 }
		 }
private: System::Void username_Enter(System::Object^  sender, System::EventArgs^  e) {
			 //Highlight username text when focused
			 username->SelectionStart = 0;
			 username->SelectionLength = username->Text->Length;
		 }
private: System::Void password_Enter(System::Object^  sender, System::EventArgs^  e) {
			 //Highlight password text when focused
			 password->SelectionStart = 0;
			 password->SelectionLength = password->Text->Length;
		 }
private: System::Void Logout_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 Logout->ForeColor = System::Drawing::Color::White;
		 }
private: System::Void Logout_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 Logout->ForeColor = System::Drawing::Color::Black;
		 }
private: System::Void myaccount_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 myaccount->ForeColor = System::Drawing::Color::White;
		 }
private: System::Void myaccount_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 myaccount->ForeColor = System::Drawing::Color::Black;
		 }
private: System::Void login_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 login->ForeColor = System::Drawing::Color::Black;
		 }
private: System::Void login_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 login->ForeColor = System::Drawing::Color::White;
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 // Show myaccount and logout panel //
			 if(logoutpanel->Visible==false)
			 logoutpanel->Visible = true;
			 else
				 logoutpanel->Visible=false;
		 }
private: System::Void Logout_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Write code for logout //
			 //
			 linkLabel1->Visible = false;
			 linkLabel1->Text = "";
			 REGISTER->Visible = true;
			 login1->Visible = true;
			 logoutpanel->Visible = false;
		 }
private: System::Void myaccount_Click(System::Object^  sender, System::EventArgs^  e) {
			 logoutpanel->Visible = false;
			 profile^ f3 = gcnew profile();
			 f3->ShowDialog();
		 }
private: System::Void city_MouseClick_1(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		 city->Text = "";
		 }
private: System::Void city_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}