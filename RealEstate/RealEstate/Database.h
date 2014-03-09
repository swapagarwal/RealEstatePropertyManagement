#pragma once
using namespace System;
using namespace MySql::Data::MySqlClient;
ref class Database
{
public:
	MySqlConnection^ connection;
	Database(void);
	// Function to check the login details.
	 bool login_verify(String^ user, String^ pass);

	 // Function to get the user details by sending username and password as parameter.
	 array<String^>^ get_user_details(String^ user, String^ pass); 
	 
	 //User registration function(Send all required columns as parameter in order)
	 void user_reg(String^ user, String^ pass, String^ name, String^ email, String^ contact, String^ location);
	
	 // Function to add entries to the properties table. Send an array of Strings as parameter. If some column is to be left blank, then send "" instead.
	 void properties(array<System::String^> ^columns);
	
	 /*Function to search for an entry in properties table. Send the parameters as array. "" should be send in place of those filters which are not to be included in search.
	 This Function returns an Int32 array containing the ids of the resultant rows.
	 Format of props array : {"address","city","minimum vlaue of area","max value of area","minimum value of price","max value of price","sell/rent","image_path","floor_plan","map","username","min(#bhk)","max(#bhk)","type","decription","floor_number","total_floors","age"}
	 For searching for a particular #bhk send same value in min(#bhk) and max(#bhk)*/
	 array< Int64 >^ search(array<System::String^>^ props);

	 // Get all details of property by sending the property id.
	 array<String^>^ get_property_details(int id); 

	 void update_property_details(array<String^>^ details);

	 void delete_by_id(int id);
};

