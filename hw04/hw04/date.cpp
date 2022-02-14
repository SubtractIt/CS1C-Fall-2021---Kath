/* CS1C HW04
* Programmer: Adit Mohindra
* Class: CS1C T-Th 12:30 pm
* Program designed to create and test modification of members within the Employee, Programmer, and Software Architect Class
*/

#include "date.h"
#include "employee.h"
#include "programmer.h"
#include "architect.h"

// default constructor for Date
Date::Date()
{
	day = 1;
	month = 1;
	year = 2021;
}

// parameterized constructor for Date
Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

// setters
void Date::setDay(int day)
{
	this->day = day;
}

void Date::setMonth(int month)
{
	this->month = month;
}

void Date::setYear(int year)
{
	this->year = year;
}

// getters
int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

// print the date
void Date::printDate()
{
	cout << day << "/" << month << "/" << year;
}


// ========================================================================================================================================//

