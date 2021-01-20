#include<iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"
#include "Truck.h"
#include "BilalMotors.h"
using namespace std;

void ShowVehicles(const BilalMotors& obj) {
    obj.saveData();
}

int Vehicle::CalculateStringSize(char* string)
{
    if (string[0] == '\0')
    {
        return 1;
    }
    return 1 + CalculateStringSize(&string[1]);
}

int Car::numberOfCars = 0;
int Bike::numberOfBikes = 0;
int Truck::numberOfTrucks = 0;

int main()
{ 
    BilalMotors obj; 

    L1:
    cout << "\n\n\t\t***BILAL MOTORS***\n" <<
        "S Show vehicles list(brief)\n" <<
        "E Create a data file(output file)\n" <<
        "A Add new vehicle\n" <<
        "F Find Vehicle by type\n" <<
        "Q Quit Program\n";
    char choice;
    cin >> choice;
    switch (choice)
    {
    case 'S':
    case 's': {
        ShowVehicles(obj);
        goto L1; }
    case 'E': 
    case 'e': {
        cout << "\nEnter file name: ";
        char fileName[50];
        cin >> fileName;
        cin.ignore();
        obj.saveData(fileName);
        goto L1; }
    case 'A': 
    case 'a': {
        cout << "\n\nB for Bike\n" <<
            "C for Car\n" <<
            "T for Truck\n";
        cin >> choice;

            switch (choice)
            {
            case 'B':
            case 'b': {
                cout << "\nInput height: ";
                double height;
                cin >> height;
                cout << "\nIs self Start Enter 1 for true or 0 for false: ";
                bool selfStart;
                cin >> selfStart;
                cout << "\nIs disc Brake Enter  1 for true or 0 for false:  ";
                bool discBrake;
                cin >> discBrake;
                cout << "\nCompany name: ";
                char companyName[50];
                char type[]="Bike";
                cin >> companyName;
                cin.ignore();
                cout << "\ncolor: ";
                char color[50];
                cin >> color;
                cin.ignore();
                cout << "\npower in CC: ";
                int powerCC;
                cin >> powerCC;
                Bike *obj2=new Bike(height, selfStart, discBrake, companyName, color, 2, powerCC, type);
                obj.addVehicle(obj2);
                goto L1; }
            case 'C':
            case 'c': {
                cout << "\nno of doors: ";
                int noOfDoors;
                cin >> noOfDoors; 
                cout << "\nno Of Seats: ";
                int noOfSeats;
                cin >> noOfSeats;
                cout << "\ntrasmission: ";
                char trasmission[50];
                cin >> trasmission;
                cin.ignore();

                cout << "\nCompany name: ";
                char companyName[50];
                char type[] = "Car";
                cin >> companyName;
                cin.ignore();
                cout << "\ncolor: ";
                char color[50];
                cin >> color;
                cin.ignore();
                cout << "\npower in CC: ";
                int powerCC;
                cin >> powerCC;
                Car* obj2 = new Car(noOfDoors, trasmission, noOfSeats, companyName, color, 4, powerCC, type);
                obj.addVehicle(obj2);
                goto L1; }
            case 'T':
            case 't': {
                cout << "\ncontainer Size: ";
                double containerSize;
                cin >> containerSize;
                cout << "\nfour Wheel Drive  1 for true or 0 for false: ";
                bool fourWheelDrive;
                cin >> fourWheelDrive;
                cout << "\ncategory: ";
                char category[50];
                cin >> category;
                cin.ignore();

                cout << "\nCompany name: ";
                char companyName[50];
                char type[] = "Truck";
                cin >> companyName;
                cin.ignore();
                cout << "\ncolor: ";
                char color[50];
                cin >> color;
                cin.ignore();
                cout << "\npower in CC: ";
                int powerCC;
                cin >> powerCC;
                Truck* obj2 = new Truck(containerSize, category, fourWheelDrive, companyName, color, 4, powerCC, type);
                obj.addVehicle(obj2);
                goto L1; }
            default:
                break;
            }

        goto L1; }
    
    case 'F': 
    case 'f': {
        cout << "\nEnter Type to search for vehicles: ";
        char types[50];
        cin >> types;
        cin.ignore();
        obj.searchVehicle(types);
        goto L1; } 
    default:
        break;
    }





}

