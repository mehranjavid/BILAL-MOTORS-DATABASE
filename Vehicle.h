#pragma once
#include<iostream>
using namespace std;
#include<fstream>
class Vehicle
{
protected:
	char *CompanyName;
	char *Color;
	int NumberOfWeels;
	int PowerCC;
	char *TypeOfVehicle;
public:
	Vehicle();
	Vehicle(char*, char*,int,int, char*);
	virtual void CheckType()=0;
	virtual void Display()const;

	char* getCompanyName();
	char* getColor();
	int getNumberOfWeels ();
	int getPowerCC ();
	char* getTypeOfVehicle ();

	void SetCompanyName(char*);
	void SetColor(char*);
	void SetNumberOfWeels(int);
	void SetPowerCC(int);
	void SetTypeOfVehicle(char*);

	static int CalculateStringSize(char*);
	virtual	~Vehicle();
};
