// The purpose of this program is to print to stdout all the Fibonacci numbers up untill n.

// All the libraries used in this program.
#include <iostream>
using namespace std;



// Main method/function used in this program.
void Fibonacci_Numbers();

// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	Fibonacci_Numbers();

	// Return 0 if all is good.
	return 0;
}




// Method/Function used to calculate the fibonacci numbers and printing to stdout.
void Fibonacci(int input)
{
	// Variable to hold the sum of the preceding number.
	int temp1 = 0, temp2 = 1, sum = 0;

	// Itirating up until input and printing to stdout the sum of the preceding number.
	for (int i = 1; i <=input; i++)
	{
		temp1 = temp2;
		temp2 = sum;
		sum = temp1 + temp2;

		cout << sum << endl;
	}
}





// Implementation of main method/function used in this program.
void Fibonacci_Numbers()
{
	// Variables used to hold user input.
	int input;

	// checking that user does not input negative integers.
	do 
	{
		// Print to stdout.
		cout << "Please enter a positive integer greater than 1: " << flush;
		// Taking user input.
		cin >> input;
	}
	while (input < 1);



	// Calling the calculating method/function to execute.
	Fibonacci(input);
}
