// Grace Allen
// CIS 1202 800
// November 30, 2023

// Implementation file for Truck class (derived from Vehicle class).

#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck() {
	towCap = 0; // Automatically sets the Truck object's towing capacity to 0, because this statement is in the object's default constructor.
}
Truck::Truck(long capacity) {
	towCap = capacity;
}
int Truck::getTowCap() {
	return towCap;
}
void Truck::setTowCap(long capacity) {
	towCap = capacity;
}
void Truck::displayInfo() {
	Vehicle::displayInfo(); // Inherits Vehicle class's displayInfo() function and uses it to display its inherited variables' values.
	cout << "Tow Capacity (weight): " << towCap << endl; // Displays its own variable's value.
}