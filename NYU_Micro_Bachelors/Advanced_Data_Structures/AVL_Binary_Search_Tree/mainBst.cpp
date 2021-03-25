/* The purpose of this program is to demonstrate a binary search tree. 
 * */

// All libraries used in this program.
#include <iostream>
#include "bst.h"
using namespace std;



// Main function used in this program.
void bstTree();

// Main program.
int main()
{
	// Calling the main function used in this program.
	bstTree();

	// Return 0 if all is good.
	return 0;
}




void bstTree()
{
	BST node(30);

	node.insert(20);
	node.insert(10);
	node.rightRotate();

	node.inOrder();

	
	node.preOrder();
}
