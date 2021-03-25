// This progams purpose, is to add two numbers together and print the sum out to stdout.

// All libraries used in this program.
#include <iostream>
using namespace std;


// Main method/function used in this program.
void Add();

// Main program.
int main(void)
{
	// Calling the main method/function.
	Add();

	// Return 0 if all is good.
	return 0;
}



// Implementation of the main method/function used in this program.
void Add()
{
	// Variables used to hold the numbers to be added together.
	int num1;
	int num2;

	// Printing to stdout.
	cout << "Please enter two numbers seperated by a space." << endl;
	// Taking the user input typed in, and storing it in the variables created.
	cin >> num1 >> num2;

	// Variable used to hold the sum of num1 and num2.
	int sum = num1 + num2;

	// Printing to stdout the result of the calculation.
	cout << num1 << " + " << num2 << " = " << sum << endl;
}
