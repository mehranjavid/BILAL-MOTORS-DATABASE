#include "Truck.h"

Truck::Truck(double d=0, char* c=nullptr, bool b=false, char* companyName = nullptr, char* color = nullptr, int numberOfWheels = 0, int powerCC = 0, char* type = nullptr) :Vehicle(companyName, color, numberOfWheels, powerCC, type)
{
     containerSize=d;
     category=c;
     fourWheelDrive=b; 
     numberOfTrucks++;
}
Truck::Truck(Truck& obj)
{
    *this = obj;
}

double Truck::getcontainerSize()
{
    return containerSize;
}
char* Truck::getcategory()
{ 
        char* newptr;
        int size = CalculateStringSize(this->category);
        newptr = new char[size];
        for (int i = 0; i < size; i++)
        {
            newptr[i] = this->category[i];
        } 
        return newptr;
}
bool Truck::getfourWheelDrive()
{
    return 	fourWheelDrive;
}


void Truck::setcontainerSize(double x)
{
    containerSize = x;
}
void Truck::setcategory(char* cat)
{ 
    int size =  CalculateStringSize(cat);
    category = new char[size];
    for (int i = 0; i < size; i++)
    {
        category[i] = cat[i];
    } 
}
void Truck::setfourWheelDrive(bool x)
{
    fourWheelDrive = x;
}

 
void Truck::CheckType()
{
    switch (NumberOfWeels)
    {
    case 2: {
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
void Truck::Display() const
{
    cout << "\ncontainerSize: " << containerSize;
    cout << "\ncategory: " << category;
    cout << "\nfourWheelDrive: " << fourWheelDrive;

    cout << "\nCompanyName: " << CompanyName;
    cout << "\nColor: " << Color;
    cout << "\nNumberOfWeels: " << NumberOfWeels;
    cout << "\nPowerCC: " << PowerCC;
    cout << "\nTypeOfVehicle: " << TypeOfVehicle;
}

Truck::~Truck()
{
    if (category!=nullptr)
    {
        delete[]category;
    }
}

Truck& Truck::operator=(Truck& obj)
{
    Truck obj2;
    obj2.setcategory(obj.getcategory());
    obj2.SetColor(obj.getColor());
    obj2.SetCompanyName(obj.getCompanyName());
    obj2.setcontainerSize(obj.getcontainerSize());
    obj2.setfourWheelDrive(obj.getfourWheelDrive());
    obj2.SetNumberOfWeels(obj.getNumberOfWeels());
    obj2.SetPowerCC(obj.getPowerCC());
    obj2.SetTypeOfVehicle(obj.getTypeOfVehicle());
    return obj2;
}
ostream& Truck::operator<<(ostream& fout)
{
    fout << "\ncontainerSize: " << containerSize;
    fout << "\ncategory: " << category;
    fout << "\nfourWheelDrive: " << fourWheelDrive;

    fout << "\nCompanyName: " << CompanyName;
    fout << "\nColor: " << Color;
    fout << "\nNumberOfWeels: " << NumberOfWeels;
    fout << "\nPowerCC: " << PowerCC;
    fout << "\nTypeOfVehicle: " << TypeOfVehicle;
    return fout;
}


