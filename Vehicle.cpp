// Grace Allen
// CIS 1202 800
// November 30, 2023

// Implementation file for Vehicle class.

#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle() { // Automatically sets manufacturer to NONE and year to 0 because this is the default constructor.
	manufacturer = "NONE";
	year = 0;
}
string Vehicle::getManufacturer() const {
	return manufacturer;
}
int Vehicle::getYear() const {
	return year;
}
void Vehicle::displayInfo() const {
	cout << "Manufacturer: " << getManufacturer() << "\nYear: " << getYear() << endl; // Displays its member variables' values by using getManufacturer() and getYear().
}
void Vehicle::setManufacturer(string maker) {
	manufacturer = maker;
}
void Vehicle::setYear(int yearMade) {
	year = yearMade;
}