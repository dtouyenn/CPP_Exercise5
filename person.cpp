#include "person.h"
//Person::Person(string name, int age, string cccd, int numberRental) {
//
//};

string Person::getName() {
	return m_name;
}
void Person::setName(string name) {
	this->m_name = name;
}

int Person::getAge() { 
	return m_age; 
}

void Person::setAge(int age) {
	if (age > 0) {
		this->m_age = age;
	}
	else
		cout << "Invalid age value" << endl;
}

string Person::getCccd() { 
	return m_cccd; 
}

void Person::setCccd(string cccd) {
	if (std::stoi(cccd) > 0) {
		this->m_cccd = cccd;
	}
	else 
		cout << "Invalid cccd" << endl;
}

string Person::getRoom()
{
	string temp;
	switch (m_typeRoom)
	{
	case 1:
		temp = "Type A - 500$";
		break;
	case 2:
		temp = "Type B - 300$";
		break;
	case 3:
		temp = "Type C - 100$";
		break;
	default:
		temp = "Invalid room type!";
		break;
	}
	return temp;
}



int Person::getNumberRental()
{
    return m_numberRental;
}

void Person::setNumberRental(int numberRental)
{
	if(numberRental > 0){
		this->m_numberRental = numberRental;
	}
	else 
		cout << "Invalid number of rental day!"<< endl;
}

void Person::display() {
	cout << " - Information custumer: " << endl;
	cout << "\t Name: " << getName() << endl;
	cout << "\t Age: " << getAge() << endl;
	cout << "\t Cccd: " << getCccd() << endl;
	cout << "\t Room Type: " << getRoom() << endl;
	cout << "\t Number Rental: " << getNumberRental() << endl;
}
