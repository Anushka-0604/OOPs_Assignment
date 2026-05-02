//// Verify the following about destructor by writing a program:
// (i) Name should begin with tilde sign (~) and must match class name.
// (ii) There cannot be more than one destructor in a class.
// (iii) Destructors do not allow any parameter.
// (iv) Destructors do not have any return type.

#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Constructor called" << endl;
    }

    ~Test()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Test t;
    return 0;
}

