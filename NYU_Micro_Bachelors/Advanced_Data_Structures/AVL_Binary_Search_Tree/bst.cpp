/* This file contains all the implementation of the bst.h file.
 * */

// All libraries used in this file.
#include <iostream>
#include "bst.h"
using namespace std;



/* All methods below this point belongs to the Node class. */






// Implementation of the default constructor.
Node::Node()
{
	this -> data = 0;
	this -> left = nullptr;
	this -> right = nullptr;
}



// Implementation of the parameter constructor.
Node::Node(int n)
{
	this -> data = n;
	this -> left = nullptr;
	this -> right = nullptr;
}

















/* All methods below this point belongs to the BST class. */






// Implementation of the BST constructor.
BST::BST(int n)
{
	root = new Node(n);
}



// Implementation of the insert() method.
Node *BST::insert(Node *newNode, int n)
{
	// If the root node is equal to nullptr the create a new root node with the n value.
	if (newNode == nullptr)
	{
		return new Node(n);
	}


	// If the value of n is greater than the root node then
	// place the newNode on the right side of the tree.
	if (n > newNode -> data)
	{
		newNode -> right = insert(newNode -> right, n);
	}
	// Else if the value of n is less than the root node then 
	// place the newNode on the left side of the tree.
	else if (n < newNode -> data)
	{
		newNode -> left = insert(newNode -> left, n);
	}

	// Return the newNode.
	return newNode;


	// Finding the maximum between left side of the tree and the right side of the tree.
	newNode -> height = 1 + max(height(newNode -> left), height(newNode -> right));

	// Finding the balance of newNode.
	int balance = getBalance(newNode);

	// Checking where the value of newNode best fits into the tree
	// and rotating the tree untill it all fits in.
	if (balance > 1 && n < newNode -> left -> data)
	{
		return rightRotate(newNode);
	}
	else if (balance < -1 && n > newNode -> right -> data)
	{
		return leftRotate(newNode);
	}
	else if (balance > 1 && n > newNode -> left -> data)
	{
		newNode -> left = leftRotate(newNode -> left);
		return rightRotate(newNode);
	}
	else if (balance < -1 && n < newNode -> right -> data)
	{
		newNode -> right = rightRotate(newNode -> right);
		return leftRotate(newNode);
	}

	// Returning the newNode.
	return newNode;
}



// Implementation of the insert() method.
void BST::insert(int n)
{
	root = insert(root, n);
}



// Implementation of the inorder() method.
int BST::nthNode(Node *root, int n)
{
	// Finding the nth_node in the tree.
	int count = 0;


	// Checking if there is data in the tree.
	if (root != nullptr)
	{
		count++;

		// Checking if the count equals root and if so return the data in that root.
		if (count == n);
		{
			return root -> data;
		}

		// Recursivley running through the tree and checking the left and right sides.
		nthNode(root -> left, n);
		cout << root -> data << endl;
		nthNode(root -> right, n);
	}
}



// Execution of the nth_node method.
int BST::nthNode(int n)
{
	int value = nthNode(root, n);
}



// Implementation of the inOrder method.
void BST::inOrder(Node *root)
{
	if (root != nullptr)
	{
		inOrder(root -> left);
		cout << root -> data << endl;
		inOrder(root -> right);
	}
}	



// Execution of the inOrder method.
void BST::inOrder()
{
	inOrder(root);
}



// Implementation of the preOrder method.
void BST::preOrder(Node *root)
{
	// Recursively printing out the pre-order of the tree.
	if (root != nullptr)
	{
		cout << root -> data << " " << endl;
		preOrder(root -> left);
		preOrder(root -> right);
	}
}


// Execution of the preOrder method.
void BST::preOrder()
{
	preOrder(root);
}



// Implementation of the leftRotate method.
Node *BST::leftRotate(Node *x)
{
	// Assign the node y right side of the tree.
	Node *y = x -> right;

	// Assign the node T2 the left side of the tree.
	Node *T2 = y -> left;

	// Assign the right side of the tree the node y.
	x -> right = y;

	// Assign the left side of the tree the node T2.
	y -> left = T2;

	// Update the height.
	x -> height = max(height(x -> left), height(x -> right)) + 1;
	y -> height = max(height(y -> left), height(y -> right)) + 1;


	// Return the new root.
	return y;
}



// Execution of leftRotate method.
void BST::leftRotate()
{
	root = leftRotate(root);
}


// Implementation of the rightRotate method
Node *BST::rightRotate(Node *y)
{
	// Assign the node x the value of the left side of the tree.
	Node *x = y -> left;

	// Assign the node T2 the right side of the tree.
	Node *T2 = x -> right;

	// Assign the right side of the tree the node y.
	x -> right = y;

	// Assign the left side of the tree the node T2.
	y -> left = T2;

	// Update the height.
	y -> height = max(height(y -> left), height(y -> right)) + 1;
	x -> height = max(height(x -> left), height(x -> right)) + 1;

	// Return the new root.
	return x;
}



// Execution of the rightRotate method.
void BST::rightRotate()
{
	root = rightRotate(root);
}



// Implementation of max
int BST::max(int a, int b)
{
	return (a > b) ? a : b;
}



// Implementation of the height method.
int BST::height(Node *root)
{
	// Recursively calculating the height from the root node.
	if (root == nullptr)
	{
		return 0;
	}
	else
	{
		return root -> height;
	}
}


// Executino of the height method.
int BST::height()
{
	int value = height(root);
}




// Implementation of the getBalance method.
int BST::getBalance(Node *node)
{
	// Checking that each node is balanced out.
	if (node == nullptr)
	{
		return 0;
	}
	else
	{
		return height(node -> left) - height(node -> right);
	}
}



// Implementation of the clear method.
void BST::clear(Node *root)
{
	// Recursively clearing all heap nodes allocated and freeing the memory.
	if (root != nullptr)
	{
		clear(root -> left);
		clear(root -> right);
	}

	delete root;
}



// Execution of the above method.
void BST::clear()
{
	clear(root);
}
