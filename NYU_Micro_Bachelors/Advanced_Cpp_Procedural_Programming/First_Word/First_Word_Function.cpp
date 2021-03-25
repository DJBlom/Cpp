// The purpose of this program is, given a string to return the first word in that string.

// All libraries used in this program.
#include <iostream>
#include <string>
using namespace std;




// Main method/function used in this program.
void first_word();

// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	first_word();

	// Return 0 if all is good.
	return 0;
}





// Method/Function used to print the result to stdout.
void display(string firstWord)
{	
	cout << "The first word in the message was: " << firstWord << endl;
}





// Method/Function used to find the first word in a string.
string first(string message)
{
	// Variable to hold the length of the message;
	int len;

	// Variable to hold the first word.
	string firstWord;

	// Itirating over the string and copying the first word to new variable firstWord.
	for (int i = 0, len = message.length(); i < len; i++)
	{
		// Copy everything up until a white_space.
		if (message[i] != ' ')
		{
			firstWord += message[i];
		}
		else
		{
			break;
		}
	}	

	// Return the first word of the string.
	return firstWord;
}





// Implementation of main method/function used in this program.
void first_word()
{
	// Variable to hold the users input.
	string message;

	// Printing message to stdout.
	cout << "Please enter a message: " << flush;
	// Taking user input.
	getline(cin, message);


	// Calling the first method/function to be executed.
	string firstWord = first(message);

	// Calling the display function to be executed.
	display(firstWord);
}
