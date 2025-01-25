#ifndef RUN_H
#define RUN_H

#include "TeacherRecordManagment.h"
#include "StudentRecordManagement.h"
class Run_program {
	public:
	TeachersRecordManagementSystem trms;
	StudentRecordManagmentSystem srms;	
	string firstchoice,secondchoice,thirdchoice;
	void Run_Program()
	{
       cout << "\t\t\t\t*********Data Handling System*************" << endl;
       cout<<"\t\t\t\tPlease create your account:\n" <<endl;trms.createAccount();
       cout<<"\t\t\t\tPlease verify/sigIn your account:\n"<<endl;trms.signIn();
	  while(true)
	  {
	  	cout<<"Please Enter 1 if you want to manage data of Teachers\n "<<endl;
        cout<<"Please Enter 2 if you want to manage data of Students\n "<<endl;
        cout<<"Please Enter 3 if you want to EXIT...\n"<<endl;
        cin>>firstchoice;
        if(firstchoice=="1")  {
	  manage_teacher_records(trms);
} 
       else if(firstchoice=="2")
{
	  manage_student_records(srms);
}
       else if(firstchoice=="3")
		{
			  if (secondchoice != "0")
			  cout<<"Thanks for using data handling system"<<endl;
                cout<<"Exiting....";
                break;
		}
		else
		{
			cout<<" You have entered invalid number.\n"<<endl;
			cout<<"Please enter the valid number."<<endl;
		}
	}
}
   private:
void manage_teacher_records(TeachersRecordManagementSystem& trms)
{
    for(int i=0; ;i++)
	    {
          cout<<"Enter key 1 To Enter the data\n"<<"Enter key 2 To Show the data"<<endl;	
		  cout<<"Enter key 3 To Search the data\n"<<"Enter key 4 To Update the data"<<endl;	
          cout<<"Enter key 5 To Delete the data"<<endl;
          cout<<"Enter key 6 to Exit from this phase"<<endl;cin >>secondchoice;
       {
		  if(secondchoice=="1")
      {	
	  	trms.enterData();
      }
      else if(secondchoice=="2")
      {
	    trms.showData();
          	}
		else if(secondchoice== "3")
		{
		trms.searchData() ;
		}
	   else if(secondchoice=="4")
	   {
				trms.updateData();
					}
		else if(secondchoice=="5")
		{
		  trms.deleteData();
	    	}
		else if (secondchoice == "6")
		{
            	if (secondchoice != "0")
            cout<<"Exiting....from teachers data handling phase\n";
            cout<<"\n";
            break;
            }
		else
			{
			cout<<"Invalid Input.\n"<<endl;
			cout<<"Please enter the valid number.\n"<<endl;
				}
			 }
		} 
    }
void manage_student_records(StudentRecordManagmentSystem &srms)
	{
			for(int i=0;;i++)
			{			
		  cout<<"Select the number for student data handling.\n"<<"Enter key 1 To Enter the data"<<endl;
		  cout<<"Enter key 2 To Display the data"<<endl;	
          cout<<"Enter key 3 To Show the data of single department"<<endl;	
          cout<<"Enter key 4 To search data"<<endl;
		  cout<<"\tEnter key 5 To Enter the marks of student"<<endl;
		  cout<<"\tEnter key 6 To show the GPA of student "<<endl;
		  cout<<"\tEnter key 7 To Calculate CGPA of student "<<endl;
          cout<<"Enter key 8 to delete the data of a student\n"<<"Enter 9 for EXIT."<<endl;
		cin>>thirdchoice;
		{	
		if(thirdchoice=="1")
		{
			srms.enterpersonaldata();
		}
		else if(thirdchoice=="2")
		{
	        srms.displaystudentdata();
		}
		else if(thirdchoice=="3")
		{
		     srms.showdata();
		
		}
		else if(thirdchoice=="4")
		{
			srms.searchdata();
		}
		else if(thirdchoice=="5")
		{
		srms.Enter_marks();	
		}
		else if(thirdchoice=="6")
		{
			srms.display_gpa();
		}
		else if(thirdchoice=="7")
		{
			srms.calculate_cgpa();
		}
		else if(thirdchoice=="8")
		{
			srms.deleteData();
		}
		else if(thirdchoice=="9")
		{
		 if (thirdchoice != "0")
            cout<<"Exiting....from students data handling phase\n";
            cout<<"\n";
            break;	
		}
		else 
		{
			cout<<"\t\t\tInvalid number input"<<endl;
		}
		}}}
	};
#endif
