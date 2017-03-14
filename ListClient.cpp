#include <iostream>
#include "List.h"
#include <list>

using namespace std;

int main()
{
	List L1, L2;

 //Do some stuff with L1, L2, ...
	L1.insert(10, 1);
	L1.insert(20, 2);
	L1.insert(30, 3);
	L1.insert(40, 4);
	L1.insert(50, 5);
	L1.display();
	L1.remove(3);
	L1.display();
	
	L2.insert(60, 1);
	L2.insert(70, 2);
	L2.insert(80, 3);
	L2.insert(90, 4);
	L2.insert(100, 5);
	L2.size();
	L2.remove(2);
	L2.remove(4);
	L2.getAt(2);
	L2.size();
	L1.clear();
	
	//cout << L1 << endl << L2;
}
