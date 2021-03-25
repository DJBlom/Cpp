// The purpose of this program is to give the k_combinations given two integers.

// All the libraries used in this program.
#include <iostream>
using namespace std;


// Main method/function used in this program.
void k_combinations();

// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	k_combinations();

	// Return 0 if all is good.
	return 0;
}




// Method/Function used to print result to stdout.
void display(int k_comb, int n, int k)
{
	// Printing to stdout.
	cout << "You can get " << k_comb << " combinations out of " << n << " and " << k << endl;
}





// Method/Function to calculate the factorial of a number.
int factorial(int num)
{
	// Variable to hold the result.
	int sum = 1;

	// For loop to calculate the factorial of a number.
	for (int i = 1; i <= num; i++)
	{
		sum *= i;
	}


	// Returning the result.
	return sum;
}






// Implementation of main method/function used in program.
void k_combinations()
{
	// Variables used to hold user input.
	int n, k;

	// Checking that the user does not input a negative number.
	do
	{
		// Print to stdout.
		cout << "Please enter two integers seperated by a space. (5 3): " << flush;
		// Taking user input.
		cin >> n >> k;

		// If user does not follow rules then this message will be displayed.
		if (n < 0 || k < 0)
		{
			cout << "Correct ... (5 4): Incorrect ... (-1 4)" << endl;
		}
	}
	while (n < 0 || k < 0);



	// Calculating the factorial of user input.
	int nFact = factorial(n);
	int kFact = factorial(k);
	int n_kFact = factorial(n - k);


	// Final result.
	int k_comb = nFact / (kFact * n_kFact);


	// Printing result to stdout.
	display(k_comb, n, k);
}
