// DEffrentiate btw private and public access specifier perform the q2 with class instead of structure having 
//data members as private(void validate cgpa) and some members as public

#include <iostream>
using namespace std;
class Student {
private:
    string name, degree, hostel;
    int rollNo;
    float cgpa;

    void validateCGPA() {
        if (cgpa < 0 || cgpa > 10) {
            cgpa = 0;
        }
    }
public:
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

        validateCGPA();
    }

    void updateDetails() {
        cout << "Enter new degree: ";
        cin >> degree;
        cout << "Enter new hostel: ";
        cin >> hostel;
    }

    void updateCGPA() {
        cout << "Enter updated CGPA: ";
        cin >> cgpa;
        validateCGPA();
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
