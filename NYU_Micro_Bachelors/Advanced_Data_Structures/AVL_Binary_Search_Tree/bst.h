/* This file contains all the class declarations as-well as all the declarations of the methods 
 * and data mambers used in the bst.cpp file. 
 * */

#ifndef _BST_H_
#define _BST_H_

// All libraries used in this file.
#include <iostream>
using namespace std;





// Node class;
class Node
{
	public:
		// Default constructor.
		Node();

		// Parameterized constructor.
		Node(int);

		// Deconstructor.
		~Node() {};


		// Data Members.

		// Data that will be entered into the root, left, or right side of the tree.
		int data;

		// Keeping track of the left side of the tree.
		Node *left;

		// Keeping track of the right side of the tree.
		Node *right;

		// Keeping track of the height of the tree.
		int height;
};



// Binary Search Tree class.
class BST 
{
	public:
		// Parameterized constructor.
		BST(int);

		// Deconstructor.
		~BST() { clear(); }

		// Member methods.

		// A method to get the root from private.
		Node *getRoot() { return root; }



		// A method to insert a new node into the tree.
		Node *insert(Node *, int);
		
		// A method to call the insert method above.
		void insert(int);



		// A method to print the tree to stdout.
		int nthNode(Node *, int);
		
		// A method to call the nth_node method.
		int nthNode(int);



		// A method to display the whole list in order.
		void inOrder(Node *);

		// A method to call the inOrder method.
		void inOrder();



		// A method to print the height of each node and the preorder.
		void preOrder(Node *);
		
		// A method to call the preOrder method.
		void preOrder();



		// A method to leftRotate the tree.
		Node *leftRotate(Node *);

		// A method to call the leftRotate method.
		void leftRotate();



		// A method to rightRotate the tree.
		Node *rightRotate(Node *);

		// A method to call the rightRotate method
		void rightRotate();



		// A method to find the maximum integer between two integers.
		int max(int, int);



		// A method to calculate the height of the tree.
		int height(Node *);

		// A method to call the height method.
		int height();



		// A method to get the balance of a node.
		int getBalance(Node *);



		// A method to clear the tree and free it's memory.
		void clear(Node *);

		// A method to call the clear method.
		void clear();


	private:
		// Private and main node.
		Node *root;
};




/* End of the header file.
 * */
#endif
