#include <iostream>
#include <string>
#include <list>
using namespace std;
class GPA_calculator
{
  private:
  	string name;
  	double marks, total_marks, credit_hours;
  public:
  		void Enter_data()
  	{
  		cout<<"Enter Name of subject\t"; cin >> name;
        cout << "Enter Marks of subject "<<name<<"\t"; cin >> marks;
        cout << "Enter Total Marks of "<<name<<"\t";;  cin >> total_marks;
        cout << "Enter credit Hour of "<<name<<"\t";cin >> credit_hours; 			
		  }
	void display_data()
	{
	cout<<"\t"<<name<<"\t\t"<<marks<<"\t\t"<<total_marks<<"\t\t\t"<<credit_hours<<endl;
	}	  
	double get_marks()
	{ return marks;	
	}
	double get_total_marks()
	{	return total_marks;
	}
	double get_credit_hours()
	{	return credit_hours;
	}
};
//*******************************************************************************
class CalculateGPA
{	private:
		GPA_calculator  gp[55];
		double total_credit_hours,no_subject,total_gpa, overall_gpa,gpa,total_smesters_gpa,smester_gpa,cgpa,percentage_cgpa;
		string student_id;
	public:
		CalculateGPA()
		{
		total_credit_hours=0;
		total_gpa=0;	
		}
	void Enter_student_id()
	{
		cout << "Enter Student ID: ";
		cin >> student_id;
	}
	string get_id()
	{
		return student_id;
	}
	void Enter_marks()
		{ 	cout<<"How many subject's data you want to enter: "; cin>>no_subject;
		
			for(int i=0;i<no_subject;i++)
			{
				gp[i].Enter_data();	
			}
		}
	void calculate_gpa()
		{
		for(int i=0;i<no_subject;i++){		
		double percentage = ((double)gp[i].get_marks()/gp[i].get_total_marks())*100;
		if(percentage >= 90 && percentage<=100)
			{	gpa = 4;
				}
		else if(percentage >= 85 && percentage<=89)
				{		gpa = 3.70;
				}
		else if(percentage >= 80&& percentage<=84)
			{		  gpa = 3.50;
		}
		else if(percentage >= 75 && percentage<=79)
		{	  gpa = 3.25;
				}
			else if(percentage >= 70 && percentage<=74)
{		  gpa = 3;
}
   	else if(percentage >=65 && percentage<=69)
   	{		  gpa = 2.75;
	   }
	else if(percentage >= 60 && percentage<=64)
	{	  gpa = 2.50;
	}
	else if(percentage >= 55 &&percentage<=59)
		{  gpa = 2.25;
					}
	else if(percentage >= 50&& percentage<=54)
	{		  gpa = 2.00;
	}
	else if(percentage >= 0 && percentage<=49)
	{		  gpa = 0;
	}
	else 
	{
		continue;
	}
        total_gpa += gpa * gp[i].get_credit_hours();
		total_credit_hours += gp[i].get_credit_hours();
			}
			 overall_gpa = total_gpa / total_credit_hours;
		}
void display_data()
		{
		cout<<"\n\tDisplaying Details of Subjects for Student ID: "<<student_id<<endl;
		cout<<"\tName\t\tMarks\t\tTotal Marks\t\tCredit Hours\n";
		for(int i=0;i<no_subject;i++)
		{ 
	        	gp[i].display_data();
			}
		 cout<<" Total credit hours:"<<total_credit_hours<<endl;
         cout<<" Total gpa is:"<<overall_gpa<<endl;
		}
	void calculate_CGPA()
		{double total_smesters;
          cout<<"Please enter the total number of smesters:";
          cin>>total_smesters;
          for(int i=0;i<total_smesters;i++)
          {
          	cout<<"Please Enter the GPA of smester "<<i+1<<endl;
          	cin>>smester_gpa;
          	total_smesters_gpa+=smester_gpa;
		  }
		  cgpa=total_smesters_gpa/total_smesters;
		  percentage_cgpa=(cgpa*25);
		 
		 		 cout<<"CGPA is:\t"<< cgpa<<endl;
		 cout<<"Percentage is:\t"<<percentage_cgpa<<"%"<<endl;
		    	}
};


