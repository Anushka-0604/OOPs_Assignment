#include <iostream>
using namespace std;

class Test {
    float x;

public:
    Test(float a) {
        x = a;
    }

    void show() {
        cout << "Value = " << x;
    }
};

int main() {
    Test t = 5.5; 
    t.show();
    return 0;
}
