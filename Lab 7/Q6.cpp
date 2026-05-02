#include <iostream>
using namespace std;

class STRING {
    string s;
public:
    STRING(string x="") { s = x; }

    bool operator==(STRING obj) {
        return s == obj.s;
    }

    STRING operator+(STRING obj) {
        return STRING(s + obj.s);
    }

    void show() { cout << s << endl; }
};

int main() {
    STRING a("Hello"), b("World");

    (a==b) ? cout<<"Equal\n" : cout<<"Not Equal\n";

    STRING c = a + b;
    c.show();
}
