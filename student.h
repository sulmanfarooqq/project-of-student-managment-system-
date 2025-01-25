#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

using namespace std;
class Student:public Person{
	private:
	string session,smester, department;
public:
	    void setpersonaldata()
		{   Person::setData();
			cout<<"Enter the Department:"<<endl;cin>>department;
			cout<<"Enter the session:"<<endl;cin>>session;
			cout<<"Enter the smester:"<<endl;cin>>smester;
		}
		void diplaypersonaldata()
		{
		Person::displayData();
			cout<<"\tDepartment is:"<<department<<"\n\tSession is:"<<session<<"\n\tSmester is:"<<smester<<endl;		
		}
	    string setdepartment()
		{	return department;
		}
		string setsession()
		{	return session;
		}
		string setsmester()
		{	return smester;
		}			
};
#endif

	
