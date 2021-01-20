#include "BilalMotors.h"

BilalMotors::BilalMotors()
{
	size = 0;
	array = nullptr;
}

void BilalMotors::addVehicle(Vehicle* obj)
{
	if (array==nullptr)
	{
		array = new Vehicle*[1];
		array[size] = obj;
		size++;
	}
	else
	{
		Vehicle** newarray=new Vehicle * [size+1];
		for (int i = 0; i < size; i++)
		{
			newarray[i] = array[i];
		}
		newarray[size] = obj;
		size++;
		array = newarray;
	}
}

void BilalMotors::searchVehicle(char* obj)
{
	for (int i = 0; i < size; i++)
	{
		if (stringCompare(obj,this->array[i]->getTypeOfVehicle())) {
			cout << "Company Name					Type			 Color		Power\n";
			char* ptr = this->array[i]->getCompanyName();
			for (int i = 0; ptr[i] != '\0'; i++)
			{
				cout << ptr[i];
			}
			cout << "						";
			ptr = this->array[i]->getTypeOfVehicle();
			for (int i = 0; ptr[i] != '\0'; i++)
			{
				cout << ptr[i];
			}
			cout << "			";
			ptr = this->array[i]->getColor();
			for (int i = 0; ptr[i] != '\0'; i++)
			{
				cout << ptr[i];
			}
			cout << "		"
				<< this->array[i]->getPowerCC() << endl;
		}
	}
}

BilalMotors::~BilalMotors()
{ 
	if (array!=nullptr)
	{
		delete[]array;
	}
}

bool BilalMotors::saveData(const char* fileName) const
{
	ofstream fout;  
//---------------------------------------------------------------------------------------------------------------------------------
	int sizeofarray = 1;
	for (int i = 0;  fileName[i]!='\0'; i++)
	{
		sizeofarray++;
	}
	sizeofarray += 4;
	char *newFilename = new char[sizeofarray];
	sizeofarray  = 0;
	for (int i = 0; fileName[i] != '\0'; i++)
	{
		newFilename[i]=fileName[i];						//appending .txt to file name
		sizeofarray++;
	} 
		newFilename[sizeofarray] ='.';
		sizeofarray++;
		newFilename[sizeofarray] = 't';
		sizeofarray++;
		newFilename[sizeofarray] = 'x';
		sizeofarray++; 
		newFilename[sizeofarray] = 't';
		sizeofarray++;
		newFilename[sizeofarray] = '\0';
//---------------------------------------------------------------------------------------------------------------------------------
	fout.open(newFilename);
	if (fout.is_open())
	{
		fout << "Vehicle Information\n";
		fout << "--------------------\n";
		fout << "Number of Bikes: "<< Bike::numberOfBikes <<endl;
		fout << "Number of Cars: "<< Car::numberOfCars <<endl;
		fout << "Number of Trucks: "<< Truck::numberOfTrucks <<endl;
		fout << "Company Name					Type			 Color		Power\n";
		fout << "----------------------------------------------------------------------\n";
		for (int i = 0; i < this->size; i++)
		{
			fout << this->array[i]->getCompanyName() << "										" << this->array[i]->getTypeOfVehicle() << "					 " << this->array[i]->getColor() << "			" << this->array[i]->getPowerCC() << endl;
		}
	}
	else
	{
		cout << "\nfile opening error";
		return false;
	}
	return true;
}

void BilalMotors::saveData() const
{ 
	cout << "Number of Vehicle: "<< size <<endl; 
	cout << "-------------------------------------------------------------------------------------------------\n";
	for (int i = 0; i < this->size; i++)
	{
		cout << "Company Name					Type			 Color		Power\n";
		char* ptr = this->array[i]->getCompanyName();
		for (int i = 0; ptr[i]!='\0'; i++)
		{
			cout << ptr[i];
		}
		cout << "						";
		ptr = this->array[i]->getTypeOfVehicle();
		for (int i = 0; ptr[i] != '\0'; i++)
		{
			cout << ptr[i];
		}
		cout << "			";
			ptr = this->array[i]->getColor();
			for (int i = 0; ptr[i] != '\0'; i++)
			{
				cout << ptr[i];
			}
			cout << "		"
				 << this->array[i]->getPowerCC() << endl;
		cout << "-------------------------------------------------------------------------------------------------\n";
	}
}

bool BilalMotors::stringCompare(char* str1, char* str2)
{
	if (str1 == nullptr && str2 == nullptr)
		return true;
	if ((str1 != nullptr && str2 == nullptr) || (str1 == nullptr && str2 != nullptr))
		return false;
	for (int i = 0; str1[i]!='\0' && str2[i] != '\0'; i++)
	{
		if (str2[i]=='\0' || str1[i] == '\0')
		{
			return false;
		}
		if (str2[i] !=  str1[i] )
		{
			return false;
		}
	}
	return true;
}
 
 

