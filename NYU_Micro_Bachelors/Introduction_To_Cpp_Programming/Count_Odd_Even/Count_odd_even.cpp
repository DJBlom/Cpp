// The purpose of this program is to count the amount of even and off numbers a user inputs.

// All the libraries used in this program.
#include <iostream>
using namespace std;




// Main method/function used in this program.
void Odd_Even();

// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	Odd_Even();

	// Return 0 if all is good.
	return 0;
}





// Method/Function used to get the results.
void Count(int num1, int num2, int num3, int num4)
{
	// Variables to hold the count.
	int odd = 0, even = 0;

	// Checking if num1 is even or odd.
	if ((num1 % 2) == 0) 
	{
		even++;
	}
	else
	{
		odd++;
	}
	

	// Checking if num2 is even or odd.
       	if ((num2 % 2) == 0)
	{
		even++;
	}
	else
	{
		odd++;
	}


	// Checking if num3 is even or odd.
	if ((num3 % 2) == 0)
	{
		even++;
	}
	else
	{
		odd++;
	}


	// Checking if num4 is even or odd.
	if ((num4 % 2) == 0)
	{
		even++;
	}
	else
	{
		odd++;
	}


	// Checking which is more, even or odd.
	// Printing to stdout.
	if (even > odd)
	{
		cout << "More evens than odds." << endl;
	}
	else if (odd > even)
	{
		cout << "More odds than evens." << endl;
	}
	else
	{
		cout << "Same number of evns and odds" << endl;
	}
}





// Implementation of main method/function used in this program.
void Odd_Even()
{
	// Variables to hold user input.
	int num1, num2, num3, num4;

	// Checking that user does not input negative numbers.
	do
	{
		// Print to stdout.
		cout << "Please enter 4 numbers. (Seperated by a space: 2 3 5 7): " << flush;
		// Taking user input.
		cin >> num1 >> num2 >> num3 >> num4;
	}
	while (num1 < 0 || num2 < 0 || num3 < 0 || num4 < 0);



	// Caling the calculation method/function to execute.
	Count(num1, num2, num3, num4);
}
