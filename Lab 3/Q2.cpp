// wap to implement a) pointer to an object b) this operator : pratise both dot operator and arrow operator 
#include <iostream>
using namespace std;

class Student
{
    int rollno;
    float marks;

public:
    void set(int rollno, float marks)
    {
        this->rollno = rollno;
        this->marks = marks;
    }

    void show()
    {
        cout << "Roll No = " << rollno << endl;
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s1;
    Student *p;

    p = &s1;

    s1.set(1, 85.5);
    s1.show();

    p->set(2, 90.75);
    p->show();

    return 0;
}

