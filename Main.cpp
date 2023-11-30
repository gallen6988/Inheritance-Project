// Grace Allen
// CIS 1202 800
// November 30, 2023

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int main() {
	Vehicle automobile;
	string manufacturer;
	int year;

	cout << "Vehicle Program\n\n" << "Vehicle:" << endl << "Enter the manufacturer: ";
	cin.clear();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;

	automobile.setManufacturer(manufacturer);
	automobile.setYear(year);

	cout << endl << "Vehicle Information:" << endl;
	automobile.Vehicle::displayInfo();
}