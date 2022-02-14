//Triangle Class Header

#pragma once

#include "Shape.h"

// -------------------------------------------------------------------------
// Precondition: 
	//float side1
	//float side2
	// float side3
// Postcondition:
//      Triangle class extending Shape class
//		includes setters and calcPerimeter and calcArea
// -------------------------------------------------------------------------
class Triangle : public Shape
{
private:
	float side1;
	float side2;
	float side3;
public:

	Triangle(float side1 = 0, float side2 = 0, float side3 = 0) : side1(side1), side2(side2), side3(side3) {}

	void setSide1(float side1)
	{
		this->side1 = side1;
	}

	void setSide2(float side2)
	{
		this->side2 = side2;
	}

	void setSide3(float side3)
	{
		this->side3 = side3;
	}

	float calcPerimeter()
	{
		float perimeter = side1 + side2 + side3;

		return perimeter;
	}

	float calcArea()
	{
		float p = calcPerimeter() / 2;

		float area = sqrt(p * (p - side1) * (p - side2) * (p - side3));

		return area;

	}
};