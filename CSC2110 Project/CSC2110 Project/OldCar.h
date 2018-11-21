#pragma once
#include "Car.h"

class OldCar : public Car
{
public:
	const int GetMilage();
	void SetMilage(int milage);
	const void ReadFromFile(std::istream &in);
	const void OutputToFile(std::ostream &out);
	OldCar();
	OldCar(std::string VIN, std::string make, std::string model,
		int year, float price, std::string category, int milage);
private:
	int milage;
};
