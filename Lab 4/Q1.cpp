// Create a class named Rectangle with two data members length and breadth.
// The class has a function to calculate area = length * breadth.
// The class has three constructors:
// 1) No parameter constructor ? sets length and breadth to 0
// 2) Two parameter constructor ? assigns values to length and breadth
// 3) One parameter constructor ? assigns same value to both length and breadth
// Create objects using all three constructors and print their areas.

#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    Rectangle(int x)
    {
        length = x;
        breadth = x;
    }

    void area()
    {
        cout << "Area = " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(4);
    Rectangle r3(3, 5);

    r1.area();
    r2.area();
    r3.area();

    return 0;
}

