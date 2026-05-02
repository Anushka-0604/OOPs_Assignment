// WAP to pass an object has an argument and return the object from the function use pass by reference 
#include <iostream>
using namespace std;

class A
{
public:
    int x;
};

A add(A obj)
{
    obj.x = obj.x + 10;
    return obj;
}

int main()
{
    A a1, a2;

    a1.x = 5;
    a2 = add(a1);

    cout << a2.x << endl;

    return 0;
}

