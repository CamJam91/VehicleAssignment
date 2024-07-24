#ifndef VEHICLE_H
#define VEHICLE_H

#include<string>
using namespace std;

class Vehicle{
    //fields
    private:
    string manufacturer;
    int yearBuilt;

    public:
    //constructor
        //default
    Vehicle();
        //args
    Vehicle(string manufacturer, int yearBuilt);

    //setters
    void setManufacturer(string manufacturer);
    void setYearBuilt(int yearBuilt);

    //getters
    string getManufacturer()const;
    int getYearBuilt()const;
        //display
    void displayInfo()const;
};

#endif