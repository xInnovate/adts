#include "StackV.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions
#include <stack>
#include <list>

int Stack::size()
{
	return num_elements;
}



void Stack::clear() //clears list and removes every element
{
	while (num_elements != 0)
	{
		Stack::remove(1);
	}
} //clear
