// This programs purpose, is to convert a lower-case letter to a upper-case letter.

// All libraries used in this program.
#include <iostream>
using namespace std;


// Main method/function used in this program.
void Convert_Program();

// Main program.
int main(void)
{
	// Calling the main method/function for use.
	Convert_Program();

	// Return 0 if all is good.
	return 0;
}



// Method/Function to print to stdout.
void Display(char result)
{
	//Print to stdout.
	cout << result << endl;
}



// Method/Function to convert the letter presented to upper case.
char Convert(char ch)
{
	// Variable to hold the result.
	char result;

	// Logic to Convert from lower to upper case.
	if (ch >= 97 || ch <= 122)
	{
		result = ch - 32;
		return result;
	}
	// If no letter was given but something else, return nothing.
	else
	{	
		cout << "There is no letter to convert." << endl;
	}
}




// Implementation of main method/function.
void Convert_Program()
{
	// Variable created to hold the character entered by user.
	char ch;


	// Printing instructions to stdout.
	cout << "Please enter a lower case character:\t" << flush;
	// Taking user input and storing it in the variable created.
	cin >> ch;

	// Variable to hold the result that the Convert method/function will return.
	char result = Convert(ch);
	
	// Calling the display method/function to print to stdout.
	Display(result);
}
