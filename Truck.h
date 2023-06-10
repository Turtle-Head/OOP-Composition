#pragma once
#include "Vehicle.h"
class Truck 
{
private:
    Vehicle vehicle;
public:
    Truck(std::string color, int year, std::string make, std::string model);
    void soundHorn();
    void start();
    void stop();
    void accelerate();
    void decelerate();
    std::string getInfo();
};

