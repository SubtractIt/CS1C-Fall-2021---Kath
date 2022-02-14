//Shape Class Header

#pragma once

#include <cmath>

// -------------------------------------------------------------------------
// Precondition: 
	//pure virtual function calcPerimeter
	//pure virtual function calcArea
// Postcondition:
//      Abstract Base Class for Rectangle and Triangle
//		includes pure virtual functions calcPerimeter and calcArea
// -------------------------------------------------------------------------
class Shape
{
public:
	virtual float calcPerimeter() = 0;
	virtual float calcArea() = 0;

};
