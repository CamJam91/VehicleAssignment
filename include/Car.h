//Car is a derived class of base
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include<string>
using namespace std;

class Car : public Vehicle{
    //fields
    private:
    int doors;

    public:
    //constructors
        //default
    Car() : Vehicle(){};
        //args
    Car(string manufacturer, int yearBuilt, int doors) : Vehicle(manufacturer, yearBuilt){};

    //setters
    void setDoors(int doors);

    //getters
    int getDoors()const;

    //display
    void displayInfo() const; //redefined Vehicle Display
};
#endif