#include "StackLL.h"
#include <iostream>
using namespace std;

class Stack::Node
{
	public:
	int data;
	Node* link;
};


Stack::~Stack()
{
	clear();
}

int Stack::size()
{
	return num_elements;
}

void Stack::push(int k)
{
	Node* newPtr = new Node[k];
	if (frontPtr == nullptr)
	{
		frontPtr = newPtr;
	}
	else
	{
		newPtr->link = frontPtr;
		frontPtr = newPtr;
	}
	num_elements++;
}

void Stack::pop()
{
	Node* delPtr = new Node;
	if (frontPtr == nullptr) //stack is empty
	{
		return;
	}
	else
	{
		delPtr = frontPtr;
		frontPtr = frontPtr->link;
	}
	delete delPtr;
	num_elements--;
}

int Stack::top()
{
	Node* temp = new Node;
	temp = frontPtr;
	if (frontPtr == nullptr) //stack is empty
	{
		cout << "The stack is empty." << endl;
	}
	else
	{
		return temp->data;
	}
}

void Stack::clear() //clears list and removes every element
{
	while (num_elements != 0)
	{
		pop();
	}
} //clear
