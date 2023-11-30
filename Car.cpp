// Grace Allen
// CIS 1202
// November 30, 2023

// Implementation file for Car class (derived from the Vehicle class).

#include "Car.h"
#include <iostream>
using namespace std;

Car::Car() {
	doorNum = 4; // Automatically sets the value in the doorNum variable of the object to 4, since this statement is in the object's default constructor.
}
int Car::getDoorNum() {
	return doorNum;
}
void Car::setDoorNum(int numOfDoors) {
	doorNum = numOfDoors;
}
void Car::displayInfo() {
	Vehicle::displayInfo(); // Inherits Vehicle class's displayInfo() function and uses it to display the values of its inherited member variables.
	cout << "Number of Doors: " << doorNum << endl; // Displays its own member variable, doorNum.
}