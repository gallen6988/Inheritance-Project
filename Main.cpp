// Grace Allen
// CIS 1202 800
// November 30, 2023

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int main() {
//********************************* Driver for Vehicle Class ***********************************
	Vehicle automobile;
	string manufacturer; // Stores the manufacturer for automobile, drivableCar, and towTruck objects below.
	int year; // Stores the year for automobile, drivableCar, and towTruck objects below.

	// Asks user for manufacturer and year details for automobile object and stores them in manufacturer and year variables.
	cout << "Vehicle Program\n\n" << "Vehicle:" << endl << "Enter the manufacturer: ";
	cin.clear();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;

	// Uses automobile's setter functions to store the values in manufacturer and year in its member variables.
	automobile.setManufacturer(manufacturer);
	automobile.setYear(year);

	// Displays automobile's info using it's version of displayInfo() in the Vehicle class.
	cout << endl << "Vehicle Information:" << endl;
	automobile.Vehicle::displayInfo();

//*********************************** Driver for Car Class *************************************
	Car drivableCar;
	int doorNum;
	
	// Asks user for manufacturer, year, and door details and stores them in their proper variables.
	cout << endl << "\nCar:\n" << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doorNum;

	// Uses drivableCar's setter functions (its inherited ones and its own) to store the values in manufacturer, year, and doorNum in its member variables (both its inherited ones and its own).
	drivableCar.setManufacturer(manufacturer);
	drivableCar.setYear(year);
	drivableCar.setDoorNum(doorNum);

	// Uses Car classes's version of displayInfo() to display drivableCar's info.
	cout << endl << "Vehicle Information:" << endl;
	drivableCar.Car::displayInfo();

//********************************** Driver for Truck Class ************************************
	Truck towTruck;
	long towCap;
	
	// Asks user for manufacturer, year, and towing capacity details and stores them in their proper variables.
	cout << endl << "\nTruck:\n" << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter year built: ";
	cin >> year;
	cout << "Enter towing capacity (weight it can handle): ";
	cin >> towCap;

	// Uses towTruck's setter functions (its inherited ones and its own) to store the values in manufacturer, year, and towCap in its member variables (both its inherited ones and its own).
	towTruck.setManufacturer(manufacturer);
	towTruck.setYear(year);
	towTruck.setTowCap(towCap);

	// Uses the Truck class's version of displayInfo() to display its info.
	cout << "\nVehicle Information:" << endl;
	towTruck.Truck::displayInfo();
}