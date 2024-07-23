//Truck is a derived class of base
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include<string>
using namespace std;

class Truck : public Vehicle{
    //fields
    private:
    double towingCapacity;

    public:
    //constructors
        //default
    Truck() : Vehicle(){};
        //args
    Truck(string manufacturer, int yearBuilt, int doors) : Vehicle(manufacturer, yearBuilt){};

    //setters
    void setCapacity(double capacity);

    //getters
    double getCapacity()const;

    //display
    void displayInfo() const; //redefined Vehicle Display
};
#endif