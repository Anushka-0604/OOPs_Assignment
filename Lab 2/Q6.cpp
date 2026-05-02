// scope resolution 
#include <iostream>
using namespace std;

class Sample {
public:
    void show();
};

void Sample::show() {
    cout << "Scope resolution operator example";
}

int main() {
    Sample s;
    s.show();
    return 0;
}

