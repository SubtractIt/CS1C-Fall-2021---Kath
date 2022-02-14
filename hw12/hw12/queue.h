// hw12.cpp
// Circular and Templated Queue Implementation

/*************************************************************************
 * AUTHOR     : Adit Mohindra
 * HW11       : Circular and Templated Queue Implementation
 * CLASS      : CS 1C
 * SECTION    : Tuesday Thursday & 12:30 PM
*************************************************************************/

#pragma once
#include "memory"
#include "iostream"

//element must always be added from rear, removed from front
//queue is FIFO

using namespace std;
using std::move;

// -------------------------------------------------------------------------
// Precondition: 
	//int count
	//int front_queue
	//int rear_queue
	//int maxSize
	//unique_ptr of Type list
// Postcondition:
//      queueType - templated class of Type Type
//		includes enqueue(), dequeue(), initializeEmpty(), size(), front() const, rear() const, isEmplty(), isFull(), print()
// -------------------------------------------------------------------------
template <class Type>
class queueType
{
private:

	int count, front_queue, rear_queue, maxSize;

	unique_ptr <Type[]> list;	//ptr to array that holds queue elements
public:

	void enqueue(const Type& newElem);
	void dequeue();
	void initializeEmpty();
	int size() { return count; }
	Type front() const;
	Type rear() const;
	bool isEmpty();
	bool isFull();
	void print();

	//constructor
	queueType(int queueSize = 100) { count = 0; front_queue = 0; rear_queue = queueSize - 1; maxSize = queueSize; list = make_unique<Type[]>(queueSize);; }

	//copy constructor
	queueType(const queueType<Type>& otherQueue) 
	{
		cout << "\n\n*****COPY CONSTRUCTOR CALLED*****\n\n";

		count = otherQueue.count;
		front_queue = otherQueue.front_queue;
		rear_queue = otherQueue.rear_queue;

		//take ownership of new stored pointer / make unique allocates new array (on heap) and returns ptr
		list = make_unique<Type[]>(maxSize);

		//init array
		for (int i = 0; i < otherQueue.count; i++) { list[i] = otherQueue.list[i]; }
	}

	//assignment operator
	queueType<Type>& operator=(const queueType<Type>& otherQueue)
	{
		// cout << "Write the definition of the function " << "to overload the assignment operator." << endl;

		maxSize = otherQueue.maxSize;
		count = otherQueue.count;
		front_queue = otherQueue.front_queue;
		rear_queue = otherQueue.rear_queue;

		// release existing array and replace with new array of size maxQueueSize
		list.release();
		list = make_unique<Type[]>(maxSize);


		// release ownership of any stored pointer / delete existing array (on heap) owened by unique ptr obj
		// take ownership of new stored pointer / make unique allocates new array (on heap) and returns ptr
		// replaces the stored pointer
		list.reset(make_unique<Type[]>(otherQueue.maxSize));


		// init array
		for (int i = 0; i < otherQueue.count; i++) { list[i] = otherQueue.list[i]; }
	}

	//move constructor
	queueType(queueType<Type>&& otherQueue) noexcept
		: front(move(otherQueue.front_queue))
		, rear(move(otherQueue.rear_queue))
		, count(move(otherQueue.count))
		, maxSize(move(otherQueue.count))
		, list(move(otherQueue.list))
		{}
	
	queueType<Type>& operator=(const queueType<Type>&& otherQueue)
	{

	}


	~queueType() { };
	


};

//enqueue - adds an element to the rear of the queue
template <class Type>
void queueType<Type>::enqueue(const Type& newElement)
{
	if (!isFull())
	{
		rear_queue = (rear_queue + 1) % maxSize;
							
		count++;
		list[rear_queue] = newElement; 
	}
	else
	{
		cout << "Cannot add to a full queue." << endl;
	}	
} 

//dequeue - removes element from the front
template <class Type>
void queueType<Type>::dequeue()
{
	if (!isEmpty())
	{
		count--;
		front_queue = (front_queue + 1) % maxSize;

	}
	else
	{
		cout << "Cannot remove from an empty queue." << endl;
	}
		
} 

//init empty queue
template <class Type>
void queueType<Type>::initializeEmpty()
{
	front_queue = 0;
	rear_queue = maxSize - 1;
	count = 0;
}

//returns front
template <class Type>
Type queueType<Type>::front() const
{
	//assert(!isEmpty());
	return list[front_queue];
}

//returns rear
template <class Type>
Type queueType<Type>::rear() const
{
	//assert(!isEmpty());
	return list[rear_queue];
}

//boolean isEmpty
template <class Type>
bool queueType<Type>::isEmpty()
{
	if (front_queue == 0 && rear_queue == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//boolean isFull
template <class Type>
bool queueType<Type>::isFull()
{
	return (size() == maxSize);
}

//print queue
template <class Type>
void queueType<Type>::print()
{
	for (int i = front_queue; i <= rear_queue; i++) 
	{ 
		cout << list[i] << " ";
	}
	cout << endl;
}

