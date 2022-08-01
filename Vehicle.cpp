#include "Vehicle.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Vehicle::Vehicle(){
	manufacturer = "";
	year = 0;
}

void Vehicle::setManufacturer() {
	cout << "Enter manufacturer name: ";
	getline(cin, manufacturer);
	cin.ignore();
}

void Vehicle::setYear() {
	cout << "Enter build year: ";
	cin >> year;
}

string Vehicle::getManufacturer() {
	return manufacturer;
}

int Vehicle::getYear() {
	return year;
}