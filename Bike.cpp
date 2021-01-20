#include "Bike.h"

Bike::Bike(double heig = 0, bool ss = false, bool db = false, char* companyName= nullptr, char* color = nullptr, int numberOfWheels=0, int powerCC=0, char* type = nullptr) :Vehicle(companyName, color, numberOfWheels, powerCC, type)
{
	height = heig;
	selfStart = ss;
	discBrake = db;  
	numberOfBikes++;
}

Bike::Bike(Bike& obj)
{
	*this = obj;
}

Bike::~Bike()
{
}

Bike& Bike::operator=(Bike& obj)
{
	Bike obj2;
		obj2.setheight(obj.getheight());
		obj2.SetColor(obj.getColor());
		obj2.SetCompanyName(obj.getCompanyName());
		obj2.setselfStart(obj.getselfStart());
		obj2.setdiscBrake(obj.getdiscBrake());
		obj2.SetNumberOfWeels(obj.getNumberOfWeels());
		obj2.SetPowerCC(obj.getPowerCC());
		obj2.SetTypeOfVehicle(obj.getTypeOfVehicle());
		return obj2;
}

ostream& Bike::operator<<(ostream& fout)
{
	fout << "\nHeight: " << height;
	fout << "\nselfStart: " << selfStart;
	fout << "\ndiscBrake: " << discBrake;
	fout << "\nCompanyName: " << CompanyName;
	fout << "\nColor: " << Color;
	fout << "\nNumberOfWeels: " << NumberOfWeels;
	fout << "\nPowerCC: " << PowerCC;
	fout << "\nTypeOfVehicle: " << TypeOfVehicle;
	return fout;
}

double Bike::getheight()
{
	return height;
}

bool Bike::getselfStart()
{
	return selfStart;
}
bool Bike::getdiscBrake()
{
	return discBrake;
}

void Bike::setheight(double x)
{
	height=x;
}

void Bike::setselfStart(bool x)
{
	 selfStart=x;
}
void Bike::setdiscBrake(bool x)
{
	discBrake = x;
}
 

void Bike::CheckType()
{
	switch (NumberOfWeels)
	{
		case 2 : {
			char name[] = "Bike";
			TypeOfVehicle = name;
			break;
		}
		case 4: {
			char name[] = "Car";
			TypeOfVehicle = name;
			break;
		}
	default:
	{
		char name[] = "Truck";
		TypeOfVehicle = name;
		break;
	}
	}  
}

void Bike::Display() const
{
	cout << "\nHeight: " << height;
	cout << "\nselfStart: " << selfStart;
	cout << "\ndiscBrake: " << discBrake;
	cout << "\nCompanyName: " << CompanyName;
	cout << "\nColor: " << Color;
	cout << "\nNumberOfWeels: " << NumberOfWeels;
	cout << "\nPowerCC: " << PowerCC;
	cout << "\nTypeOfVehicle: " << TypeOfVehicle;
}
