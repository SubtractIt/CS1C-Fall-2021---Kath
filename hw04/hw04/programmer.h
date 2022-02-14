#pragma once

/* CS1C HW04
* Programmer: Adit Mohindra
* Class: CS1C T-Th 12:30 pm
* Program designed to create and test modification of members within the Employee, Programmer, and Software Architect Class
*/


#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "employee.h"

using namespace std;

// -------------------------------------------------------------------------
// Precondition: 
	//int deptNo
	//string supervisor
	//double salary_inc
	//bool knowsC
	//bool knowsJava
// Postcondition:
//      Programmer class extending Employee class
//		includes getters and setters function
// -------------------------------------------------------------------------
class Programmer : public Employee
{
private:
	int deptNo;
	string supervisor;
	double salary_inc;
	bool knowsC;
	bool knowsJava;

public:
	Programmer();
	Programmer(string, string, string, int, char, string, double, Date, int, string, double, bool, bool);
	void setDepartmentNumber(int);
	void setSupervisor(string);
	void setLastSalaryIncrement(double);
	void setKnowsC(bool);
	void setKnowsJava(bool);
	int getDepartmentNumber();
	string getSupervisor();
	double getLastSalaryIncrement();
	bool getKnowsC();
	bool getKnowsJava();
	void print();
};
