#include "hotel.h"

//Hotel::Hotel() {
//	/*m_price = {500, 300, 100};*/
//};

void Hotel::addCustumer(Person& custumer) {
	m_custumer.push_back(custumer);
	cout << endl << " ADDING CUSTOMERS SUCCESSFULLY!!! " << endl;
	custumer.display();
}

void Hotel::deleteCustumer(const string& cccd) {
	if (m_custumer.size() == NULL) {
		cout << endl << " No customers exist" << endl;
		cout << " DELETE CUSTOMERS FAILED!!! " << endl;
		return;
	}
	for (size_t i = 0; i < m_custumer.size(); i++) {
		if(m_custumer[i].getCccd() == cccd) {
			m_custumer[i].display();
			char temp;
			while (true) {
				cout << "Do you want to delete this customer? (y/n): ";
				cin >> temp;
				if (temp == 'y') {
					m_custumer.erase(m_custumer.begin() + i);
					cout << endl << " DELETE CUSTOMERS SUCCESSFULLY!!! " << endl;
					break;
				}
				else if (temp == 'n') {
					cout << " DELETE CUSTOMERS FAILED!!! " << endl;
					break;
				}
				else {
					cout << " ERROR: wrong syntax!!! " << endl;
				}
			}
			return;
		}
		else {
			cout << " Customer information does not exist!" << endl;
			cout << " DELETE CUSTOMERS FAILED!!! " << endl;
		}
	}
}

void Hotel::calculateRentalFee(const string& cccd)
{
	if (m_custumer.size() == NULL) {
		cout << endl << " No customers exist" << endl;
		cout << " CALCULATE CUSTOMERS'S RENTAL FEE FAILED!!! " << endl;
		return;
	}
	for (size_t i = 0; i < m_custumer.size(); i++) {
		if (m_custumer[i].getCccd() == cccd) {
			m_custumer[i].display();
			char temp;
			while (true) {
				cout << "Is customer information correct? (y/n): ";
				cin >> temp;
				if (temp == 'y') {
					cout << " - Rental Fee = " << getPrice(m_custumer[i].getRoom())*m_custumer[i].getNumberRental() << endl;
					cout << " CALCULATE CUSTOMERS'S RENTAL FEE SUCCESSFULLY!!! " << endl;
					break;
				}
				else if (temp == 'n') {
					cout << "  CALCULATE CUSTOMERS'S RENTAL FEE CUSTOMERS FAILED!!! " << endl;
					break;
				}
				else {
					cout << " ERROR: wrong syntax!!! " << endl;
				}
			}
			return;
		}
		else {
			cout << " Customer information does not exist!" << endl;
			cout << "  CALCULATE CUSTOMERS'S RENTAL FEE FAILED!!! " << endl;
		}
	}
}
int Hotel::getPrice(const string& typeRoom)
{
	int price;
	if (typeRoom == "Type A - 500$") { price = 500; }
	else if (typeRoom == "Type B - 300$") { price = 300; }
	else if (typeRoom == "Type C - 100$") { price = 100; };
	return price;
}
//void Hotel::display()
//{
//	cout << " - Information custumer: " << endl;
//	cout << "\t Name: " << person.getName() << endl;
//	cout << "\t Age: " << person.getAge() << endl;
//	cout << "\t Cccd: " << person.getCccd() << endl;
//	cout << "\t Room type: " << endl;
//	cout << "\t Number Rental: " << person.getNumberRental() << endl;
//}
