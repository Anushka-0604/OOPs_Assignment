// wap to swap private members of two classes using friend function
#include <iostream>
using namespace std;

class B;

class A
{
    int x;
public:
    void set(int a){ x = a; }
    void show(){ cout << "A x = " << x << endl; }
    friend void swap(A &, B &);
};

class B
{
    int y;
public:
    void set(int b){ y = b; }
    void show(){ cout << "B y = " << y << endl; }
    friend void swap(A &, B &);
};

void swap(A &a, B &b)
{
    int t = a.x;
    a.x = b.y;
    b.y = t;
}

int main()
{
    A a;
    B b;

    a.set(5);
    b.set(10);

    a.show();
    b.show();

    swap(a, b);

    a.show();
    b.show();

    return 0;
}

 
