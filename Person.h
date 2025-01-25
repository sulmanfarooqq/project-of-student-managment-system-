#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person {	 
private:
    string name, id, department, email, mobileNo, dob, address, age;
public:
    Person() {}
    void setData()
    {	
        cout << "Name is: " << endl; cin >> name;
        cout << "Age is: " << endl; cin >> age;
        cout << "Address is: " << endl; cin >> address;                               
        cout << "Enter id:" << endl; cin >> id;
        cout << "Date of birth is: " << endl; cin >> dob;
        cout << "Mobile Number is: " << endl; cin >> mobileNo;
        cout << "Email is: " << endl; cin >> email;
        cout << "Enter Department: " << endl; cin >> department;
    }
    void displayData() {
        cout << "\tID is:" << id << "\n\tFull Name: " << name << "\n\tAge is:" << age << "\n\tAddress: " << address << endl;               
        cout << "\n\tDate of Birth: " << dob << "\n\tMobile NO: " << mobileNo << "\n\tEmail Id: " << email << "\n\tDepartment is: " << department << endl;
    }
    string getId()
    {	return id;                                    
    } 
    string getDepartment()
    {	return department;
    }
};
#endif
