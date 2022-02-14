// hw12.cpp
// Circular and Templated Queue Implementation

/*************************************************************************
 * AUTHOR     : Adit Mohindra
 * HW11       : Circular and Templated Queue Implementation
 * CLASS      : CS 1C
 * SECTION    : Tuesday Thursday & 12:30 PM
*************************************************************************/

#include "queue.h"
#include "string"

int main()
{
	//declare 3 queues
	queueType<string> q1(10);
	queueType<double> q2(10);
	queueType<int> q3(10);
	
	//q1 operations
	cout << "Queue 1 Operations: Type String\n";
	q1.enqueue("Dog");
	q1.print();
	q1.enqueue("Cat");
	q1.print();
	q1.enqueue("Bird");
	q1.print();
	q1.enqueue("Tiger");
	q1.print();
	q1.enqueue("Lion");
	q1.print();
	q1.enqueue("Spider");
	q1.print();

	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();

	q1.enqueue("Panther");
	q1.print();
	q1.enqueue("Elephant");
	q1.print();
	q1.enqueue("Cobra");
	q1.print();
	q1.enqueue("Hippo");
	q1.print();

	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();
	

	cout << endl << endl;

	//q2 operations
	cout << "Queue 2 Operations: Type Double\n";
	q2.enqueue(1.0);
	q2.print();
	q2.enqueue(2.0);
	q2.print();
	q2.enqueue(3.0);
	q2.print();
	q2.enqueue(4.0);
	q2.print();
	q2.enqueue(5.0);
	q2.print();
	q2.enqueue(6.0);
	q2.print();

	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();

	q2.enqueue(7.0);
	q2.print();
	q2.enqueue(8.0);
	q2.print();
	q2.enqueue(9.0);
	q2.print();
	q2.enqueue(10.0);
	q2.print();

	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();

	cout << endl << endl;

	//q3 operations
	cout << "Queue 3 Operations: Type Int\n";
	q3.enqueue(1);
	q3.print();
	q3.enqueue(2);
	q3.print();
	q3.enqueue(3);
	q3.print();
	q3.enqueue(4);
	q3.print();
	q3.enqueue(5);
	q3.print();
	q3.enqueue(6);
	q3.print();

	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();

	q3.enqueue(7);
	q3.print();
	q3.enqueue(8);
	q3.print();
	q3.enqueue(9);
	q3.print();
	q3.enqueue(10);
	q3.print();

	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();




	return 0;
}