// WAP using Array of Objects to display area of multiple rectangles
#include<iostream>
using namespace std ;
class Rectangle
{
public:
    int length;
    int breadth;

    void input()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void area()
    {
        cout << "Area = " << length * breadth << endl;
    }
};
int main()
{

    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle r[n];  // WAP to pass an object has an argument and return the object from the function a) use passs by value b) use pass by reference 


    for (int i = 0; i < n; i++)
    {
        cout << "\nRectangle " << i + 1 << endl;
        r[i].input();
    }

    cout << "\nAreas of Rectangles:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Rectangle " << i + 1 << ": ";
        r[i].area();
    }
}

