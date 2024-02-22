
#include <iostream>
#include <string>
#include "hotel.h"
#include "person.h"

using namespace std;

int main()
{
    // Person* person;
    Hotel hotel;
    int option = 0;
    string fullname;
    int age;
    string cccd;
    int room_type;
    int numberOfDay;
    while (true) {
        cout << endl << " ========== MANAGER HOTEL ========== " << endl
            << " - Enter 1: To insert person for rent." << endl
            << " - Enter 2: To remove a registered person by passport." << endl
            << " - Enter 3: To calculator price by passport." << endl
            << " - Enter 4: To display all persons in the register." << endl
            << " - Enter 5: To Exit." << endl;
    
        cout << endl << " Your Options: ";
        cin >> option;
    
        switch (option)
        {
        case 1: {// Insertion of new person to be rented
            cout << endl << " - OPTION 1: To insert person for rent." << endl;
            cout << "\t Enter full name: ";
            cin.ignore();
            getline(cin, fullname);
            cout << "\t Enter custumer's age: ";
            cin >> age;
            cout << "\t Enter custumer's ID: ";
            cin >> cccd;
            cout << "\t Enter custumer's room type (enter 1,2,3 for room type A,B,C respectively): ";
            cin >> room_type;
            cout << "\t Enter number of days: ";
            cin >> numberOfDay;

            Person person(fullname, age, cccd, numberOfDay, room_type);
            hotel.addCustumer(person);
            break;
        }
        case 2:
            cout << endl << " - OPTION 2:  To remove a registered person by passport." << endl;
            cout << "\t Enter custumer's ID: ";
            cin >> cccd;
            hotel.deleteCustumer(cccd);

            break;

        case 3:
            cout << endl << " - OPTION 3:  To calculator price by passport." << endl;
            cout << "\t Enter custumer's ID: ";
            cin >> cccd;
            hotel.calculateRentalFee(cccd);
            break;
        default:
            cout << "Invalid option! Please try again.";
            break;
        }
    }   

}

