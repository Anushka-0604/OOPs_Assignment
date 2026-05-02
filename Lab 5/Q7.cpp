#include <iostream>
using namespace std;

class Speedometer {
public:
    int speed;
    void setSpeed(int s) { speed = s; }
};

class FuelGauge {
public:
    int fuel;
    void setFuel(int f) { fuel = f; }
};

class Thermometer {
public:
    int temp;
    void setTemp(int t) { temp = t; }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void display() {
        cout << "Speed: " << speed << " km/h\n";
        cout << "Fuel: " << fuel << "%\n";
        cout << "Temperature: " << temp << " C\n";
    }
};

int main() {
    CarDashboard car;
    car.setSpeed(80);
    car.setFuel(60);
    car.setTemp(35);
    car.display();
    return 0;
}
