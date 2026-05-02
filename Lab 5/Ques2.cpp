#include <iostream>
using namespace std;

class Base
{
protected:
    int number;

public:
    void setNumber(int n)
    {
        number = n;
    }
};

class Derived : public Base
{
public:
    void showNumber()
    {
        cout << "Number is: " << number << endl;
    }
};

int main()
{
    Derived d;
    d.setNumber(10);
    d.showNumber();

    return 0;
}
