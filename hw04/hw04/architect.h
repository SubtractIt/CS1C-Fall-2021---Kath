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
	//int deptNo;
	//string supervisor;
	//double salary_inc;
	//int years_of_exp;
// Postcondition:
//	Software Architect class extends public Employee class
//	includes getters and setters for each class
// -------------------------------------------------------------------------
class SoftwareArchitect : public Employee
{
private:
	int deptNo;
	string supervisor;
	double salary_inc;
	int years_of_exp;

public:
	SoftwareArchitect();
	SoftwareArchitect(string, string, string, int, char, string, double, Date, int, string, double, int);
	void setDepartmentNumber(int);
	void setSupervisor(string);
	void setLastSalaryIncrement(double);
	void setYearsOfExperience(int);
	int getDepartmentNumber();
	string getSupervisor();
	double getLastSalaryIncrement();
	int getYearsOfExperience();
	void print();
};

