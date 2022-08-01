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

	cout << "Enter vehicle manufacturer: ";
	getline(cin, manu);
	v.setManufacturer(manu);

	cout << "Enter year built: ";
	cin >> yearBuilt;
	v.setYear(yearBuilt);

	v.displayInfo();

	cin.ignore();
	cout << endl;

	cout << "Enter car manufacturer: ";
	getline(cin, manu);
	c.setManufacturer(manu);

	cout << "Enter year built: ";
	cin >> yearBuilt;
	c.setYear(yearBuilt);

	cout << "Enter number of doors: ";
	cin >> numDoors;
	c.setDoors(numDoors);

	c.displayInfo(c);

	cin.ignore();
	cout << endl;

	cout << "Enter truck manufacturer: ";
	getline(cin, manu);
	t.setManufacturer(manu);

	cout << "Enter year built: ";
	cin >> yearBuilt;
	t.setYear(yearBuilt);

	cout << "Enter towing capacity: ";
	cin >> towingCap;
	t.setCapacity(towingCap);

	t.displayInfo(t);

	cin.ignore();
	cout << endl;

}