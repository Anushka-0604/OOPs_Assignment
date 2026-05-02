#include <iostream>
using namespace std;

class LibraryUser {
public:
    string name, id;
};

class Student : public LibraryUser {
public:
    int grade;
    void display() {
        cout << "Student: " << name << " ID: " << id << " Grade: " << grade << endl;
    }
};

class Teacher : public LibraryUser {
public:
    string department;
    void display() {
        cout << "Teacher: " << name << " ID: " << id << " Dept: " << department << endl;
    }
};

int main() {
    Student s;
    s.name = "Anushka"; s.id = "S4"; s.grade = 10;
    s.display();

    Teacher t;
    t.name = "Sir"; t.id = "T1"; t.department = "OOPs";
    t.display();

    return 0;
}
