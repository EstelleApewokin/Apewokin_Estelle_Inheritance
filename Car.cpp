#include "Car.h"
#include <iostream>
#include <iomanip>
#include <string>

Car::Car() {
	doors = 0;
}

void Car::setDoors(int d) {
	doors = d;
}

int Car::getDoors() {
	return doors;
}

void Car::displayInfo(Car aCar) {
	int nDoors = getDoors();

	aCar.Vehicle::displayInfo();
	cout << "There are " << nDoors << " doors.\n";
}