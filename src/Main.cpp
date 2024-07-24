#include "../include/inputValidation.h"
#include "../include/Vehicle.h"
#include "../include/Car.h"
#include "../include/Truck.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
    //variables for objects (reused)
    string manufacturer;
    int yearBuilt;

    //car
    printf("Enter a manufacturer for your car: \n>>");
    manufacturer = stringValidation("Enter a valid manufacturer", 4, 25);
    printf("Enter a year for your car: \n>>");
    yearBuilt = userValidation("Enter a valid year", 1886, 2024);
    printf("How many doors are on your car?\n>>");
    int doors = userValidation("Enter a valid amount of doors", 1, 20);
    Car testCar = Car(manufacturer, yearBuilt, doors);
    testCar.displayInfo();
    cout << endl;

    //truck
    printf("Enter a manufacturer for your truck: \n>>");
    manufacturer = stringValidation("Enter a valid manufacturer", 4, 25);
    printf("Enter a year for your truck: \n>>");
    yearBuilt = userValidation("Enter a valid year", 1886, 2024);
    printf("What is the towing capacity of your truck\n>>?");
    double towingCapacity = userValidation("Enter a valid towing Capacity",1.00f, 10000.00f);
    Truck testTruck = Truck(manufacturer, yearBuilt, towingCapacity);
    testTruck.displayInfo();
    cout << endl;

    return 0;
}