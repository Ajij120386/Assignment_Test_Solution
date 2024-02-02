#include<bits/stdc++.h>
using namespace std;
class Car
{
    public:

       string name;
       string model;
       int year;

    Car(string n, string m, int yr)
    {
       name = n;
       model = m;
       year = yr;
    }




   void print() {
        cout << year << " " << name << " " << model << endl;
    }
};

class ElectricCar : public Car {
public:

    double batteryCapacity;

    ElectricCar(string name, string model, int year, double batteryCapacity)
        : Car(name, model, year), batteryCapacity(batteryCapacity) {}



    void print()
    {

        Car::print();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

class GasCar : public Car {
public:

    double fuelEfficiency;

    GasCar(string name, string model, int year, double fuelEfficiency)
        : Car(name, model, year), fuelEfficiency(fuelEfficiency) {}

    void print()  {
        Car::print();
        cout << "Fuel Efficiency: " << fuelEfficiency << " MPG" << endl;
    }
};

int main()
{

     string carType;
     string n;
     string m;
     int yr;




     cout << "Enter car type (Electric/Gas): ";
     cin >> carType;

    cout << "Enter Name: ";
     cin >> n;

     cout << "Enter model: ";
    char c;
    cin >> c;
    getline( cin, m );
    m = c + m;



     cout << "Enter year: ";
     cin >> yr;

    if (carType == "Electric")
    {

        double batCap;
         cout << "Enter battery capacity (kWh): ";
         cin >> batCap;

        ElectricCar electricCar(n, m, yr, batCap);
        electricCar.print();
    }

    else
    {

        double fuelEff;
          cout << "Enter fuel efficiency (MPG): ";
          cin >> fuelEff;

        GasCar gasCar(n, m, yr, fuelEff);
        gasCar.print();
    }


    return 0;
}



/*
Electric
Tesla
Model S
2022
100

Gas
Toyota
Camry
2022
30


*/
