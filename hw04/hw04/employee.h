#pragma once

//* CS1C HW04
//* Programmer: Adit Mohindra
//* Class : CS1C T - Th 12 : 30 pm
//* Program designed to create and test modification of members within the Employee, Programmer, and Software Architect Class
//* /


#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include "date.h"

using namespace std;

// -------------------------------------------------------------------------
// Precondition: 
	//string name
	//string id
	//string phone
	//int age
	//char gender
	//string job_title
	//double salary
	//Date hireDate
// Postcondition:
//      Employee class with getters and setters
// -------------------------------------------------------------------------

class Employee
{
private:				// variable declarations for Employee data type
	string name;
	string id;
	string phone;
	int age;
	char gender;
	string job_title;
	double salary;
	Date hireDate;

public:					// method declarations
	Employee();
	Employee(string n, string i, string p, int a, char g, string j, double s, Date h);


	// setters
	void setName(string n);
	void setId(string i);
	void setPhoneNumber(string p);
	void setAge(int a);
	void setGender(char g);
	void setJobTitle(string j);
	void setSalary(double s);
	void setHireDate(Date h);

	// getters
	string getName();
	string getId();
	string getPhoneNumber();
	int getAge();
	char getGender();
	string getJobTitle();
	double getSalary();
	Date getHireDate();

	// print function
	void print();


	friend bool checkPhoneNum(Employee emp, Employee emp2);

	friend ostream& operator<<(ostream& output, const Employee& e) {
		output << "Name : " << e.name << endl;
		output << "Phone : " << e.phone << endl;
		output << "Age : " << e.age << endl;
		cout << "==================" << endl;
		return output;
	}

	friend istream& operator>>(istream& input, Employee& e) {

		cout << "Name : ";
		cin >> e.name;
		cout << "Phone : ";
		cin >> e.phone;
		cout << "Age : ";
		cin >> e.age;
		return input;
	}

	bool operator ==(Employee emp);
	void operator +=(int age);
	void operator ++();
	void operator ++(int);

	void addAge(int age);

};

