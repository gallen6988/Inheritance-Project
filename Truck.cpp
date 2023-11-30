// Grace Allen
// CIS 1202 800
// November 30, 2023

// Implementation file for Truck class (derived from Vehicle class).

#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck() {
	towCap = 0;
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
	Vehicle::displayInfo();
	cout << "Tow Capacity (weight): " << towCap << endl;
}