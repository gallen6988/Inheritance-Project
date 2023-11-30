// Grace Allen
// CIS 1202
// November 30, 2023

// Implementation file for Car class (derived from the Vehicle class).

#include "Car.h"
#include <iostream>
using namespace std;

Car::Car() {
	doorNum = 4;
}
int Car::getDoorNum() {
	return doorNum;
}
void Car::setDoorNum(int numOfDoors) {
	doorNum = numOfDoors;
}
void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Number of Doors: " << doorNum << endl;
}