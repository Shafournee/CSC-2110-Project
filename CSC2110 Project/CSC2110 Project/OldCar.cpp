#include "OldCar.h"
using namespace std;

const int OldCar::GetMilage()
{
	return milage;
}

void OldCar::SetMilage(int milage)
{
	this->milage = milage;
}

const void OldCar::ReadFromFile(istream & in)
{
	string VIN;
	string make;
	string model;
	int year;
	float price;
	int milage;

	in >> skipws >> VIN;
	in >> skipws >> make;
	in >> skipws >> model;
	in >> skipws >> year;
	in >> skipws >> price;
	in >> skipws >> milage;

	SetVIN(VIN);
	SetMake(make);
	SetModel(model);
	SetYear(year);
	SetPrice(price);
	SetMilage(milage);
}

const void OldCar::OutputToFile(ostream & out)
{
	out << left << setw(16) << GetCategory();
	out << left << setw(16) << GetVIN();
	out << left << setw(16) << GetMake();
	out << left << setw(16) << GetModel();
	out << left << setw(14) << GetYear();
	out << left << setw(14) << GetPrice();
	out << left << setw(10) << GetMilage();
}


OldCar::OldCar(): Car("", "", "", 0, 0, "old")
{
	milage = 0;
}

OldCar::OldCar(std::string VIN, std::string make,
	std::string model, int year, float price, std::string category,
	int milage) : Car(VIN, make, model, year, price, category)
{
	this->milage = milage;
}

