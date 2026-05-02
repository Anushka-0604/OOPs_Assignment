// WAP to addd data objects of two diff classes using friend function 
#include <iostream>
using namespace std;

class B;

class A
{
    int x;
public:
    void set(int a){ x = a; }
    friend void add(A, B);
};

class B
{
    int y;
public:
    void set(int b){ y = b; }
    friend void add(A, B);
};

void add(A a, B b)
{
    cout << "Sum = " << a.x + b.y << endl;
}

int main()
{
    A a;
    B b;

    a.set(10);
    b.set(20);

    add(a, b);

    return 0;
}

