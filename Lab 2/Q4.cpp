// calling of private memeber function inside a public member function
#include <iostream>
using namespace std;

class Demo {
private:
    void show() {
        cout << "This is a private function";
    }

public:
    void call() {
        show();
    }
};

int main() {
    Demo obj;
    obj.call();
    return 0;
}

