#include "Vehicle.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Vehicle::Vehicle(){
	//default constructor
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
	string man = getManufacturer();
	int yB = getYear();
	cout << endl;
	cout << "Vehicle Information" << endl;
	cout << "Manufacturer is " << man << ".\n";
	cout << "This car was built in " << yB << ".\n";
}