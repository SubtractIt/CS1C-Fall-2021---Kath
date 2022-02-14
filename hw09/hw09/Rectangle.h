//Rectangle Class Header

#pragma once

#include "Shape.h"

// -------------------------------------------------------------------------
// Precondition: 
	//float width
	//float width
// Postcondition:
//      Rectangle class extending Shape class
//		includes setters and calcPerimeter and calcArea
// -------------------------------------------------------------------------
class Rectangle : public Shape
{
private:
	float length;
	float width;

public:
	Rectangle(float length = 0, float width = 0) : length(length), width(width) {}

	void setLength(float length)
	{
		this->length = length;
	}

	void setWidth(float width)
	{
		this->width = width;
	}

	float calcPerimeter()
	{
		float perimeter = 2 * (length + width);

		return perimeter;
	}

	float calcArea()
	{
		float area = length * width;

		return area;
	}

};