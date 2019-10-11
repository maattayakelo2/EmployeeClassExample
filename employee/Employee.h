#pragma once
class Employee
{
private:
	char fname[50];
	char lname[50];
	bool isExempt;
	double compensation;
public:
	Employee();
	void getData();
	void showData();
};