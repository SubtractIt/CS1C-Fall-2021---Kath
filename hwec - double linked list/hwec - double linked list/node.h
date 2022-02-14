#pragma once

#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Node
{
private:
	T data;
	Node<T>* next;
	Node<T>* prev;

public:
	T getData() { return this->data; }
	void setData(T val) { this->data = val; }

	Node* getNext() { return this->next; }
	void setNext(Node* val) { this->next = val; }

	Node* getPrev() { return this->prev; }
	void* setPrev(Node* val) { return this->prev = val; }

	Node() { this->setNext(NULL); this->setPrev(NULL); }
	Node(T val) { this->setData(val); }

	~Node() = default;
};
