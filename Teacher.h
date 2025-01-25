#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher: public Person{
private:
    string Marrystatus,Gender,Subject ,Qualification,Timetable;      
public:
    void setData(){
       Person::setData();
        cout << "Enter Qualification: "<<endl;  cin >> Qualification;           
        cout << "Is Employee Married?: "<<endl;  cin >> Marrystatus;
        cout << "Enter Subject: "<<endl;  cin >> Subject;
        cout << "Enter Time Table: "<<endl; cin >> Timetable;
    }
    void displayData()
    {
       Person::displayData() ;
        cout<<"\tQualification is: "<<Qualification<<"\n\tMarry status of teacher is: "<<Marrystatus<<"\n\tSubject is:"<<Subject<<endl;                 
        cout<<"\tTime Table is: "<<Timetable<<endl;
    }
};

#endif 
