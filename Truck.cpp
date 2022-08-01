#include "Truck.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Truck::Truck() {
	capacity = 0;
}

void Truck::setCapacity(int cap) {
	capacity = cap;
}

int Truck::getCapacity() {
	return capacity;
}

void Truck::displayInfo(Truck aTruck) {
	int tCap = getCapacity();

	aTruck.Vehicle::displayInfo(); //calls vehicle displayInfo function
	cout << "Towing capacity is " << tCap << ".\n"; //displays truck towing capacity info
}