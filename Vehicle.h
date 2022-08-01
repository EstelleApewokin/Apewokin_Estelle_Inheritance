#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle {
protected:
	string manufacturer;
	int year;
public:
	Vehicle();
	void setManufacturer();
	void setYear();
	string getManufacturer();
	int getYear();
	void displayInfo();
};

#endif
