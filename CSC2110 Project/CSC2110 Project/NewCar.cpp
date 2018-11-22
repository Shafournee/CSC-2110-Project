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
	string VIN;
	string make;
	string model;
	int year;
	float price;
	string warrentyProvider;

	in >> skipws >> VIN;
	in >> skipws >> make;
	in >> skipws >> model;
	in >> skipws >> year;
	in >> skipws >> price;
	in >> skipws >> warrentyProvider;

	SetVIN(VIN);
	SetMake(make);
	SetModel(model);
	SetYear(year);
	SetPrice(price);
	SetWarrentyProvider(warrentyProvider);
}

const void NewCar::OutputToFile(ostream & out)
{
	out << left << setw(16) << GetCategory();
	out << left << setw(16) << GetVIN();
	out << left << setw(16) << GetMake();
	out << left << setw(16) << GetModel();
	out << left << setw(14) << GetYear();
	out << left << setw(14) << GetPrice();
	out << left << setw(20) << right << GetWarrentyProvider();
}

NewCar::NewCar(): Car("", "", "", 0, 0, "new")
{
	warrentyProvider = "";
}

NewCar::NewCar(std::string VIN, std::string make, 
	std::string model, int year, float price, std::string category, 
	std::string warrentyProvider): Car(VIN, make, model, year, price, category)
{
	this->warrentyProvider = warrentyProvider;
}


