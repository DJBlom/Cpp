// This is a program to add up: Quarters, Dimes, Nickels, and Pennies to give you a total.

// All libraries used in this program.
#include <iostream>
#include <iomanip>
using namespace std;


// Main method/function used in this program.
void Counter_Program();

// Main program.
int main(void)
{
	// Calling main method/function to be used.
	Counter_Program();

	// Return 0 is all is good.
	return 0;
}




// Printing the result to stdout.
void Display(int dollars, float cents)
{
	cout << "The total is " << dollars << " and " << setprecision(2) << cents << " cents." << endl;
}



// Method/Function to do the calculations.
float Counter(int qua, int dim, int nick, int penn, int num)
{
	// Variables to use in this method/function.
	float quarter = qua * 0.25;
	float dimes = dim * 0.10;
	float nickel = nick * 0.05;
	float penny = penn * 0.01;

	float sum = (quarter + dimes + nickel + penny);

	// Logic to be returned with result.
	if (num == 1)
	{
		// Adding all together and returning without any remainders.
		float result = sum;
		return result;

	}
	else
	{
		// Adding all together and returning the remainder.
		float result = sum - (int)sum;
		cout << result << endl;
		return result;

	}
}




// Implementation of main method/function.
void Counter_Program()
{
	// Variables used to take user input.
	int qua, dim, nick, penn;
	
	// Checking that user does not input less than 0;
	do
	{
		// Print to stdout.
		cout << "Please enter number of coins:" << endl;

		// Print to stdout.
		cout << "Number of Quarters:\t" << flush;
		// Take user input.
		cin >> qua;

		// Print to stdout.
		cout << "Number of Dimes:\t" << flush;
		// Take user input.
		cin >> dim;

		// Print to stdout.
		cout << "Number of Nickels:\t" << flush;
		// Take user input.
		cin >> nick;

		// Print to stdout.
		cout << "Number of Pennies:\t" << flush;
		// Take user input.
		cin >> penn;
		
	}
	while (qua < 0 || dim < 0 || nick < 0 || penn < 0);


	// Variables to hold 1 and 0 for dicesion making.
	int num1 = 1, num2 = 0;

	// Calling the calculation method/function.
	int dollars = Counter(qua, dim, nick, penn, num1);
	float cents = Counter(qua, dim, nick, penn, num2);

	// Printing the result to stdout.
	Display(dollars, cents);
}
