#include "StackL.h"
#include <iostream>

int Stack::size()
{
	return data.size();
}

void Stack::push(int x)
{
	data.insert(x, 1);
}

void Stack::pop()
{
	data.remove(1);
}

int Stack::top()
{
	auto x = data.getAt(1);
	return x;
}


void Stack::clear() //clears list and removes every element
{
	data.~List();
} //clear
