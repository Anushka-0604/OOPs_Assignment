#include <iostream>
using namespace std;

class Student {
public:
    virtual void show() = 0;
};

class Engineering : public Student {
public:
    void show() { cout << "Engineering\n"; }
};

class Medicine : public Student {
public:
    void show() { cout << "Medicine\n"; }
};

class Science : public Student {
public:
    void show() { cout << "Science\n"; }
};

int main() {
    Student *arr[3];
    Engineering e; Medicine m; Science s;

    arr[0] = &e;
    arr[1] = &m;
    arr[2] = &s;

    for(int i=0;i<3;i++)
        arr[i]->show();
}
