#include <iostream>
using namespace std;

class Person
{
public:
    void show()
    {
        cout << "This is a person" << endl;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << "This is a student" << endl;
    }
};

int main()
{
    Person p;
    p.show();

    Student s;
    s.show();
    s.display();

    return 0;
}
