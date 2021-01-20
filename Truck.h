#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
	double containerSize;
	char* category;
	bool fourWheelDrive;

public:
	static int numberOfTrucks;
	Truck(double, char*, bool, char*, char*, int, int, char*);
	Truck(Truck&);
	double getcontainerSize();
	char* getcategory();
	bool getfourWheelDrive();

	void setcontainerSize(double);
	void setcategory(char*);
	void setfourWheelDrive(bool);

	void CheckType();
	void Display()const;
	~Truck();

	Truck& operator=(Truck&);
	ostream& operator<<(ostream&);
};

