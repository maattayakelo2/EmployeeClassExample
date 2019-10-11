#include <iostream>
#include "Employee.h"
using namespace std;

// constructor
Employee::Employee()
{
	isExempt = true;
	compensation = 0;
}

void Employee::getData()
{
	char answer;
	cout << "first name?" << endl;
	cin.getline(fname, 50);
	cout << "last name? " << endl;
	cin.getline(lname, 50);
	cout << "is employee exempt enter  Y" << endl;
	cin >> answer;
	if (answer == 'Y' || answer == 'y')
		isExempt = true;
	else
		isExempt = false;
	cout << " compensation ? " << endl;
	cin >> compensation;
}

void Employee::showData()
{
	cout << " your employee:" << endl;
	cout << fname << " " << lname << endl;
	if (isExempt)
		cout << "exempt employee" << endl;
	else
		cout << "hourly employee" << endl;
	cout << "compensation " << compensation << endl;
}

