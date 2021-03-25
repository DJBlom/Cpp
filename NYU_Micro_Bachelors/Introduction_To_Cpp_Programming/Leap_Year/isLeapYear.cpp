// The purpose of this program is to see if a year entered is a leap year.\

// All the libraries used in this program.
#include <iostream>
#include <cstdlib>
using namespace std;



// Main method/function used in this program.
void Leap_Year(int input);

// Main program.
int main(int argc, char **argv)
{
	// Checking that user inputs non negative ints.
	if (argc != 2)
	{
		cout << "How to do: (Is_Leap_year 1896)." << endl;
	}
	// If check is passed, then execute main method/function for this program.
	else
	{
		int year = atoi(argv[1]);
		Leap_Year(year);
	}

	// Return 0 if all is good.
	return 0;
}




// Implementation of main method/function used in this porgram.
void Leap_Year(int input)
{
	// Checking if the input given was a leap year and stdout it was..
	if ((input % 4) == 0 && (input % 100) != 0 || (input % 400) == 0)
	{
		cout << input << " was a leap year" << endl;
	}
	// If not then stdout not a leap year.
	else
	{
		cout << input << " was not a leap year" << endl;
	}
}
