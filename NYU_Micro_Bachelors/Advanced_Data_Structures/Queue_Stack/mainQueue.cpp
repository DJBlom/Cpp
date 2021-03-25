// The purpose of this program is to demonstrate a queue data structure with an array.

// All the libraries used in this program.
#include <iostream>
#include "Queue.h"
using namespace std;


// Main function of this program.
void queue();

int main()
{
	// Calling the main function of this program.
	queue();
	
	// Return 0 if all is good.
	return 0;
}





// Implementation of the queue() function.
void queue()
{
	// Declaring the Queue object to be used.
	Queue myQueue;

	// Declaring the vriable to hold the length of the list.
	int len;

	// Printing message to stdout and asking user input.
	cout << "Enter Number of Elements:\t" << flush;
	cin >> len;

	// Declaring variable to hold the elements to be entered into the queue.
	int element;
	for (int i = 0; i < len; i++)
	{
		cout << "Element " << + i << "):\t" << flush;
		cin >> element;

		myQueue.enqueue(element);
	}

	myQueue.dequeue();
	myQueue.front();
	myQueue.rear();
}
