// The purpose of this program is to find the middle letter of any given length of a string.

// All the libraries used in this program.
#include <iostream>
#include <string>
using namespace std;




// Main method/function used in this program.
void string_splinter();

// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	string_splinter();

	// Return 0 if all is good.
	return 0;
}






// Method/Function used to find the length of a string.
int len(string message)
{
	// Variable to count the amount of letters and white_spaces.
	int len = 0, w_p = 0;

	// Itirating over the string.
	while (message[len] != '\0')
	{
		len++;
	}

	// Return only the len.
	return len;
}






// Method/Function used to find the middle letter in any given length string.
char letter(string message)
{
	// Variables to hold the middle character and the length of the string.
	char middle;
	int length;

	// Itirating over the string to find the middle character.
	for (int i = 0, length = len(message); i < length / 2; i++)
	{
		middle = message[i - 1];
	}

	// Returning the middle character to be printed.
	return middle;
}






// Implementation of the main method used in this program.
void string_splinter()
{
	// Variable to hold string from user input.
	string message;

	// Printing message to stdout.
	cout << "Please enter a odd number of characters." << endl;
	// Taking user input.
	cin >> message;

	// Variable to hold the middle character.
	char middle = letter(message);

	// Printing the middle character to stdout.
	cout << middle  << " is in the middle of the number of characters entered." << endl;
}
