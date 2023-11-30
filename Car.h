// Grace Allen
// CIS 1202 800
// November 30, 2023

// Specification file for Car class (which is derived from the Vehicle class).

#include "Vehicle.h"
using namespace std;

#ifndef CAR_H
#define CAR_H

class Car : public Vehicle { // Note to self: Remember that the "public Vehicle" part just means that this class derives from the Vehicle class and that it's public members are public in this class. It's protected members are still protected in this class, though.
	protected:
		int doorNum;
	public:
		Car();
		int getDoorNum();
		void setDoorNum(int);
		void displayInfo();
};
#endif