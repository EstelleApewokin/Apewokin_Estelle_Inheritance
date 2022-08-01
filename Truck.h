#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <string>

using namespace std;

class Truck : public Vehicle {
private:
	int capacity;
public: 
	Truck();
	void setCapacity(int);
	int getCapacity();
	void displayInfo(Truck);
};

#endif
