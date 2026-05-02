#include <iostream>
using namespace std;

class Test {
    int x;

public:
    friend istream& operator>>(istream &in, Test &t) {
        cout << "Enter value: ";
        in >> t.x;
        return in;
    }

    friend ostream& operator<<(ostream &out, Test t) {
        out << "Value = " << t.x;
        return out;
    }
};

int main() {
    Test t;
    cin >> t;
    cout << t;
    return 0;
}
