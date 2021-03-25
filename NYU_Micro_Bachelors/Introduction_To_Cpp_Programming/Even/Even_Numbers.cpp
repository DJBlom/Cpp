// The purpose of this program is to print to stdout the amount specified by user in even numbers.

// All the libraries used in this program.
#include <iostream>
using namespace std;




// Main method/function used in this program.
void Even_Numbers();

// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	Even_Numbers();

	// Return 0 if all is good.
	return 0;
}




// Method/Function for logic of getting even numbers and printing to stdout.
void Even(int input)
{
	// Variable to count the amount of even positive integers.
	int even = 0, counter = 2;

	// Itirating from 1 till n.
	while (even != input)
	{
		if ((counter % 2) == 0)
		{
			even++;
			cout << counter << endl;
		}

		counter++;
	}
}





// Implementation of main method/function used in program.
void Even_Numbers()
{
	// Variable used to hold user input.
	int input;

	// Checking that use inputs positive int.
	do
	{
		// Print to stdout.
		cout << "Please enter a positive integer: " << flush;
		// Taking user input.
		cin >> input;
	}
	while (input < 0);



	// Calling logic method/function to be executed.
	Even(input);
}
