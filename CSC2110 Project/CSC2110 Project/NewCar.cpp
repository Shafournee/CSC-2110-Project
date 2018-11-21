#include "NewCar.h"
using namespace std;

const std::string NewCar::GetWarrentyProvider()
{
	return warrentyProvider;
}

void NewCar::SetWarrentyProvider(std::string warrentyProvider)
{
	this->warrentyProvider = warrentyProvider;
}

const void NewCar::ReadFromFile(istream & in)
{
	
}

const void NewCar::OutputToFile(ostream & out)
{
	
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


