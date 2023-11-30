// Grace Allen
// CIS 1202 800
// November 30, 2023

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>
using namespace std;

int main() {
//********************************* Driver for Vehicle Class ***********************************
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

//*********************************** Driver for Car Class *************************************
	Car drivableCar;
	int doorNum;
	
	cout << endl << "\nCar:\n" << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doorNum;

	drivableCar.setManufacturer(manufacturer);
	drivableCar.setYear(year);
	drivableCar.setDoorNum(doorNum);

	cout << endl << "Vehicle Information:" << endl;
	drivableCar.Car::displayInfo();
}