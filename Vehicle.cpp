// Grace Allen
// CIS 1202 800
// November 30, 2023

// Implementation file for Vehicle class.

#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(string maker, int yearMade) {
	manufacturer = maker;
	year = yearMade;
}
string Vehicle::getManufacturer() const {
	return manufacturer;
}
int Vehicle::getYear() const {
	return year;
}
void Vehicle::displayInfo() const {
	cout << "Manufacturer: " << manufacturer << "\nYear: " << year << endl;
}
void Vehicle::setManufacturer(string maker) {
	manufacturer = maker;
}
void Vehicle::setYear(int yearMade) {
	year = yearMade;
}