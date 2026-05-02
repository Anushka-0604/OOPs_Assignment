#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Staff : virtual public Person {
public:
    int emp_id;
};

class Student : virtual public Person {
public:
    int student_id;
};

class TeachingAssistant : public Staff, public Student {
public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Emp ID: " << emp_id << endl;
        cout << "Student ID: " << student_id << endl;
    }
};

int main() {
    TeachingAssistant ta;
    ta.name = "Anushka";
    ta.emp_id = 386;
    ta.student_id = 202;

    ta.display();
    return 0;
}
