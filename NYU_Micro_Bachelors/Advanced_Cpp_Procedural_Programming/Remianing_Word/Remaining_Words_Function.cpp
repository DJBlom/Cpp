// The purpose of this program is, given a string and removing the first word to return the rest of the string.

// All libraries used in this program.
#include <iostream>
#include <string>
using namespace std;





// Main method/function used in this program.
void remaining_words();

// Main program.
int main(void)
{
	// Calling the main method/function to be executed.
	remaining_words();

	// Return 0 if all is good.
	return 0;
}





// Method/Function used to display the result to stdout.
void display(string rem)
{
	// Printing to stdout.
	cout << "The remainder of the message is: " << rem << endl;
}





// Method/Function used to get the remaining string after first word is removed.
string remaining(string message)
{
	// Variable to hold the remaining string.
	string rem;
	int len, count = 0, first = 0;

	// Itirating over the string to find the remaining string after first word is cut off.
	for (int i = 0, len = message.length(); i < len; i++)
	{
		// If the loop is not past the first word yet do this.
		if (message[i] == ' ' && first != 1)
		{
			first++;
		}
		// Else if loop is past first word do this.
		else if (first == 1)
		{
			rem += message[i];
		}
	}

	
	// Returning the remainder of the message.
	return rem;
}





// Implementation of main method/function used in this program.
void remaining_words()
{
	// Variable to hold the user message.
	string message;

	// Printing to stdout.
	cout << "Please enter a message: " << flush;
	// Taking user input.
	getline(cin, message);


	// Calling the remianing method/function to be executed.
	string rem = remaining(message);

	// Calling the display method/function to be executed.
	display(rem);
}
