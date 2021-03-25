// This is the Stack.cpp file where all the methods in Stack.h are implemented.

// All libraries used in this file.
#include <iostream>
#include "Stack.h"
using namespace std;




// Implementation of the push method.
bool Stack::push(int data)
{
	// If top reaches 1000 elements then it will be full
	// and elements can no longer be pushed unto the list.
	// Else add a element to the list
	// and increment the list.
	if (this -> top == 1000)
	{
		return false;
	}
	else
	{
		this -> top++;
		this -> list[top] = data;
	}
}



// Implementation of the pop method.
void Stack::pop()
{
	// Itirating over the list and if the element to be deleted is the same as the top element
	// then move all elements one space up and dicrement the top of the list to the new size.
	for (int i = 0; i < size(); i++)
	{
		if (list[i] == list[top])
		{
			for (int j = i; j < size() - 1; j++)
			{
				list[j] = list[j + 1];
			}

			break;
		}
	}

	this -> top--;
}



// Implementation of the peek method.
void Stack::peek()
{
	// Check to see what the top element is.
	cout << this -> list[top] << endl;
}
