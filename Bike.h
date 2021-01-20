#pragma once
#include "Vehicle.h"
class Bike : public Vehicle
{
	double height;
	bool selfStart;
	bool discBrake;

public:
	static int numberOfBikes;
	Bike(double, bool, bool, char*, char*, int, int, char*);
	Bike(Bike&);
	double getheight();
	bool getselfStart();
	bool getdiscBrake();

	void setheight(double);
	void setselfStart(bool);
	void setdiscBrake(bool);

	 void CheckType();
	 void Display()const;
	~Bike();

	Bike& operator=(Bike&);
	ostream& operator<<(ostream& fout);
};

