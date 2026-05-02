#include <iostream>
using namespace std;

class Vehicle {
public:
    string make, model;
    int year;
};

class Truck : public Vehicle {
public:
    int load_capacity;
};

class RefrigeratedTruck : public Truck {
public:
    int temperature_control;

    void display() {
        cout << make << " " << model << " " << year << endl;
        cout << "Load: " << load_capacity << endl;
        cout << "Temp Control: " << temperature_control << endl;
    }
};

int main() {
    RefrigeratedTruck r;
    r.make = "AUDI";
    r.model = "X";
    r.year = 2026;
    r.load_capacity = 5000;
    r.temperature_control = -5;

    r.display();
    return 0;
}
