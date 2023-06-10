#include "Vehicle.h"
#include <iostream>
Vehicle::Vehicle(std::string color, int year, std::string make, std::string model) :color(color), year(year), make(make), model(model) { speed = 0; }

Vehicle::~Vehicle(){}
	


void Vehicle::soundHorn()
{
	std::cout << "Vehicle horn" << std::endl;
}

void Vehicle::start()
{
	std::cout << "Vehicle started" << std::endl;
}

void Vehicle::stop()
{
	std::cout << "Vehicle stopped" << std::endl;
}

void Vehicle::accelerate()
{
	std::cout << "Vehicle is accelerating";
	for (size_t i = 0; i < 10; i++) {
		std::cout << (speed += 10) << " k/h, ";
	}
	std::cout << "Acceleration complete\n";
}

void Vehicle::decelerate()
{
	std::cout << "Vehicle is decelerating: ";
	for (size_t i = 0; i < 10; i++) {
		std::cout << (speed -= 10) << " k/h, ";
	}
	std::cout << "Deceleration complete\n";
}

std::string Vehicle::getInfo()
{
	return "Make:" + make + ", Model: " + ", Color: " + color + ", Year: " + std::to_string(year);
}
