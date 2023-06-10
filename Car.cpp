#include "Car.h"
#include <iostream>
Car::Car(std::string color, int year, std::string make, std::string model):vehicle(color, year, make, model){}

void Car::soundHorn()
{
	std::cout << "Car horn" << std::endl;
}

void Car::start()
{
	vehicle.start();
}

void Car::stop()
{
	vehicle.stop();
}

void Car::accelerate()
{
	vehicle.accelerate();
}

void Car::decelerate()
{
	vehicle.decelerate();
}

std::string Car::getInfo()
{
	return "Car: " + vehicle.getInfo();
}

