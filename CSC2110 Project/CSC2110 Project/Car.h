#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class Car
{
	friend std::ostream& operator<<(std::ostream &out, Car &car);
	friend std::istream& operator>>(std::istream &in, Car &car);

public:
	// Getters and setters for the private variables
	// VIN Getter and setter
	const std::string GetVIN();
	void SetVIN(std::string VIN);

	// make Getter and setter
	const std::string GetMake();
	void SetMake(std::string make);

	// model Getter and setter
	const std::string GetModel();
	void SetModel(std::string model);

	// year Getter and setter
	const int GetYear();
	void SetYear(int year);

	// price Getter and setter
	const float GetPrice();
	void SetPrice(float price);

	// category Getter and setter
	const std::string GetCategory();
	void SetCategory(std::string category);

	// we want to make two virtual functions to make reading to and from the files
	// Normally we'd overload the cin and cout operators, but that must be
	// done as a friend function, and you can't have virtual friend functions
	// Therefore, we are going make two virtual functions that will be called
	// by the overloaded operators
	const virtual void ReadFromFile(std::istream &in) = 0;
	const virtual void OutputToFile(std::ostream &out) = 0;

	// Default constructor
	Car();

	// Parameterized constructor
	Car(std::string VIN, std::string make, std::string model,
		int year, float price, std::string category);
private:
	std::string VIN;
	std::string make;
	std::string model;
	int year;
	float price;
	std::string category;
};