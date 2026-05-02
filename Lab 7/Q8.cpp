#include <iostream>
using namespace std;

class Array {
    int arr[5];

public:
    void input() {
        for(int i = 0; i < 5; i++)
            cin >> arr[i];
    }

    int& operator[](int i) {
        if(i < 0 || i >= 5) {
            cout << "Index out of bounds\n";
            exit(0);
        }
        return arr[i];
    }
};

int main() {
    Array a;
    cout << "Enter 5 elements:\n";
    a.input();

    cout << "Element at index 2: " << a[2] << endl;

    // Uncomment to test error
    // cout << a[10];

    return 0;
}
