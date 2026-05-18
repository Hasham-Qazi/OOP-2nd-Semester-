#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle Constructor Called\n";
    }
};

class Car : public Vehicle {
public:
    Car() {
        cout << "Car Constructor Called\n";
    }
};

class ElectricCar : public Car {
public:
    ElectricCar() {
        cout << "ElectricCar Constructor Called\n";
    }
};

int main() {
    ElectricCar ec;

    return 0;
}

