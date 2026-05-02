#include <iostream>
using namespace std;

class Base {
public:
    int a;

protected:
    int b;

private:
    int c;

public:
    Base() {
        a = 1;
        b = 2;
        c = 3;
    }
};

// Public Inheritance
class PublicDerived : public Base {
public:
    void show() {
        cout << "Public Inheritance:\n";
        cout << "a = " << a << endl; 
        cout << "b = " << b << endl; 
        // cout << c; // NOT accessible
    }
};

// Protected Inheritance
class ProtectedDerived : protected Base {
public:
    void show() {
        cout << "\nProtected Inheritance:\n";
        cout << "a = " << a << endl; 
        cout << "b = " << b << endl; 
    }
};

// Private Inheritance
class PrivateDerived : private Base {
public:
    void show() {
        cout << "\nPrivate Inheritance:\n";
        cout << "a = " << a << endl; 
        cout << "b = " << b << endl; 
    }
};

int main() {
    PublicDerived obj1;
    obj1.show();

    ProtectedDerived obj2;
    obj2.show();

    PrivateDerived obj3;
    obj3.show();

    return 0;
}
