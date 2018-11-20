#pragma once
#include "Car.h"

class OldCar : public Car
{
public:
	const int GetMilage();
	void SetMilage(int milage);
	OldCar();
	OldCar(std::string VIN, std::string make, std::string model,
		int year, float price, std::string category, int milage);
private:
	int milage;
};
