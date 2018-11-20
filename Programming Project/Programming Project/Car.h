#pragma once
#include <iostream>
#include <string>

class Car
{
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