// This file is used to hold all the classes and declaration of methods used in the queue.cpp file.

#ifndef _QUEUE_H
#define _QUEUE_H
//All libraries used in this progam.
#include <iostream>
using namespace std;

#define MAX 1000


// Declaration of class queue.
class Queue
{
	// Data members of this class.
	private:
		// To keep track of the back element.
		int rear_value;

		// List in which the elements will be stored.
		int list[MAX];

		int newFront;

	// All the methods used in this class.
	public:
		// Constructor assigning rear_value data member to -1
		// initiating that the first element added to the list will be the first element.
		Queue() { rear_value = -1; newFront = 0; }

		// A method to put the next element in a queue.
		bool enqueue(int data);

		// A method to remove a element from the queue.
		void dequeue();

		// A method used to get the front element in the list.
		void front();

		// A method used to get the rear element in the list.
		void rear();
};



// End of the header file.
#endif
