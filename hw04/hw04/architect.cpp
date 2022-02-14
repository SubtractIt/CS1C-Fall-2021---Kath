/* CS1C HW04
* Programmer: Adit Mohindra
* Class: CS1C T-Th 12:30 pm
* Program designed to create and test modification of members within the Employee, Programmer, and Software Architect Class
*/

#include "employee.h"
#include "architect.h"
#include "date.h"
#include "programmer.h"

// default constructor
SoftwareArchitect::SoftwareArchitect() : Employee()
{
	deptNo = 0;
	supervisor = "";
	salary_inc = 0;
	years_of_exp = 0;
}

// alt constructor
SoftwareArchitect::SoftwareArchitect(string name, string id, string phone, int age, char gender, string job_title, double salary, Date hireDate, int deptNo, string supervisor, double salary_inc, int years_of_exp)
	: Employee(name, id, phone, age, gender, job_title, salary, hireDate)
{
	this->deptNo = deptNo;
	this->supervisor = supervisor;
	this->salary_inc = salary_inc;
	this->years_of_exp = years_of_exp;
}

// setters
void SoftwareArchitect::setDepartmentNumber(int deptNo)
{
	this->deptNo = deptNo;
}

void SoftwareArchitect::setSupervisor(string supervisor)
{
	this->supervisor = supervisor;
}

void SoftwareArchitect::setLastSalaryIncrement(double salary_inc)
{
	this->salary_inc = salary_inc;
}

void SoftwareArchitect::setYearsOfExperience(int years)
{
	this->years_of_exp = years;
}

// getters
int SoftwareArchitect::getDepartmentNumber()
{
	return deptNo;
}

string SoftwareArchitect::getSupervisor()
{
	return supervisor;
}

double SoftwareArchitect::getLastSalaryIncrement()
{
	return salary_inc;
}

int SoftwareArchitect::getYearsOfExperience()
{
	return years_of_exp;
}

// print Software architect
void SoftwareArchitect::print()
{
	Employee::print();
	cout << "Department Number: " << deptNo << endl;
	cout << "Supervisor: " << supervisor << endl;
	cout << "Percentage of last salary increase: " << salary_inc << "%" << endl;
	cout << "Years of experience: " << years_of_exp << endl;
}

