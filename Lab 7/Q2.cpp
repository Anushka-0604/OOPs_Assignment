#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {}
    virtual void display() {}
};

class Circle : public Shape {
public:
    void area() { cout << "Circle Area\n"; }
    void display() { cout << "Circle\n"; }
};

class Rectangle : public Shape {
public:
    void area() { cout << "Rectangle Area\n"; }
    void display() { cout << "Rectangle\n"; }
};

class Triangle : public Shape {
public:
    void area() { cout << "Triangle Area\n"; }
    void display() { cout << "Triangle\n"; }
};

int main() {
    Shape *s;
    Circle c; Rectangle r; Triangle t;

    s = &c; s->display(); s->area();
    s = &r; s->display(); s->area();
    s = &t; s->display(); s->area();
}
