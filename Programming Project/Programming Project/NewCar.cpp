#include "NewCar.h"

const std::string NewCar::GetWarrentyProvider()
{
	return warrentyProvider;
}

void NewCar::SetWarrentyProvider(std::string warrentyProvider)
{
	this->warrentyProvider = warrentyProvider;
}

NewCar::NewCar(): Car("", "", "", 0, 0, "")
{
	warrentyProvider = "";
}

NewCar::NewCar(std::string VIN, std::string make, 
	std::string model, int year, float price, std::string category, 
	std::string warrentyProvider): Car(VIN, make, model, year, price, category)
{
	this->warrentyProvider = warrentyProvider;
}


