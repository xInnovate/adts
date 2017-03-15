#include "StackV.h"

int Stack::size()
{
	return data.size();
}

void Stack::push(int x)
{
	data.push_back(x);
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	auto x = data.size() - 1;
	return data[x];
}


void Stack::clear() //clears list and removes every element
{
	while (data.size() != 0)
	{
		data.pop_back();
	}
} //clear
