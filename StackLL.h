//With a (raw) linked-list 

#ifndef STACKLL_H
#define STACKLL_H

class Stack
{
private:

   class Node;

   Node* frontPtr = nullptr;
   int num_elements = 0;

public:

    // No default c'tor needs to be declared 
    // We initialized the attributes above

   ~Stack(); //d'tor

   int size();

   void push(int);

   void pop();

   int top();

   void clear();

};

#endif
