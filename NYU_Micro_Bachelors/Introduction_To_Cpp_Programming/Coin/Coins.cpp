// This programs purpose is to be given a number of dollars and cents and giving output as quarters, dimes, nickels and pennies.

// All the libraries used in this program.
#include <iostream>
using namespace std;




// Main method/function used in this program.
void Coins_Program();

// Main program.
int main(void)
{
	// Calling main method/function.
	Coins_Program();

	// Returns 0 if all is good.
	return 0;
}




// Method/Function used to print result to stdout.
void Display(int qua, int dim, int nick, int penn)
{
	cout << "The coins are " << qua << " Quareters, " << dim << " Dimes, " << nick << " Nickels and " << penn << " Pennies." << endl;
}




// Method/Function used to calculate the result.
int Coins(int dollars, int cents, int num)
{
	// Variable to hold the remainder after each calculation.
	int rem;

	// Checking for which value to calculate for.
	if (num == 1)
	{
		// Algorithm to calculate the quarters and find the first remainder.
		int sum = (dollars * 100) + cents;
		int result = sum / 25;
		rem = sum % 25;
		cout << rem << endl;
		
		
		// Returning the result.
		return result;
	}
	else if ((num == 2) && (rem / 10) >= 0)
	{
		// Algorithm to find the dimes.
		int result = rem / 10;
		rem %= 10;


		// Returning the result.
		return result;
	}
	else if ((num == 3) && (rem / 5) >= 0)
	{
		// Algorithm to find the nickels
		int result = rem / 5;
		rem %= 5;

		
		// Returning the result.
		return result;
	}
	else if ((num == 4) && (rem / 1) >= 0)
	{
		// Algorithm to find the pennies.
		int result = rem / 1;
		rem %= 1;

		
		// Returning the result.
		return result;
	}
	else
	{
		// Error message if something went wrong.
		cout << "Something went wrong!" << endl;
	}
}	




// Implementation of main method/function used in this program.
void Coins_Program()
{
	// Variables to hold user input.
	int dollars;
	int cents;
	do
	{
		// Print to stdout.
		cout << "Please enter the amount of money to convert." << endl;

		// Print to stdout.
		cout << "Dollars to Convert:\t" << flush;
		// Take user input.
		cin >> dollars;

		cout << "Cents to Convert:\t" << flush;
		// Take user input.
		cin >> cents;
	}
	while (dollars < 0 || cents < 0);


	// Variables used for choice making in the Calculating method/function.
	int num1 = 1, num2 = 2, num3 = 3, num4 = 4;


	// Calling the Coins method/function to Calculate the result.
	int quarters = Coins(dollars, cents, num1);
	int dimes = Coins(dollars, cents, num2);
	int nickels = Coins(dollars, cents, num3);
	int pennies = Coins(dollars, cents, num4);


	// Printing the result to stdout.
	Display(quarters, dimes, nickels, pennies);
}
