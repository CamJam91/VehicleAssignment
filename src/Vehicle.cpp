#include "../include/Vehicle.h"

#include<string>
using namespace std;

    //constructor
        //default
    Vehicle::Vehicle(){
        manufacturer = "";
        yearBuilt = 1883;
    };
        //args
    Vehicle::Vehicle(string manufacturer, int yearBuilt){
        this->manufacturer = manufacturer;
        this->yearBuilt = yearBuilt;
    };

    //setters
    void Vehicle::setManufacturer(string manufacturer){
        this->manufacturer = manufacturer;
    }
    void Vehicle::setYearBuilt(int yearBuilt){
        this->yearBuilt = yearBuilt;
    }

    //getters
    string Vehicle::getManufacturer()const{
        return manufacturer;
    }
    int Vehicle::getYearBuilt()const{
        return yearBuilt;
    }
        //display
    void Vehicle::displayInfo()const{
        printf("Manufacturer: %s \nYear: %d\n", manufacturer.c_str(), yearBuilt);
    }