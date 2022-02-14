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

using namespace std;

// class Date specification

// -------------------------------------------------------------------------
// Precondition: 
//      day: type int
//      month: type int
//		year: type int
// Postcondition:
//      creates Date class
// -------------------------------------------------------------------------

class Date
{
private:				// variable declarations for Date data type
	int month;
	int day;
	int year;

public:					// method declarations
	Date();
	Date(int month, int day, int year);

	void setDay(int a);
	void setMonth(int b);
	void setYear(int c);
	int getDay();
	int getMonth();
	int getYear();
	void printDate();
};


