// WAP to pass an object has an argument and return the object from the function a) use passs by value 
#include <iostream>
using namespace std;

class A
{
public:
    int x;
};

A fun(A o)
{
    o.x = o.x + 5;
    return o;
}

int main()
{
    A a1, a2;
    a1.x = 10;

    a2 = fun(a1);

    cout << a1.x << " " << a2.x;
    return 0;
}

