// WAP to demonstrate the working of friend 
#include <iostream>
using namespace std;

class A
{
    int x;

public:
    void set(int a)
    {
        x = a;
    }

    friend void show(A);
};

void show(A a)
{
    cout << "Value of x = " << a.x << endl;
}

int main()
{
    A obj;
    obj.set(10);

    show(obj);

    return 0;
}

