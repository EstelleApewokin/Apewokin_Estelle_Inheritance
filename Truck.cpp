#include "Truck.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

Truck::Truck() {
	capacity = 0;
}

void Truck::setCapacity() {
	cout << "Enter towing capacity: ";
	cin >> capacity;
}

int Truck::getCapacity() {
	return capacity;
}

void Truck::displayInfo(Truck aTruck) {
	aTruck.Vehicle::displayInfo();
	cout << "Towing capacity is " << capacity << ".\n";
}