// Define a class rectangle with variables width and height of integer type along with the following void get data to initialise the
// object value and void calculate area function to calculate and display the area 
#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    void getData() {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }

    void calculateArea() {
        int area = width * height;
        cout << "Area of rectangle = " << area;
    }
};

int main() {
    Rectangle r;

    r.getData();
    r.calculateArea();

    return 0;
}

