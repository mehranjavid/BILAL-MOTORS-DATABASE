#pragma once
#include "Vehicle.h"
#include "Bike.h"
#include "Car.h"
#include "Truck.h"
class BilalMotors
{
	int size;
	Vehicle **array;
public:
	BilalMotors();
	void addVehicle(Vehicle*);
	void searchVehicle(char*); 
	~BilalMotors();
	bool saveData(const char* fileName) const;
	void saveData() const;
	bool stringCompare(char*, char*);  
};

