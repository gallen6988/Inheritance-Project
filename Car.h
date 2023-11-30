// Grace Allen
// CIS 1202 800
// November 30, 2023

// Specification file for Car class (which is derived from the Vehicle class).

#include "Vehicle.h"
using namespace std;

#ifndef CAR_H
#define CAR_H

class Car : public Vehicle {
	protected:
		int doorNum;
	public:
		Car();
		int getDoorNum();
		void setDoorNum(int);
		void displayInfo();
};
#endif