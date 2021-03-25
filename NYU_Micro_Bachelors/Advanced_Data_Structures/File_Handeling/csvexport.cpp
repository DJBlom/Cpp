/* The purpose of this program is to demonstrate writing to a file. */

// All libraries used in this program.
#include <iostream>
#include <fstream>
using namespace std;



// Main function used in this program.
void csvEx();

// Main program.
int main()
{
	// Calling the main function to be executed.
	csvEx
	
	// Return 0 if all is good.
	return 0;
}






// Implementation of the export function.
void csv_export(string data[][3], int records, int columns, string filename)
{
	// Open up the stream and creating the file.
	ofstream outFile(filename);


	// Itirating over and printing the contents to the file opened.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			outFile << data[i][j] << ",";
		}

		outFile << endl;
	}

	// Closing the file and finishing up.
	outFile.close();
}



void csvEx()
{
	// Declaring the two dimensional array with it's contents.
	string data[3][3] = {{"aspen", "olmsted", "apsen@pleasedonatemail.com"}, {"sally", "jones", "sally@gmail.com"},
		{"fred", "smith", "fsmith@aol.com"}};

	// Declaring the columns and records
	int columns = 3, records = 3;

	// Declaring the filename variable and it's contents.
	string filename = "customers.csv";


	// Calling of main function to be executed.
	csv_export(data, records, columns, filename);

}
