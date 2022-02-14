#pragma once

#include <iostream>
#include "node.h"

using namespace std;

template <typename T>
class LinkedList
{
private:
	Node<T>* head;
	Node<T>* current;

public:
	LinkedList(){ head = NULL; current = NULL; }
	LinkedList(const LinkedList& list) { std::copy(list); }


	Node<T>* getHead() { return this->head; }
	void setHead(Node<T>* val) { this->head = val; }

	void setCurrent(Node<T>* val) { this->current = val; }
	Node<T>* getCurrent() { return this->current; }

	bool isEmpty() { return !getHead(); }		//may need to manually check

	void insertTail(T val);
	void deleteTail();

	void insertHead(T val);
	void deleteHead();

	void printFromHead();
	void printFromTail();

	~LinkedList() = default;
};

//insert at tail function
template <typename T>
void LinkedList<T>::insertTail(T val)
{
	Node<T>* temp = new Node<T>;
	temp->setData(val);

	if (isEmpty())	//if empty, sets head to new node and current node to head (just set)
	{
		setHead(temp);
		setCurrent(getHead());
	}
	else           //if list has content
	{
		getCurrent()->setNext(temp);
		temp->setPrev(getCurrent());
		setCurrent(temp);
	}
}

//delete at tail function
template <typename T>
void LinkedList<T>::deleteTail()
{
	if (!isEmpty())	//if list has members
	{
		if (getHead->getNext()) //check if head is pointing to next
		{
			Node<T>* temp = getCurrent();			//set temp to current
			setCurrent(getCurrent()->getPrev());	//set current to the previous
			getCurrent()->setNext(NULL);			//set next of current to null
			delete temp;							//clear memory
		}
		else
		{
			delete getHead();						//delete head and set current and head to null (data "deleted")
			setHead(NULL);
			setCurrent(NULL);
		}
	}
}

template <typename T>
void LinkedList<T>::insertHead(T val)
{
	Node<T>* temp = new Node<T>;
	temp->setData(val);
	
	if (isEmpty())
	{
		setHead(temp);
		setCurrent(getHead());
	}
	else 
	{
		getHead()->setPrevious(temp);
		temp->setNext(getHead());
		setHead(temp);
	}
}

template <typename T>
void LinkedList<T>::deleteHead()
{
	if (!isEmpty())
	{
		if (getHead->getNext())
		{
			Node<T>* temp = getHead();
			setHead(getHead()->getNext());
			getHead()->setPrev(NULL);
			delete temp;

		}
		else
		{
			setHead(NULL);
			setCurrent(NULL);
		}
	}
}

template <typename T>
void LinkedList<T>::printFromHead()
{
	Node<T>* temp = getHead();

	cout << "Linked List:\n";
	
	while (temp != nullptr)
	{
		cout << temp->getData() << " ";

		temp = temp->getNext();
	}


	cout << endl;
}

template <typename T>
void LinkedList<T>::printFromTail()
{
	Node<T>* temp = getCurrent();
	
	cout << "Linked List:\n";

	while (temp != nullptr)
	{
		cout << temp->getData() << " ";
		temp = temp->getPrev();
	}

	cout << endl;
}