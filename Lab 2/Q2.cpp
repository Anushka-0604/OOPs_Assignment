// Create a structure in cpp containing the details of student  and a main function to execute a structure 
// data memenber has name roll no degree hostel and current cgpa 
// member function : add details, update details,update cgpa,void display details

#include <iostream>
using namespace std ;

struct Student {
    string name, degree, hostel;
    int rollNo;
    float cgpa;
    
    void addDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter degree: ";
        cin >> degree;
        cout << "Enter hostel: ";
        cin >> hostel;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }
     void updateDetails() 
	{
        cout << "Enter new degree: ";
        cin >> degree;
        cout << "Enter new hostel: ";
        cin >> hostel;
    }
    void updateCGPA() 
	{
        cout << "Enter updated CGPA: ";
        cin >> cgpa;
    }
    void displayDetails() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};
int main() {
    Student s;

    s.addDetails();
    s.updateDetails();
    s.updateCGPA();
    s.displayDetails();

    return 0;
}


