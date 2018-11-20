//==========================================================
//
// Title:      Recursion Part 2
// Course:     CSC 2111
// Lab Number: Lab 20 a
// Author:     Shane Lesser
// Date:       11/17/2018
// Description:
//   Palindromes using recursion
//
//==========================================================
#include <iostream>
#include <string>
#include <vector>
#include "Car.h"
#include "NewCar.h"
#include "OldCar.h"
using namespace std;

// Called when the function begins
// Read in values from file and add them to classes
void ReadFromFile(vector<Car>);

// Used for displaying the menu
void DisplayMenu();

// For searching the car inventory
void SearchInventory();

// For selling or leasing cars
void SellLeaseCar();

// Returning leased cars 
void ReturnCar();

// Adding new or old cards to the inventory
void AddCar(vector<Car>);

// Saving to file when the program is done
void SaveToFile(vector<Car>);

int main()
{
	int sentinelLoop = 0;
	vector<Car> cars;
	

	// Read from the file at start
	ReadFromFile();

	// Greet the user
	cout << "Welcome to the Car Dealership System!" << endl;
	cout << "-------------------------------------" << endl << endl;

	// Loop through this menu and prompt the user for each option
	while (sentinelLoop != 5)
	{
		DisplayMenu();
		cin >> sentinelLoop;

		// Switch statement for reading user input
		switch (sentinelLoop)
		{
		case 1: SearchInventory();
			break;
		case 2: SellLeaseCar();
			break;
		case 3: ReturnCar();
			break;
		case 4: AddCar();
			break;
		default:
			break;
		}
			
	}

	SaveToFile(cars);

	return 0;
}

void ReadFromFile(vector<Car> cars)
{

}

void DisplayMenu()
{
	cout << "\nEnter a value to pick an option" << endl <<
		"1. Search Inventory" << endl <<
		"2. Sell/Lease cars" << endl <<
		"3. Return a leased car" << endl <<
		"4. Add cars to inventory" << endl <<
		"5. Exit" << endl << endl;
}

void SearchInventory()
{
}

void SellLeaseCar()
{
}

void ReturnCar()
{
}

void AddCar(vector<Car> cars)
{
	char x;
	// Ask the user if they want to add a new or old car
	cout << "Would you like to add a new (n) or old (o) car? ";
	cin >> x;
	cout << endl;

	// Validate the input
	while (x != 'n' || x != 'o')
	{
		cout << "You must enter n for new, or o for old! ";
		cin >> x;
		cout << endl;
	}

	string VIN;
	string make;
	string model;
	int year;
	float price;
	string category;

	cout << "Input a VIN number: ";
	cin >> VIN;
	cout << "Input the make: ";
	cin >> make;
	cout << "Input the model: ";
	cin >> model;
	cout << "Input the year: ";
	cin >> year;
	cout << "Input the price: ";
	cin >> price;
	cout << "Input the category: ";
	cin >> category;


	if (x == 'o')
	{
		int milage;

		cout << "Input the milage: ";
		cin >> milage;

		OldCar car(VIN, make, model, year, price, category, milage);

		cars.push_back(car);
	}
	else
	{
		string warrentyProvider;

		cout << "Input the Warrenty Provider: ";
		cin >> warrentyProvider;

		NewCar car(VIN, make, model, year, price, category, warrentyProvider);

		cars.push_back(car);
	}
}

void SaveToFile(vector<Car> cars)
{
}
