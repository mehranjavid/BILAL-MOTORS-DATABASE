#include "Car.h"

Car::Car(int d = 0, char* t = nullptr, int s = 0, char* companyName = nullptr, char* color = nullptr, int numberOfWheels = 0, int powerCC = 0, char* type = nullptr) :Vehicle(companyName, color, numberOfWheels, powerCC, type)
{
     noOfDoors=d;
     trasmission=t;
     noOfSeats=s; 
     numberOfCars++;
}

Car::Car(Car& obj)
{
    *this = obj;
}

int Car::getnoOfDoors()
{
    return noOfDoors;
}
char* Car::gettrasmission()
{
    char* newptr;
    int size =  CalculateStringSize(this->trasmission);
    newptr = new char[size];
    for (int i = 0; i < size; i++)
    {
        newptr[i] = this->trasmission[i];
    } 
    return newptr;
}
int Car::getnoOfSeats()
{
    return noOfSeats;
}
void Car::setnoOfDoors(int x)
{
    noOfDoors = x;
}

void Car::settrasmission(char* trans)
{
    int size =  CalculateStringSize(trans);
    this->trasmission = new char[size];
    for (int i = 0; i < size; i++)
    {
        this->trasmission[i] =trans[i];
    } 
}
void Car::setnoOfSeats(int x)
{
        noOfSeats = x;
}

void Car::CheckType()
{
    switch (NumberOfWeels)
    {
    case 2: {
        char name[] = "Bike";
        this->TypeOfVehicle = name;
        break;
    }
    case 4: {
        char name[] = "Car";
        this->TypeOfVehicle = name;
        break;
    }
    default:
    {
        char name[] = "Truck";
        this->TypeOfVehicle = name;
        break;
    }
    }
}
void Car::Display() const
{
    cout << "\nnoOfDoors: " << noOfDoors;
    cout << "\ntrasmission: " << trasmission;
    cout << "\nnoOfSeats: " << noOfSeats;

    cout << "\nCompanyName: " << CompanyName;
    cout << "\nColor: " << Color;
    cout << "\nNumberOfWeels: " << NumberOfWeels;
    cout << "\nPowerCC: " << PowerCC;
    cout << "\nTypeOfVehicle: " << TypeOfVehicle;
}

Car::~Car()
{
    if (trasmission!=nullptr)
    {
        delete[]trasmission;
    }
}

Car& Car::operator=(Car& obj)
{
    Car obj2;
    obj2.setnoOfDoors(obj.getnoOfDoors());
    obj2.SetColor(obj.getColor());
    obj2.SetCompanyName(obj.getCompanyName());
    obj2.settrasmission(obj.gettrasmission());
    obj2.setnoOfSeats(obj.getnoOfSeats());
    obj2.SetNumberOfWeels(obj.getNumberOfWeels());
    obj2.SetPowerCC(obj.getPowerCC());
    obj2.SetTypeOfVehicle(obj.getTypeOfVehicle());
    return obj2;
}
ostream& Car::operator<<(ostream& fout)
{
    fout << "\nnoOfDoors: " << noOfDoors;
    fout << "\ntrasmission: " << trasmission;
    fout << "\nnoOfSeats: " << noOfSeats;

    fout << "\nCompanyName: " << CompanyName;
    fout << "\nColor: " << Color;
    fout << "\nNumberOfWeels: " << NumberOfWeels;
    fout << "\nPowerCC: " << PowerCC;
    fout << "\nTypeOfVehicle: " << TypeOfVehicle;
    return fout;
}
 
