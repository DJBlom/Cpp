// This file is used to implement all the methods declared in Queue.h.

// All libraries used in this program.
#include <iostream>
#include "Queue.h"
using namespace std;



// Implementation of the enqueue(int data) method.
bool Queue::enqueue(int data)
{
	// Checking if the list is full or not.
	// Else if list is not full then push the element to the list
	// and increment the rear_value data member.
	if (this -> rear_value == 1000)
	{
		cout << "List is full" << endl;
		return false;
	}
	else
	{
		this -> rear_value++;
		this -> list[rear_value] = data;
	}
}





// Implementation of the dequeue() method.
void Queue::dequeue()
{
	// Checking to see if the list is not empty.
	// If list is empty then print 0.
	if (this -> rear_value == -1)
	{
		cout << 0 << endl;
	}
	// Else if list is not empty.
	// Then itirate over the list from front to back and dequeue the first element in the list.
	// By doing that the whole list will move up one space.
	else
	{
		for (int i = this -> newFront; i < this -> rear_value; i++)
		{
			if (list[i] == list[0])
			{
				this -> list[i] = this -> list[i + 1];
				break;
			}

			this -> rear_value++;
		}

		this -> newFront++;
	}
	
}





// Implementation of the front() method.
void Queue::front()
{
	// Checking to see if the list is empty.
	if (this -> rear_value == -1)
	{
		cout << 0 << endl;;
	}
	// If list is not empty then print the first element in the list ot stdout.
	else
	{
		cout << this -> list[this ->newFront] << endl;;
	}
}




// Implementation of the rear() method.
void Queue::rear()
{
	// Checking if the list is empty.
	if (this -> rear_value == -1)
	{
		cout << 0 << endl;
	}
	// If list is not empty then print out last element of the list.
	else
	{
		cout << this -> list[rear_value] << endl;
	}
}
