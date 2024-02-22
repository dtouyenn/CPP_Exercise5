#pragma once

#include <vector>
#include "person.h"

using namespace std;

class Hotel {
private:
	vector<Person> m_custumer;
	vector<int> m_price;
	int priceA, priceB, priceC;
public:
	Hotel() {
		m_price = { 500, 300, 100 };
	};
	void addCustumer(Person& custumer);
	void deleteCustumer(const string& cccd);
	void calculateRentalFee(const string& cccd);
	int getPrice(const string& typeRoom);
	//void display();
};
