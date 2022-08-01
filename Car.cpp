#include "Car.h"
#include <iostream>
#include <iomanip>
#include <string>

Car::Car() {
	doors = 0;
}

void Car::setDoors() {
	cout << "Enter number of doors: ";
	cin >> doors;
}

int Car::getDoors() {
	return doors;
}

void Car::displayInfo(Car aCar) {
	aCar.Vehicle::displayInfo();
	cout << "There are " << doors << " doors.\n";
}