// The purpose of this program is to find out if a year was or is a leap year.

// All the libraries used in this program.
#include <iostream>
using namespace std;





// Main method/function used in this program.
void leap_year();

// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	leap_year();

	// Return 0 if all is good.
	return 0;
}





// Method/Function used to check if it's a leap year or not.
void check_leap(int year)
{
	if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0)
	{
		cout << year << " was a leap year." << endl;
	}
	else
	{
		cout << year << " was not a leap year." << endl;
	}
}





// Implementation of main method/function used in this porgram.
void leap_year()
{
	// Variable to hold the user input.
	int year;

	// Checking that user does not input negative integers.
	do
	{
		// Printing message to stdout.
		cout << "Enter the year to be checked: " << flush;
		// Taking user input.
		cin >> year;
	}
	while (year < 0);



	// Calling method/function to check if it's a leap year or not to execute.
	// Method/Function will also print the answer to stdout.
	check_leap(year);
}
