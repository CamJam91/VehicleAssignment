//Car is a derived class of base
#include "../include/Car.h"
#include<string>
using namespace std;

    //constructors
        //default
    Car::Car() : Vehicle(){
        doors = 0;
    };
        //args
    Car::Car(string manufacturer, int yearBuilt, int doors) : Vehicle(manufacturer, yearBuilt){
        this->doors = doors; 
        };

    //setters
    void Car::setDoors(int doors){
        this->doors = doors;
    };

    //getters
    int Car::getDoors()const{
        return doors;
    };

    //display
    void Car::displayInfo() const{
        Vehicle::displayInfo();
        printf("doors: %d",doors);
    }; //redefined Vehicle Display