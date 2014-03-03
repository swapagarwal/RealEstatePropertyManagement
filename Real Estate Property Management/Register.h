#pragma once

namespace RealEstatePropertyManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
	private: System::Windows::Forms::Label^  label3;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(63, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"username";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(146, 59);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(63, 97);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"password";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(146, 94);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(63, 132);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"once more";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(146, 129);
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(104, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"sign me up!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Name = L"Register";
			this->Text = L"Create New Account";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=toor";
				 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDataBase1=gcnew MySqlCommand("Select * from repm.users where username='"+this->textBox3->Text+"';",conDataBase);
				 MySqlCommand^ cmdDataBase2=gcnew MySqlCommand("insert into repm.users (username,password) values('"+this->textBox3->Text+"','"+this->textBox4->Text+"'); ",conDataBase); 
				 MySqlDataReader^ MyReader1;
				 MySqlDataReader^ MyReader2;
				 int count=0;
				 try{
					 conDataBase->Open();
					 MyReader1=cmdDataBase1->ExecuteReader();
					 while(MyReader1->Read()){
						 count++;
					 }
					 //MessageBox::Show("done!!");
					 conDataBase->Close();
				 }catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }
				 try{
					 conDataBase->Open();
					 if(count==0){
						 if(textBox4->Text == textBox5->Text){
							 MyReader2=cmdDataBase2->ExecuteReader();
							 MessageBox::Show("success!");
							 //Form3^ f3 = gcnew Form3();
							 //f3->ShowDialog();
						 }
						 else{
							 MessageBox::Show("passwords don't match!");
						 }
					 }
					 else{
						 MessageBox::Show("username taken! try another one.");
						 textBox3->Text="";
					 }
				 }catch(Exception^ex){
					 MessageBox::Show(ex->Message);
				 }
			 }
};
}
