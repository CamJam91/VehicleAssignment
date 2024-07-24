//Car is a derived class of base
#include "../include/Truck.h"
#include<string>
using namespace std;

    //constructors
        //default
    Truck::Truck() : Vehicle(){
        towingCapacity = 0;
    };
        //args
    Truck::Truck(string manufacturer, int yearBuilt, int towingCapacity) : Vehicle(manufacturer, yearBuilt){
        this->towingCapacity = towingCapacity; 
        };

    //setters
    void Truck::setCapacity(double capacity){
        this->towingCapacity = capacity;
    };

    //getters
    double Truck::getCapacity() const{
        return towingCapacity;
    };

    //display
    void Truck::displayInfo() const{
        Vehicle::displayInfo();
        printf("Towing Capacity: %.2f", towingCapacity);
    }; //redefined Vehicle Display