/* The purpose of this program is to demonstrate how to import a file into the program. */

// All the libraries used in this program.
#include <iostream>
#include "addNodet.h"
#include <fstream>
#include <sstream>
using namespace std;



// Main function used in this program.
void csvIm();

// Main program.
int main()
{
	// Calling the main function to be executed.
	csvIm();
	
	// Return 0 if all is good.
	return 0;
}




// Function used to make sure the file will open.
void openInputFile(ifstream &inFile, string filename)
{
	// Opening the file passed to the function parameters.
	inFile.open(filename);

	// This loop should run until the file is open.
	while (!inFile)
	{
		cout << "File Could Not Open" << endl;
		cout << "Enter the name of file you want to open: " << flush;
		cin >> filename;

		// If the file did not open then this will clear the attemp.
		inFile.clear();

		// Reopen the file.
		inFile.open(filename);
	}
}




// Implementation of the main function used in this program.
void csv_import(Node **data, string filename)
{
	// Creating the linked list to store the data from the file in.
	LinkedList list;

	// Opening file and checking that it does open.
	ifstream inFile;
	openInputFile(inFile, filename);

	// Declaring a temporary variable to hold the values.
	string line, row, firstName, lastName, email;

	// Itirating until the file end.
	while (inFile >> line)
	{
		// Using stringstream and getline to run through the line
		// to get the firstname, lastname and email.
		// String stream allows us to stream through a line through inFile.
		// The pointer of getline will stop the stream when it comes to a ',' and then
		// save everything up until that comma to a variable. The pointer will then continue
		// on form where it stops untill the next ',' and so on and so forth. 
		stringstream ss(line);
		getline(ss, firstName, ',');
		getline(ss, lastName, ',');
		getline(ss, email, ',');
		
		// Inserting it into the linked list
		list.insertAtTail(data, firstName, lastName, email);
	}

	// Closing the file to free any memory left over.
	inFile.close();

	// Displaying the list.
	list.display();
}



void csvIm()
{
	// Creating a Node called data assigned with the null ptr;
	Node *data = nullptr;

	// Creating the variable to hold the filename that is wished to be opened.
	string filename;

	// Printing message to stdout and taking user input.
	cout << "Enter Filename To Open:\t" << flush;
	cin >> filename;


	// Calling main function to be executed.
	csv_import(&data, filename);
}
