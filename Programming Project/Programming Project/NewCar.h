#pragma once
#include "Car.h"

class NewCar: public Car
{
public:
	const std::string GetWarrentyProvider();
	void SetWarrentyProvider(std::string warrentyProvider);
	NewCar();
	NewCar(std::string VIN, std::string make, std::string model,
		int year, float price, std::string category, std::string warrentyProvider);
private:
	std::string warrentyProvider;
};
