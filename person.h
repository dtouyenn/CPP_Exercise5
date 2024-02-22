#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string m_name;
	int m_age;
	string m_cccd;
	int m_numberRental;
	int m_typeRoom;
public:
	Person(string name, int age, string cccd, int numberRental, int typeRoom) : m_name(name), m_age(age), m_cccd(cccd), m_numberRental(numberRental), m_typeRoom(typeRoom) {};
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	string getCccd();
	void setCccd(string cccd);
	string getRoom();
	int getNumberRental();
	void setNumberRental(int m_numberRental);
	void display();
};
