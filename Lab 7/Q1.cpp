#include <iostream>
using namespace std;

class Polygon {
protected:
    int w, h;
public:
    void set_value(int a, int b) {
        w = a; h = b;
    }
    virtual int area() = 0; // pure virtual
};

class Rectangle : public Polygon {
public:
    int area() { return w * h; }
};

class Triangle : public Polygon {
public:
    int area() { return (w * h) / 2; }
};

int main() {
    Polygon *p;
    Rectangle r; Triangle t;

    r.set_value(4,5);
    t.set_value(4,5);

    p = &r;
    cout << "Rectangle: " << p->area() << endl;

    p = &t;
    cout << "Triangle: " << p->area() << endl;
}
