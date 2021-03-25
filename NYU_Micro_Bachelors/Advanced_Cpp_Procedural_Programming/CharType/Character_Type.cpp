// The purpose of this program is to see what type of character is entered.

// All libraries used in this program.
#include <iostream>
#include <string>
using namespace std;




// Main method/function used in this program.
void type();

// Main program.
int main(void)
{
	// Calling main method/function.
	type();

	// Return 0 if all is good.
	return 0;
}





// Method/Function used to find the character type.
void ch_type(string ch)
{
	int len;
	for (int i = 0, len = ch.length(); i < len; i++)
	{
		if (ch[i] >= 97 && ch[i] <= 122)
		{
			cout << ch << " is a lower case letter." << endl;
		}
		else if (ch[i] >= 65 && ch[i] <= 90)
		{
			cout << ch << " is a upper case letter." << endl;
		}
		else if (ch[i] >= 48 && ch[i] <= 57)
		{
			cout << ch << " is a digit." << endl;
		}
		else
		{
			cout << ch << " is a non-alphanumeric character." << endl;
		}
	}
}





// Implementation of main method/function used in this program.
void type()
{
	// Variable to hold the user input.
	string ch;

	// Print message to stdout for user.
	cout << "Please enter a character: " << flush;
	// Taking user input.
	cin >> ch;


	// Calling ch_type method/function to see what character was entered.
	ch_type(ch);
}
