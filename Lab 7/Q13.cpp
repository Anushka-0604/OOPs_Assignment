#include <iostream>
#include <cmath>
using namespace std;

class Cartesian {
    float x, y;

public:
    void set(float a, float b) {
        x = a;
        y = b;
    }

    void show() {
        cout << "x = " << x << " y = " << y << endl;
    }
};

class Polar {
    float r, theta;

public:
    Polar(float r, float t) {
        this->r = r;
        this->theta = t;
    }

    operator Cartesian() {
        Cartesian c;
        c.set(r * cos(theta), r * sin(theta));
        return c;
    }
};

int main() {
    Polar p(10, 0.5);
    Cartesian c = p;

    c.show();
    return 0;
}
