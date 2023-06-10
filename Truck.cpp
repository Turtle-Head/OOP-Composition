#include "Truck.h"
#include <iostream>

Truck::Truck(std::string color, int year, std::string make, std::string model): vehicle(color, year, make, model) {}

void Truck::soundHorn()
{
	std::cout << "Truck horn" << std::endl;
}

void Truck::start()
{
	vehicle.start();
}

void Truck::stop()
{
	vehicle.stop();
}

void Truck::accelerate()
{
	vehicle.accelerate();
}

void Truck::decelerate()
{
	vehicle.decelerate();
}

std::string Truck::getInfo()
{
	return "Truck: " + vehicle.getInfo();
}
