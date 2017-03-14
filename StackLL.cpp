#include "StackLL.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions
#include <list>


Stack::~Stack()
{
	while(num_elements > 0)
    {
		remove(1);
	}
}

int Stack::size()
{
	return num_elements
}

void Stack::remove(int k)
{
	if (k < 1 or k > num_elements)//if the location is invalid 
	{
		throw out_of_range("List::removeAt(...)");//throw an "out_of_range" exception
	}
	Node* delPtr;
	
	if(k == 1)
	{
		delPtr = frontPtr;
	    frontPtr = frontPtr->link;
	}
	else
	{
		Node* tmpPtr = frontPtr;
	    int loc = 1;    
        while(loc != k-1)//get pointer to (k-1)th node
	    {
			tmpPtr = tmpPtr->link;
	        loc++;
	    }
	    delPtr = tmpPtr->link;
	    tmpPtr->link = delPtr->link;
	 }
	
	 delete delPtr;
	 num_elements--;
}

void Stack::clear() //clears list and removes every element
{
	while (num_elements != 0)
	{
		List::remove(1);
	}
} //clear
