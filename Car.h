#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
	int noOfDoors;
	char* trasmission;
	int noOfSeats;

public:
	static int numberOfCars;
	Car(int, char*, int, char*, char*, int, int, char*);
	Car(Car&);
	int getnoOfDoors();
	char* gettrasmission();
	int getnoOfSeats();

	void setnoOfDoors(int);
	void settrasmission(char*);
	void setnoOfSeats(int);

	void CheckType();
	void Display()const;
	~Car();

	Car& operator=(Car&);
	ostream& operator<<(ostream& fout);
};

