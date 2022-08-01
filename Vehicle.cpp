#include "Vehicle.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Vehicle::Vehicle(){
	manufacturer = "";
	year = 0;
}

void Vehicle::setManufacturer(string m) {
	manufacturer = m;
}

void Vehicle::setYear(int y) {
	year = y;
}

string Vehicle::getManufacturer() {
	return manufacturer;
}

int Vehicle::getYear() {
	return year;
}

void Vehicle::displayInfo() {
	cout << endl;
	cout << "Manufacturer is " << manufacturer << ".\n";
	cout << "This car was built in " << year << ".\n";
}