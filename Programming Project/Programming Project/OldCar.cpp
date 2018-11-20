#include "OldCar.h"

const int OldCar::GetMilage()
{
	return milage;
}

void OldCar::SetMilage(int milage)
{
	this->milage = milage;
}

OldCar::OldCar(): Car("", "", "", 0, 0, "")
{
	milage = 0;
}

OldCar::OldCar(std::string VIN, std::string make,
	std::string model, int year, float price, std::string category,
	int milage) : Car(VIN, make, model, year, price, category)
{
	this->milage = milage;
}

