// Redefine the previous program by creating array of object if the class rectangle  and calculate area of each object calling diff constructors also implement constructors default argument and destructor in the program
#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area = " << length * breadth << endl;
    }

    ~Rectangle()
    {
    }
};

int main()
{
    Rectangle r[3] = {
        Rectangle(),
        Rectangle(4),
        Rectangle(3, 5)
    };

    for (int i = 0; i < 3; i++)
    {
        r[i].area();
    }

    return 0;
}

