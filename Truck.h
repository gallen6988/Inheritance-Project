// Grace Allen
// CIS 1202
// November 30, 2023

// Specification file for Truck class (derived from Vehicle class).

#include "Vehicle.h"
using namespace std;

#ifndef TRUCK_H
#define TRUCK_H
class Truck : public Vehicle {
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