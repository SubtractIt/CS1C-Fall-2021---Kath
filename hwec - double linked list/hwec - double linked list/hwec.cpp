#include "linkedlist.h"
#include <iostream>

using namespace std;

int main()
{

	LinkedList<int> list1;
	LinkedList<int> list_moved_to;
	LinkedList<int> list_reverse;

	LinkedList<double> list_doubles;
	LinkedList<double> list_moved_d;
	LinkedList<double> list_reverse_d;


	list1.insertTail(20);
	list1.insertTail(40);
	list1.insertTail(60);
	list1.insertTail(80);
	list1.insertTail(100);
	
	cout << "LINKED LIST - INT\n";
	cout << "Printing from head:\n";
	list1.printFromHead();

	cout << endl;

	list_moved_to = list1;
	cout << "Printing new list copied - from head:\n";
	list_moved_to.printFromHead();

	cout << endl;

	list_reverse = list1;
	cout << "Printing new list reversed:\n";
	list_reverse.printFromTail();

	list_doubles.insertTail(20.1);
	list_doubles.insertTail(40.9);
	list_doubles.insertTail(60.4);
	list_doubles.insertTail(80.9);
	list_doubles.insertTail(100.3);

	cout << "\nLINKED LIST - DOUBLE\n";
	cout << "Printing from head:\n";
	list_doubles.printFromHead();

	cout << endl;

	list_moved_d = list_doubles;
	cout << "Printing new list copied - from head:\n";
	list_moved_d.printFromHead();

	cout << endl;

	list_reverse_d = list_doubles;
	cout << "Printing new list reversed:\n";
	list_reverse_d.printFromTail();


	return 0;
}