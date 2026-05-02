#include <iostream>
using namespace std;

template <class T>
void swapVal(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapVal(x, y);
    cout << x << " " << y;
}
