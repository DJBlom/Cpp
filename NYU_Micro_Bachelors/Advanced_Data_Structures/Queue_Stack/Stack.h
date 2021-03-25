// This is the header file containing the Stack class for the mainStack.cpp file
// This file implements a array based stack.

#ifndef _STACK_H_
#define _STACK_H_

// All libraries used in this file.
#include <iostream>
using namespace std;


// Defining the max array size.
#define MAX 1000

// Declaring the class Stack.
class Stack
{
	// All data members used in this program.
	private:
		int top;
		int list[MAX];

	
	// All methods used in this class.
	public:
		// Constructor assigning the data member top to -1 to state the beginning of the list.
		Stack() { top = -1; }

		// A method to push data unto the stack.
		bool push(int data);

		// A method used to pop data from the stack.
		void pop();

		// A method used to retrieve the first element in the list/array.
		void peek();

		// A method to know the size of the list.
		int size() { return this -> top; }

		// A method used to check if the list/array is empty.
		bool isEmpty() { return this -> top == -1; }
};


// End of the header file.
#endif

