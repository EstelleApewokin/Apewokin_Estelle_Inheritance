//Estelle Apewokin
//July 31, 2022
//CIS 1202 5T1

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	Vehicle v;
	Car c;
	Truck t;

	string manu;
	int yearBuilt, numDoors, towingCap;

	cout << "Enter manufacturer: ";
	getline(cin, manu);
	v.setManufacturer(manu);

	cout << "Enter year built: ";
	cin >> yearBuilt;
	v.setYear(yearBuilt);

	v.displayInfo();

}