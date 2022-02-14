/* CS1C HW04
* Programmer: Adit Mohindra
* Class: CS1C T-Th 12:30 pm
* Program designed to create and test modification of members within the Employee, Programmer, and Software Architect Class
*/

#include "employee.h"
#include "architect.h"
#include "date.h"
#include "programmer.h"

// default constructor for Employee
Employee::Employee()
{
	name = "";
	id = "";
	phone = "";
	age = 0;
	gender = ' ';
	job_title = "";
	salary = 0;
}

// alt constructor for Employee
Employee::Employee(string name, string id, string phone, int age, char gender, string job_title, double salary, Date hireDate)
{
	this->name = name;
	this->id = id;
	this->phone = phone;
	this->age = age;
	this->gender = gender;
	this->job_title = job_title;
	this->salary = salary;
	this->hireDate.setDay(hireDate.getDay());
	this->hireDate.setMonth(hireDate.getMonth());
	this->hireDate.setYear(hireDate.getYear());
}

// setters
void Employee::setName(string name)
{
	this->name = name;
}

void Employee::setId(string id)
{
	this->id = id;
}

void Employee::setPhoneNumber(string phone)
{
	this->phone = phone;
}

void Employee::setAge(int age)
{
	this->age = age;
}

void Employee::setGender(char gender)
{
	this->gender = gender;
}

void Employee::setJobTitle(string job_title)
{
	this->job_title = job_title;
}

void Employee::setSalary(double salary)
{
	this->salary = salary;
}

void Employee::setHireDate(Date hireDate)
{
	this->hireDate.setDay(hireDate.getDay());
	this->hireDate.setMonth(hireDate.getMonth());
	this->hireDate.setYear(hireDate.getYear());
}

// getters
string Employee::getName()
{
	return name;
}

string Employee::getId()
{
	return id;
}

string Employee::getPhoneNumber()
{
	return phone;
}

int Employee::getAge()
{
	return age;
}

char Employee::getGender()
{
	return gender;
}

string Employee::getJobTitle()
{
	return job_title;
}

double Employee::getSalary()
{
	return salary;
}

Date Employee::getHireDate()
{
	return hireDate;
}

// print the employee details
void Employee::print()
{
	cout << "Name: " << name << endl;
	cout << "ID: " << id << endl;
	cout << "Phone number: " << phone << endl;
	cout << "Age: " << age << endl;
	cout << "Job Title: " << job_title << endl;
	cout << "Salary: " << salary << endl;
	cout << "Hire Date: ";
	hireDate.printDate();
	cout << endl;
}

bool checkPhoneNum(Employee emp, Employee emp2)
{
	return emp.phone == emp2.phone;
}

bool Employee::operator ==(Employee emp)
{
	return phone == emp.phone;
}

void Employee::addAge(int ageInput)
{
	cout << "Adding " << ageInput << " to employee age" << endl;
	age += ageInput;
}

void Employee::operator ++()
{
	age++;
}
void Employee::operator ++(int)
{
	age++;
}

void Employee::operator +=(int ageInput)
{
	age += ageInput;
}





