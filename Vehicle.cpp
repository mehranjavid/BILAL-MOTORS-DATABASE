#include "Vehicle.h"

Vehicle::Vehicle()
{
    TypeOfVehicle = nullptr;
    Color = nullptr;
    CompanyName = nullptr;
    NumberOfWeels = 0;
    PowerCC = 0;
}

Vehicle::Vehicle(char* Nam, char*Colr,int Wel,int Pow, char* TOV)
{
    TypeOfVehicle = TOV;
    Color = Colr;
    CompanyName = Nam;
    NumberOfWeels = Wel;
    PowerCC = Pow;
}

void Vehicle::Display() const
{
}

char* Vehicle::getCompanyName()
{
    char* newptr;
    int size = CalculateStringSize(this->CompanyName);
    newptr = new char[size];
    for (int i = 0; i < size; i++)
    {
        newptr[i] = this->CompanyName[i];
    }
     
    return newptr;
}
char* Vehicle::getColor()
{
    char* newptr;
    int size = CalculateStringSize(this->Color);
    newptr = new char[size];
    for (int i = 0; i < size; i++)
    {
        newptr[i] = this->Color[i];
    } 
    return newptr;
}
char* Vehicle::getTypeOfVehicle()
{
    char* newptr;
    int size = CalculateStringSize(this->TypeOfVehicle);
    newptr = new char[size];
    for (int i = 0; i < size; i++)
    {
        newptr[i] = this->TypeOfVehicle[i];
    }
    return newptr;
}
int Vehicle::getPowerCC() {
    return PowerCC;
}
int Vehicle::getNumberOfWeels() {
    return NumberOfWeels;
}

void Vehicle::SetCompanyName(char* Name)
{ 
    int size = CalculateStringSize(Name);
    CompanyName = new char[size];
    for (int i = 0; i < size; i++)
    {
        this->CompanyName[i] = Name[i];
    } 
}
void Vehicle::SetColor(char* Name)
{
    int size = CalculateStringSize(Name);
    this->Color = new char[size];
    for (int i = 0; i < size; i++)
    {
        this->Color[i] = Name[i];
    }
}
void Vehicle::SetTypeOfVehicle(char* Name)
{
    int size = CalculateStringSize(Name);
    TypeOfVehicle = new char[size];
    for (int i = 0; i < size; i++)
    {
        this->TypeOfVehicle[i] = Name[i];
    }
}
void Vehicle::SetNumberOfWeels(int x){
    NumberOfWeels = x;
}
void Vehicle::SetPowerCC(int x) {
    PowerCC = x;
}
Vehicle::~Vehicle()
{
    if (CompanyName != nullptr) { delete[]CompanyName; }
   if (Color != nullptr ){ delete[]Color; }
   if (TypeOfVehicle != nullptr){ delete[]TypeOfVehicle; }

}