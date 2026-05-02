#include <iostream>
using namespace std;

int main() {
    int days;

    cout << "Enter number of late days: ";
    cin >> days;

    if (days <= 5) {
        cout << "Fine = " << days * 0.5 << " rupees";
    }
    else if (days <= 10) {
        cout << "Fine = " << days * 1 << " rupees";
    }
    else if (days <= 30) {
        cout << "Fine = " << days * 5 << " rupees";
    }
    else {
        cout << "Membership Cancelled";
    }

    return 0;
}
