#include <iostream>
using namespace std;
class Vehicle
{
        public:
    virtual void drive() = 0;
    void fuelUp()
    {
        cout << "Filling up the tank" << endl;
    }
};
class ElectricVehicle
{
            public:
    virtual void ChargeBattery() = 0;
};
class Car : public Vehicle
{
         public:
    void drive() 
    {
        cout << "Drive the car" << endl;
    }
};
class ElectricCar : public Vehicle, public ElectricVehicle
{
         public:
    void drive()
    {
        cout << "Drive the ElectricCar" << endl;
    }

    void ChargeBattery() 
    {
        cout << "Charging battery of the ElectricCar" << endl;
    }
};
int main() 
{
    Car c;
    ElectricCar e;
    c.drive();
    e.drive();
    e.ChargeBattery();
    return 0;
}
