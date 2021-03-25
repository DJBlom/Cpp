// This is a header file containing all the classes for a linked list.

#ifndef _ADDNODET_H
#define _ADDNODET_H

// All the libraries used in this file.
#include <iostream>
using namespace std;



// Node class used to create more nodes.
class Node
{
	public:
		// Data members of the node class.
		string firstName, lastName, email;

		// Famous next pointer.
		Node *next;
};




// LinkedList class.
class LinkedList
{
	// All the methods used in the LinkedList.
	public:
		// Constructor that when a object is created will set the head and tail equal to nullptr
		LinkedList() :head(nullptr), tail(nullptr) {};

		// Destructor called when the program is closed to destroy all 
		// the objects created and freeing all the memory from the list.
		~LinkedList() { clear(); }

		// Copy constructor used to deep copy one object into another object.
		LinkedList(const LinkedList &rhs) :head(nullptr) { *this = rhs; }

		// Assignment constructor used to assign one object to another.
		LinkedList &operator = (const LinkedList &rhs);

		// A method to add a node to the end of the list.
		void insertAtTail(Node **data, string firstName, string lastName, string email);

		// A method used to add a node to the beginning of the list.
		void insertAtHead(Node **data, string firstName, string lastName, string email);

		// A method to check if the list if emtpy.
		bool isEmpty() { return this -> head == nullptr; }

		// A method to display the contents of the list.
		void display();

		// A method to clear and free all allocated memory from the heap.
		void clear();


		// All the data members used in this list
	private:
		Node *head;
		Node *tail;
};

#endif
