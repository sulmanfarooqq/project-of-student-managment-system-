#ifndef SRMS_H
#define SRMS_H
#include "student.h"
#include "GPA.h"


using namespace std;
class StudentRecordManagmentSystem
{
		CalculateGPA std[55];
		Student student[55];
	   	int total, ch,choice,tot;
		string enterdepartment,enter_session,enter_smester,rollno,enter_id_student;
		 public:
    	StudentRecordManagmentSystem()
    	{
    		total=0;
		}
   	int enterpersonaldata()
	{
		if(total==0)
		{
		 cout<<"\t\t\tHow many students data you wants to enter:";cin>>ch;
		 total= total+ch;
		 for(int i=0;i<ch;i++)
		 {
		 	cout<<"Enter the personal data of student=="<<i+1<<endl;
		 	student[i].setpersonaldata();
		 }	
		}
		else 	
		{
			cout<<"\t\t\tHow many students data you want to Enter Again:";cin>>ch;
			int newtotal=total+ch;
			for(int i= total;i<newtotal;i++)
			{
			cout<<"Enter the personal data of student=="<<i+1<<endl;
 	        student[i].setpersonaldata();
			}
			total=newtotal;
		}	
	     return total;
		 }	
		 void displaystudentdata()
		 { 
		 if(total==0)
		 {
		 	cout<<"\t\t\tNo data is entered yet."<<endl;
		 }
		 else
		 {
		 	for(int i=0;i<total;i++)
		 	{
		 		cout<<"Data of Student=="<<i+1<<endl;
		 		student[i].diplaypersonaldata();
			 }
		 }
	}
void showdata()
	 {
	   if(total==0)
	   {
	   	cout<<"No data is entered yet"<<endl;
	   }
	   else
	   {	cout<<"Please enter the name of a department which you want to search:";cin>>enterdepartment;
	 		 for(int i=0;i<total;i++)
	 		 {
	 		 	if(student[i].setdepartment()==enterdepartment)
	 		 	{
	 		 		cout<<"Data for the students of department "<<enterdepartment<<endl;
	 		 	    cout<<"Enter key 1, if you want to show by Session:"<<"\nEnter key 2, if you want to show by Smester:"<<endl;cin>>choice;
	 		 	    if(choice==1)
	 		 	    {
	 		 	    	cout<<"Please Enter the Session of students:"<<endl;
						  cin>>enter_session;
	 		 	    	cout<<"Here is the data of a Session "<<enter_session<<endl;
	 		 	    	for(i=0;i<total;i++)
	 		 	    	{  
                        if (student[i].setdepartment() == enterdepartment && student[i].setsession() == enter_session) {
	 		 	    		student[i].diplaypersonaldata();
	 		 	    		cout<<"\n";
	 		 	    	}
	 		 	    		else 
	 		 	    		cout<<"Incorrect session format is {22-26}or{2022-2026}"<<endl;
						  }
					  }
					  else if(choice==2)
					  {
					    cout<<"Please Enter the Smester of students:"<<endl; cin>>enter_smester;
	 		 	    	cout<<"Here is the data of a Smesetr "<<enter_smester<<endl;
	 		 	    	for(i=0;i<total;i++)
	 		 	    	{
	 		 	    	if(student[i].setdepartment() == enterdepartment && student[i].setsmester()==enter_smester)
	 		 	    {
						  student[i].diplaypersonaldata();
						}
	 		 	    		else 
	 		 	    	{
						cout<<"Incorrect smester Name\nFormat is {1st}or{first}"<<endl;
					}}}	   		 		
				  }
	 else 
	 {
       cout<<"\t\t\tIncorrect name of department."<<endl;
				  }
				   }
		 }
	}
void searchdata()
	{
		if(total==0)
		{
			cout<<"No data is entered yet"<<endl;
		}
		else 
		{   string rollno;
			cout<<"please enter the ROLL NUMBER of student. ";cin>>rollno;
			for(int i=0;i<total;i++)
			{	
			if(student[i].getId()==rollno)
			{
				cout<<"Data of a student of Roll No:"<<rollno<<endl;
				student[i].diplaypersonaldata();
			}
			else
			{
				cout<<"\t\t\tInvalid input"<<endl;
			}
		}
	}
}
 int deleteData()     // if the user want to delete the data which is stored in a array 
	 {
	 if(total==0)
	 {
	 	cout<<"No data is entered yet."<<endl;
		 }	
    else{
		 	cout<<"Enter 1 to delete all data of Students.\n"<<"Enter 2 to delete data of single Student.\n"<<endl;	cin>>choice;
		 	if(choice==1)
		 	{
	  int a;
      cout << "Are you Sure to Delete Data?\n"<< "Press 1 to delete all record" << endl;cin >> a;
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
			 	cout<<"Please Enter the ID of student"<<endl;
			 	cin>>enter_id_student;
			 	for(int i=0;i<total;i++)
			 	{
			 		if(student[i].getId()==enter_id_student)
			 		{
			 		for(int j=i;j<total-1;j++)
			 		{
			 			student[j]=student[j+1];
					 }
					 total--;
					 cout << "Removed: " << enter_id_student << endl;
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
int Enter_marks()
    {
   cout<<"how many students data you want to Enter marks"<<endl;cin>>tot;
   for(int i=0;i<tot;i++)
   {
    cout << "Enter data for student " << i + 1 << endl;
    std[i].Enter_student_id();
    std[i].Enter_marks();
    std[i].calculate_gpa();
      }
       return tot;
	}
void display_gpa()
		{
				string rollno;
				cout<<"please enter the ROLL NUMBER of student which you have to show result. "<<endl;cin>>rollno;
				for(int i=0;i<tot;i++)
				{
				if(std[i].get_id()==rollno)
				{
				std[i].display_data();	
		}
		else
			{
			
				cout<<"ID is not found"<<endl;
			}
			}
	}	
void calculate_cgpa()
	{
			string rollno;
			cout<<"please enter the ROLL NUMBER of student which you have to calculate CGPA "<<endl;cin>>rollno;
			for(int i=0;i<tot;i++)
			{
			
			if(std[i].get_id()==rollno)
			{
			std[i].calculate_CGPA();	
			}
			else 
			{
				cout<<"ID not found"<<endl;
			}
	}
}
};
#endif	
