#pragma once
using namespace System;
using namespace MySql::Data::MySqlClient;
ref class Database
{
public:
	MySqlConnection^ connection;
	Database(void);
	 bool login_verify(String^ user, String^ pass);// Function to check the login details.

	// int get_user_id(String^ user, String^ name, String^ contact); // Function to get the user id by sending username, Name, and contact as parameter.

	 void user_reg(String^ user, String^ pass, String^ name, String^ email, String^ contact, String^ location);//User registration function(Send all required columns as parameter in order)

	 void properties(array<System::String^> ^columns);// Function to add entries to the properties table. Send an array of Strings as parameter. If some column is to be left blank, then send "" instead.

	 array< Int64 >^ search(array<System::String^>^ props,int size);// Function to search for an entry in properties table. Send the parameters as array. "" should be send in place of those filters which are not to be included in search
	 																// This Function returns an Int32 array containing the ids of the resultant rows.	

	// String^ get_property_details(int id); // Get all details of property by sending the property id.
};

