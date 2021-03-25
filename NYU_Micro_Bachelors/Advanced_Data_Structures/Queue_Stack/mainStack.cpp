// The purpose of this program is to demonstrate Stacks and Queues with an array.

// All libraries used in this program.
#include <iostream>
#include "Stack.h"
using namespace std;



// Main function used in this program.
void Stack_Queue();

// Main program.
int main()
{
	// Calling the main function used in this program.
	Stack_Queue();

	// Return 0 if all is good.
	return 0;
}



// Implementation of Stack_Queue()
void Stack_Queue()
{
	// Creating list of class Stack.
	Stack list;

	// Declaring the variable to hold the amount of elements the user wants to store.
	int len;

	// Print message to stdout and asking for user input.
	cout << "Enter Number Of Elements To Be Added:\t" << flush;
	cin >> len;


	// Declaring the variable to hold the elements the user wishes to push unto the stack.
	int element;

	// Itirating up until the number of elements the user wished to add is finished
	// and adding all the elements to the list.
	for (int i = 0; i < len; i++)
	{
		cout << "Element " << + i << "):\t" << flush;
		cin >> element;

		list.push(element);
	}


	// Poping the head element form the list.
	list.pop();

	// Checking to see what the head element is.
	list.peek();
}
