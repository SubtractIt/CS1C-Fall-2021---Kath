// hw09.cpp - polymorphism

/*************************************************************************
 * AUTHOR     : Adit Mohindra
 * HW09       : Polymorphism
 * CLASS      : CS 1C
 * SECTION    : TuTh 12:30PM
*************************************************************************/

#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"

#include <iostream>

using namespace std;

//Non Member Function Declarations for printPerimeter and printArea
void printPerimeter(Shape &shape);
void printArea(Shape &shape);


int main()
{
	cout << "************************************** " << endl;
	cout << "*           Running HW09             * " << endl;
	cout << "*      Programmed by Adit Mohindra   * " << endl;
	cout << "*      CS1C Tue&Th  12:30            * " << endl;
	cout << "************************************** " << endl;
	cout << endl;


	float length, width;
	float side1, side2, side3;

	Rectangle r;

	Triangle t;

	cout << "Input length and width of a rectangle:\n";

	cout << "Length:\t";
	cin  >> length;
	cout << "Width:\t";
	cin  >> width;

	r.setLength(length);
	r.setWidth(width);

	printPerimeter(r);
	printArea(r);
	
	cout << "Input sides of a triangle:\n";

	cout << "Side 1:\t";
	cin >> side1;
	cout << "Side 2:\t";
	cin >> side2;
	cout << "Side 3:\t";
	cin >> side3;

	t.setSide1(side1);
	t.setSide2(side2);
	t.setSide3(side3);

	printPerimeter(t);
	printArea(t);


}

//Function definitions for printPerimeter and printArea
void printPerimeter(Shape& shape)
{
	cout << "Perimeter is:\t" << shape.calcPerimeter() << endl;
}

void printArea(Shape& shape)
{
	cout << "Area is:\t" << shape.calcArea() << endl;
}