/* This file contains all the implementation of the addNodet.h method declarations. */

// All libraries used in this file.
#include <iostream>
#include "addNodet.h"
using namespace std;


// Implementation of the insertAtTail method.
void LinkedList::insertAtTail(Node **data, string firstName, string lastName, string email)
{
	// Creating a new node to hold all the information.
	Node *newNode = new Node();

	// Assigning the informatin passed by the arguments to the new node.
	newNode -> firstName = firstName;
	newNode -> lastName = lastName;
	newNode -> email = email;
	newNode -> next = nullptr;

	// Checking if the list is empty.
	if (this -> isEmpty())
	{
		// If it is then assign both head and tail the new node.
		head = newNode;
		tail = newNode;
	}
	else
	{
		// Else assign the new node to the tail pointer tointing to next
		// and then assign the new node to the tail.
		tail -> next = newNode;
		tail = tail -> next;
	}
}




// Implementation of the insertAtHead method.
void LinkedList::insertAtHead(Node **data, string firstName, string lastName, string email)
{
	Node *newNode = new Node();

	newNode -> firstName = firstName;
	newNode -> lastName = lastName;
	newNode -> email = email;
	newNode -> next = head;
	
	head = newNode;
	head -> next = tail;
}




// Implementation of the display method.
void LinkedList::display()
{
	Node *temp;

	temp = head;

	while (temp != nullptr)
	{
		cout << temp -> firstName << temp -> lastName << temp -> email << endl;
		temp = temp -> next;
	}
}




// Implementation of the clear method.
void LinkedList::clear()
{
	Node *temp;

	temp = head;

	while (head != nullptr)
	{
		temp = head -> next;

		delete (head);

		head = temp;
	}
}
