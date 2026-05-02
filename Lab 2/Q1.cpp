// wap of a simple class of addition , add two integers (take 2 variables and 1 to store addition and create object also take input from the user also )
#include <iostream>
using namespace std;

class Addition {
private:
    int a, b, sum;

public:
    void input() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    void add() {
        sum = a + b;
        cout << "Addition of a + b is = " << sum;
    }
};

int main() {
    Addition obj;

    obj.input();
    obj.add();

    return 0;
}

