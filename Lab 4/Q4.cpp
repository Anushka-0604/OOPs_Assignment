#include <iostream>
using namespace std;

// Simple class
class Student {
public:
    int id;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
    }

    void display() {
        cout << "ID: " << id << endl;
    }
};

int main() {

    int *p = new int;
    *p = 10;
    cout << "Integer value: " << *p << endl;
    delete p;

    float *f = new float;
    *f = 5.5;
    cout << "Float value: " << *f << endl;
    delete f;

    int n = 3;
    int *arr = new int[n];
    cout << "Enter 3 integers: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Integer array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr;

    float *farr = new float[n];
    cout << "Enter 3 floats: ";
    for(int i = 0; i < n; i++)
        cin >> farr[i];

    cout << "Float array: ";
    for(int i = 0; i < n; i++)
        cout << farr[i] << " ";
    cout << endl;

    delete[] farr;

    Student *s = new Student;
    s->input();
    s->display();
    delete s;

   
    Student *sarr = new Student[n];
    cout << "Enter IDs for 3 students:\n";
    for(int i = 0; i < n; i++)
        sarr[i].input();

    cout << "Student IDs:\n";
    for(int i = 0; i < n; i++)
        sarr[i].display();

    delete[] sarr;

    return 0;
}
