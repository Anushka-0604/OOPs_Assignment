#include <iostream>
using namespace std;

class A {
public:
    void showA() { cout << "A\n"; }
};

class B : public A {
public:
    void showB() { cout << "B\n"; }
};

class C : public B {
public:
    void showC() { cout << "C\n"; }
};


class D {
public:
    void showD() { cout << "D\n"; }
};

class E : public A, public D {
public:
    void showE() { cout << "E\n"; }
};


class F : public A {};
class G : public A {};

int main() {

  
    C obj1;
    obj1.showA();
    obj1.showB();
    obj1.showC();

    E obj2;
    obj2.showA();
    obj2.showD();
    obj2.showE();

    F obj3;
    G obj4;
    obj3.showA();
    obj4.showA();

    return 0;
}
