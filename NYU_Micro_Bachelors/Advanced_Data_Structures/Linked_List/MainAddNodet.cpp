#include <iostream>
#include "addNodet.h"
using namespace std;




int main()
{
	Node *data = nullptr;
	LinkedList list;	


	list.insertAtTail(&data, "Charel", "Blom", "charel@gmail.com");
	list.insertAtHead(&data, "Beta", "Blom", "beta@gmail.com");

	list.display();


	return 0;
}










