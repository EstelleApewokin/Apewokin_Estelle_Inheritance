//Estelle Apewokin
//July 31, 2022
//CIS 1202 5T1

#include "Vehicle.h" //including class header files
#include "Car.h"	 //^^
#include "Truck.h"   //^^
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
	//creates objects of each class
	Vehicle v;
	Car c;
	Truck t;

	string manu; //will store manufacturer inputted by user
	int yearBuilt, numDoors, towingCap; //store other user input
	
	//getting input for & displaying vehicle information
	cout << "Enter vehicle manufacturer: ";
	getline(cin, manu);
	v.setManufacturer(manu);

	cout << "Enter year built: ";
	cin >> yearBuilt;
	v.setYear(yearBuilt);

	v.displayInfo();

	//resets before asking for more input
	cin.ignore();
	cout << endl;

	//getting input for & displaying car information
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

	//reset
	cin.ignore();
	cout << endl;

	//getting info for & displaying truck information
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