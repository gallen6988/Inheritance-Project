// Grace Allen
// CIS 1202 800
// November 30, 2023

// Specification file for Vehicle class.

#include <string>
using namespace std;

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
	protected:
		string manufacturer;
		int year;
	public:
		Vehicle();
		Vehicle(string, int);
		string getManufacturer() const;
		int getYear() const;
		void displayInfo() const;
		void setManufacturer(string);
		void setYear(int);
};

#endif