// Composition.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author::James Fehr
// Date::June 9, 2023

#include <iostream>
#include "Car.h"
#include "Truck.h"

int main()
{
    Car myCar("Red", 2020, "Toyota", "Camry");
    Truck myTruck("Blue", 2022, "Ford", "F-150");
    std::cout << "------Car------\n" << myCar.getInfo() << std::endl;
    myCar.soundHorn();
    myCar.start();
    myCar.accelerate();
    myCar.decelerate();
    myCar.stop();
    std::cout << "\n\n" << "------Truck------\n" << myTruck.getInfo() << std::endl;
    myTruck.soundHorn();
    myTruck.start();
    myTruck.accelerate();
    myTruck.decelerate();
    myTruck.stop();
}


