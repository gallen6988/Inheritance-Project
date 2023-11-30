// Grace Allen
// CIS 1202
// November 30, 2023

// Specification file for Truck class (derived from Vehicle class).

#include "Vehicle.h"
using namespace std;

#ifndef TRUCK_H
#define TRUCK_H
class Truck : public Vehicle { // Note to self: Remember that the "public Vehicle" part just means that this class derives from the Vehicle class and that it's public members are public in this class. It's protected members are still protected in this class, though.
	protected:
		long towCap;
	public:
		Truck();
		Truck(long);
		int getTowCap();
		void setTowCap(long);
		void displayInfo();
};
#endif