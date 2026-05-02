#include <iostream>
using namespace std;

class Input {
public:
    void operator()(int a, int b, int c) {
        cout << "Values: " << a << " " << b << " " << c << endl;
    }
};

int main() {
    Input obj;
    obj(10, 20, 30); 
    return 0;
}
