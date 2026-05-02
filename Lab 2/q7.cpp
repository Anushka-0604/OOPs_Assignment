#include <iostream>
using namespace std;


namespace First {
    int value = 10;

    void display() {
        cout << "First namespace value: " << value << endl;
    }
}


namespace Second {
    int value = 20;

    void display() {
        cout << "Second namespace value: " << value << endl;
    }
}

int main() {
 
    cout << "First value: " << First::value << endl;
    cout << "Second value: " << Second::value << endl;


    First::display();
    Second::display();

    return 0;
}
