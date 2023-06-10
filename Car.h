#pragma once
#include "Vehicle.h"
class Car
{
private:
    Vehicle vehicle;
public:
    Car(std::string color, int year, std::string make, std::string model);
    void soundHorn();
    void start();
    void stop();
    void accelerate();
    void decelerate();
    std::string getInfo();
};

