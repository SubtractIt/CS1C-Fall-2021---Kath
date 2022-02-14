/* CS1C HW04
* Programmer: Adit Mohindra
* Class: CS1C T-Th 12:30 pm
* Program designed to create and test modification of members within the Employee, Programmer, and Software Architect Class
*/

#include "employee.h"
#include "architect.h"
#include "date.h"
#include "programmer.h"

// default constructor for Programmer
Programmer::Programmer() : Employee()
{
	deptNo = 0;
	supervisor = "";
	salary_inc = 0;
	knowsC = false;
	knowsJava = false;
}

// alt constructor
Programmer::Programmer(string name, string id, string phone, int age, char gender, string job_title, double salary, Date hireDate, int deptNo, string supervisor, double salary_inc, bool knowsC, bool knowsJava)
	: Employee(name, id, phone, age, gender, job_title, salary, hireDate)
{
	this->deptNo = deptNo;
	this->supervisor = supervisor;
	this->salary_inc = salary_inc;
	this->knowsC = knowsC;
	this->knowsJava = knowsJava;
}

// setters
void Programmer::setDepartmentNumber(int deptNo)
{
	this->deptNo = deptNo;
}

void Programmer::setSupervisor(string supervisor)
{
	this->supervisor = supervisor;
}

void Programmer::setLastSalaryIncrement(double salary_inc)
{
	this->salary_inc = salary_inc;
}

void Programmer::setKnowsC(bool knowsC)
{
	this->knowsC = knowsC;
}

void Programmer::setKnowsJava(bool knowsJava)
{
	this->knowsJava = knowsJava;
}

// getters
int Programmer::getDepartmentNumber()
{
	return deptNo;
}

string Programmer::getSupervisor()
{
	return supervisor;
}

double Programmer::getLastSalaryIncrement()
{
	return salary_inc;
}

bool Programmer::getKnowsC()
{
	return knowsC;
}

bool Programmer::getKnowsJava()
{
	return knowsJava;
}

// print programmer details
void Programmer::print()
{
	Employee::print();
	cout << "Department Number: " << deptNo << endl;
	cout << "Supervisor: " << supervisor << endl;
	cout << "Percentage of last salary increase: " << salary_inc << "%" << endl;
	cout << "Language(s) known: ";
	if (knowsC)
		cout << "C++" << endl;
	if (knowsJava)
		cout << "Java" << endl;
	if ((!knowsC) && (!knowsJava))
		cout << "None" << endl;
}






