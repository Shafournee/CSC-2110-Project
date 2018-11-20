#include "Car.h"
using namespace std;

const string Car::GetVIN()
{
	return VIN;
}

void Car::SetVIN(string VIN)
{
	this->VIN = VIN;
}

const string Car::GetMake()
{
	return make;
}

void Car::SetMake(string make)
{
	this->make = make;
}

const string Car::GetModel()
{
	return model;
}

void Car::SetModel(string model)
{
	this->model = model;
}

const int Car::GetYear()
{
	return year;
}

void Car::SetYear(int year)
{
	this->year = year;
}

const float Car::GetPrice()
{
	return price;
}

void Car::SetPrice(float price)
{
	this->price = price;
}

const string Car::GetCategory()
{
	return category;
}

void Car::SetCategory(string category)
{
	this->category = category;
}

Car::Car()
{
	VIN = "";
	make = "";
	model = "";
	year = 0;
	price = 0;
	category = "";
}

Car::Car(string VIN, string make, string model, int year, float price, string category)
{
	this->VIN = VIN;
	this->make = make;
	this->model = model;
	this->year = year;
	this->price = price;
	this->category = category;
}

