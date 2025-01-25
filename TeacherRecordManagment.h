#ifndef TRMS_H
#define TRMS_H
#include "Person.h"
#include "Teacher.h"
using namespace std;
class TeachersRecordManagementSystem {
private:
   Teacher teachers[55];
   string firstName,enter_id,lastName ,email ,password,enter_department;                 // teachers record managment class 
	int ch,choice,total;	
public:
	 TeachersRecordManagementSystem()
	 {
	 	total=0;                                    //default constructor 
	 }
	  int enterData() {
   
   	if(total==0)
    	{
       cout << "\t\t\tHow Many Teachers' Data Do You Want to Enter?" << endl; cin>>ch;
       total=total+ch;	                      // Enter data function 
       	for (int i = 0; i <ch; i++) {
           cout<<"Enter the detail of person:"<<i+1<<endl;      
           teachers[i].setData();	            
		}		 
	}
		else
		{   
        cout << "\t\t\tHow Many Teachers Data Do You Want to Enter Again?" << endl; cin>>ch;
	  int newtotal=total+ch; 
              for (int i = total; i <newtotal; i++) {
        	cout<<"Enter the detail of person:"<<i+1<<endl;     // if we want to enter the data again 
            teachers[i].setData();
		}total=newtotal;	
    }
    return total;
}
 void createAccount() {                        // create the account 
        cout << "\t\tCreate Account" << endl;
        cout << "Enter Your first name: "; cin >> firstName;
        cout << "Enter Your last name: ";cin >> lastName;
        cout << "Enter Your Email: "; cin >> email;
        cout << "Enter Your Password: ";cin >> password;
        cout << "Your account has been successfully created" << endl;
    }
void signIn() {                // verify/ sigin to your account with email and password 
        string email2, password2;        int rep = 0;
        do {
            cout << "\t\tSign in" << endl;
            cout << "Enter your email address: ";cin >> email2;
            cout << "Enter your Password: ";cin >> password2;
            if (email != email2 || password != password2) {
                cout << "You have entered wrong email or password. Please try again." << endl;
            } else {
                cout << "\t\t\tWelcome to Data Management System" << endl;
            }
            rep++;
        } while (email != email2 || password != password2);
    }
void showData() {
    	if(total==0)
    	{
    		cout<<"\t\t\tNo data is entered yet "<<endl;
		}
		else                       // show the data of all the teachers stored in an array  
      { 
      cout<<"Please press 1 To show data of all teachers:"<<endl;
      cout<<"Please press 2 To show Teachers of Department:"<<endl; cin>>choice;
          if(choice==1)
          {
     for (int i = 0; i < total; i++) {
    cout << "Data of Teacher: "<< i + 1 << endl;
    teachers[i].displayData();
        }
		  }
		  else if(choice==2)
		  {
		  	cout<<"Enter the Name of Department:  ";cin>>enter_department;
		  	{ 
		  	    for(int i=0;i<ch;i++)
		  	    {  
			  if (teachers[i].getDepartment() == enter_department) {
                    cout << "Data of teacher "<< i+1 <<"of department=="<< enter_department << endl;
       				teachers[i].displayData();
			  }
			  else 
			  {
			  	cout<<"Data not found"<<endl;
			  }
		} 	}}
        else 
		  {
		  	cout<<"Invalid choice.\n"<<endl;
		  }
         }
        }
void searchData() {
    		if(total==0)
    	{
    		cout<<"\t\t\tNo data is entered yet "<<endl;
		}
		else{                              // this is a function to search the data of a particular teacher 
		    string idd;                     //with a unique ID. 
            cout << "\t\t\tEnter the id of Teacher you want to Search: " << endl; cin >> idd;
            for (int i = 0; i < ch; i++) {
                if (teachers[i].getId() == idd) {
                    cout << "RESULT FOR TEACHER ID: " << idd << endl;
       				teachers[i].displayData();
                } }
		  }}
void updateData() {
          /*If we want to change the already entered data of any teacher 
       we access thsi by its ID only. Because there is a unique ID of any person*/
    		if(total==0)
    	{
    		cout<<"No data is entered yet "<<endl;
		}
     else{	   string Idupdate;
            cout << "\t\t\tEnter the Id of Employee which you want to update" << endl;cin >> Idupdate;
            for (int i = 0; i < ch; i++) {
                if (teachers[i].getId()== Idupdate) {
                    cout << "Previous Data: " << endl;
                    teachers[i].displayData();
                    cout << "Enter new data: " << endl;
                    teachers[i].setData();
                }   }
        }  }
 int deleteData()     // if the user want to delete the data which is stored in a array 
	 {
	 if(total==0)
	 {
	 	cout<<"No data is entered yet."<<endl;
		 }	
    else{
		 	cout<<"Enter 1 to delete all data of Teachers.\n"<<endl;
		 	cout<<"Enter 2 to delete data of single Teacher.\n"<<endl;
		 	cin>>choice;
		 	if(choice==1)
		 	{
	  int a;
      cout << "Are you Sure to Delete Data?" << endl;
      cout << "Press 1 to delete all record" << endl;
      cin >> a;
      if (a == 1) {
		  total=0;
    cout << "All record is deleted..!!" << endl;
      }
	   else
	    {
    cout << "Please Press 1 to Delete All Record" << endl; 
       }	
			 }
	 else if(choice==2)
			 {
			 	cout<<"Please Enter the ID of teacher"<<endl;cin>>enter_id;
			 	for(int i=0;i<total;i++)
			 	{
			 		if(teachers[i].getId()==enter_id)
			 		{
			 		for(int j=i;j<total-1;j++)
			 		{
			 			teachers[j]=teachers[j+1];
					 }
					 total--;
					 cout << "Removed: " << enter_id << endl;
                     break;
					 }
				}
			 }
			 else
			 {
			 	cout<<"Incorrect Input. Please input valid number."<<endl;
			 }
		 }
          return total;
    }
};

#endif
