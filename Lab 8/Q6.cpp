#include <iostream>
using namespace std;

template <class T>
class Stack {
    T arr[5];
    int top = -1;

public:
    void push(T x) {
        if(top == 4) cout << "Overflow\n";
        else arr[++top] = x;
    }

    void pop() {
        if(top == -1) cout << "Underflow\n";
        else cout << "Popped: " << arr[top--] << endl;
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
}
