#pragma once
#include <string>

class Vehicle
{
protected:
	std::string color, make, model;
	int year;
	int speed;
public:
	Vehicle(std::string color, int year, std::string make, std::string model);
	~Vehicle();
	virtual void soundHorn();
	virtual void start();
	virtual void stop();
	virtual void accelerate();
	virtual void decelerate();
	virtual std::string getInfo();
};

