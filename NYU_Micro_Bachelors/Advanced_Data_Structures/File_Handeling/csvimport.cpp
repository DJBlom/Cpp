/* The purpose of this program is to demonstrate how to import a file into the program. */

// All the libraries used in this program.
#include <iostream>
#include <fstream>
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
void openInputFile(ifstream &inFile)
{
	// Variable to store the filename in.
	string filename;

	cout << "Enter the name of file you want to open: " << flush;
	cin >> filename;

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
void csv_import(string data[][10], int columns, int *records, string filename)
{
	// Opening file and checking that it does open.
	ifstream inFile;
	openInputFile(inFile);

	// Declaring a temporary variable to hold the values.
	string temp;
	int i = 0, j = 0;

	// Itirating until the file end.
	while (inFile >> temp)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < i; j++)
			{
				data[i][j] = temp;
				inFile >> temp;
			}
		}
	}
}



void csvIm()
{
	string data[10][10];
	string filename;
	int records, columns = 3;


	// Calling main function to be executed.
	csv_import(data, columns, &records, filename);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << data[i][j] << flush;
			cout << endl;
		}
	}

}
