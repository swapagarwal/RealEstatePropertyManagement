#include "StdAfx.h"
#include "Database.h"
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

Database::Database(void)
{
	String^ constring="datasource=127.0.0.1;port=3306;user=root;password=toor"; // Defining Connection. Change the name of database, port, username and password before using
	connection=gcnew MySqlConnection(constring);
}
bool Database::login_verify(String^ user, String^ pass) // Function to check the login details.
		  {
			  if(user=="" || pass=="")
				  return false;
			  String^ s="SELECT * from repm.users where username='"+user+"' and password='"+pass+"';";//Change the table name from "repm.Users" to "YOUR_DATBASE.YOUR_TABLE"
			  MySqlCommand^ cmd=gcnew MySqlCommand(s,connection);
			  MySqlDataReader^ mydata;
			  try
			  {
				cmd->Connection->Open();
				  int count=0;
				  mydata=cmd->ExecuteReader();
					while(mydata->Read())
					{
						++count;
					}
					cmd->Connection->Close();
					if(count>=1)
						return true;
					else
						false;
			  }
			  catch(Exception^ex)
			  {
				  cmd->Connection->Close();
				  MessageBox::Show(ex->Message);
			  }
		  }
	 void Database:: user_reg(String^ user, String^ pass, String^ name, String^ email, String^ contact, String^ location) //User registration function(Send all required columns as parameter in order)
	 {
		 String^ s="INSERT into repm.users (`username`,`password`,`name`,`email`,`contact`,`location`) VALUES ('"+user+"','"+pass+"','"+name+"','"+email+"','"+contact+"','"+location+"')";
		 MySqlCommand^ cmd=gcnew MySqlCommand(s,connection);
		 try
		 {
			 cmd->Connection->Open();
			 cmd->ExecuteNonQuery();
			 cmd->Connection->Close();
		 }
		 catch(Exception^ex)
		 {
			 cmd->Connection->Close();
			 MessageBox::Show(ex->Message);
		 }
	 }
	 void Database:: properties(array<String^>^ columns) // Function to add entries to the properties table. Send an array of Strings as parameter. If some column is to be left blank, then send "" instead.
	 {
		 array<String^>^ names={"address","city","area","price","sell_rent","image_path","floor_plan","map","username","bhk","type","decription","floor_number","total_floors","age"};
		 String^ s="INSERT into repm.properties(";
		 for(int i=0;i<15;i++)
		 {
			 s=s+"`"+names[i]+"`";
			 if(i!=14)
				 s=s+",";
			 else
				 s=s+")";
		 }
		 s=s+"VALUES(";
		 for(int i=0;i<15;i++)
		 {
			 s=s+"'"+columns[i]+"'";
			 if(i!=14)
				 s=s+",";
			 else
				 s=s+")";
		 }
		 s=s+";";
		 MySqlCommand^ cmd=gcnew MySqlCommand(s,connection);
		 try
		 {
			 cmd->Connection->Open();
			cmd->ExecuteNonQuery();
			cmd->Connection->Close();
		 }
		 catch(Exception^ ex)
		 {
			 cmd->Connection->Close();
			 MessageBox::Show(ex->Message);
		 }
	 }
	  array< Int64 >^ Database::search(array<String^>^ props) // Function to search for an entry in properties table. Send the parameters as array. "" should be send in place of those filters which are not to be included in search
	 {														// This Function returns an Int32 array containing the ids of the resultant rows.	
		 array<String^>^ names={"address","city","area","price","sell_rent","image_path","floor_plan","map","username","bhk","type","decription","floor_number","total_floors","age"};
		 String^ query="SELECT * From repm.properties WHERE ";
		int count=0;
		int k=0;
		 for(int i=0;i<18;i++)
		 {
			 if(props[i]!="")
			 {
				 if(count==0)
				 {
					 if(i==2 || i==4 || i==11)
					 {query=query+names[k]+">='"+props[i]+"' AND "+names[k]+"<='"+props[i+1]+"'";++i;}
					 else if(i==17)
						 query=query+names[k]+"<='"+props[i]+"'";
					 else
						 query=query+names[k]+"='"+props[i]+"'";
					 ++k;
					 ++count;
				 }
				 else
				 {
					 if(i==2 || i==4 || i==11)
					 {query=query+" AND "+names[k]+">='"+props[i]+"' AND "+names[k]+"<='"+props[i+1]+"'";++i;}
					 else if(i==17)
						 query=query+" AND "+names[k]+"<='"+props[i]+"'";
					 else
						 query=query+" AND "+names[k]+"='"+props[i]+"'";
					 ++k;
				 }
			 }
			 else
			 {
				 ++k;
				  if(i==3 || i==5 || i==12)
					  --k;
			 }
		 }
		 query=query+";";
		 MessageBox::Show(query);
		 MySqlCommand^ cmd=gcnew MySqlCommand(query,connection);
		 MySqlCommand^ rows=gcnew MySqlCommand("SELECT Found_Rows()",connection);
		 MySqlDataReader^ mydata;
		 MySqlDataReader^ no_rows;
		 array<Int64>^ ids;
		 cmd->Connection->Open();
		 try
		 {
			 mydata=cmd->ExecuteReader();
			 cmd->Connection->Close();
			 rows->Connection->Open();
			 no_rows=rows->ExecuteReader();
			 no_rows->Read();
			 rows->Connection->Close();
			cmd->Connection->Open();
			mydata=cmd->ExecuteReader();
			ids=gcnew array<Int64>(1000);
			for(int i=0;i<1000;i++)
				ids[i]=(-1);
			int i;
			 for(i=1;mydata->Read();++i)
				 ids[i]=mydata->GetInt64(0);
			 ids[0]=i-1;
		 }
		 catch (Exception^ ex)
		 {
			 cmd->Connection->Close();
			 MessageBox::Show(ex->Message);
		 }
		 cmd->Connection->Close();
		 return ids;
	  }
	 array<String^>^ Database::get_user_details(String^ user, String^ pass)
	 {
		 String^ s="Select * From repm.users where username='"+user+"' and password='"+pass+"';";
		 MySqlCommand^ cmd=gcnew MySqlCommand(s,connection);
		 MySqlDataReader^ mydata;
		 try
		 {
		 cmd->Connection->Open();
		 mydata=cmd->ExecuteReader();
		 mydata->Read();
		 }
		 catch(Exception^ ex)
		 {
			 cmd->Connection->Close();
			 MessageBox::Show(ex->Message);
		 }
		 array<String^>^ details=gcnew array<String^>(7);
		 for(int i=0;i<7;i++)
			 details[i]=mydata->GetString(i);
		 cmd->Connection->Close();
		 return details;
	 }
	 array<String^>^ Database::get_property_details(int id)
	 {
		 String^ s="Select * From repm.properties where id='"+id+"';";
		 MySqlCommand^ cmd=gcnew MySqlCommand(s,connection);
		 MySqlDataReader^ mydata;
		 array<String^>^ details=gcnew array<String^>(16);
		 try
		 {
			 cmd->Connection->Open();
			 mydata=cmd->ExecuteReader();
			 mydata->Read();
			 for(int i=0;i<16;i++)
				 details[i]=mydata->GetString(i);
		 }
		 catch(Exception^ ex)
		 {
			cmd->Connection->Close();
			 MessageBox::Show(ex->Message);
		 }
		 cmd->Connection->Close();
		 return details;
	 }