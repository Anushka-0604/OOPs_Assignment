#include <iostream>
#include<cmath>
using namespace std;

class Area {
public:
    float triangle(float b, float h) {
        return 0.5 * b * h; // right angle
    }

    float triangle(float a) {
        return (1.73/4) * a * a; // equilateral
    }

    float triangle(float a, float b, float c) {
        float s = (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c)); // isosceles
    }
};

int main() {
    Area a;
    cout << a.triangle(3,4) << endl;
    cout << a.triangle(5) << endl;
    cout << a.triangle(5,5,6) << endl;
}
