// The purpose of this program is to check whether a number is prime or not.

// All libraries used in this program.
#include <iostream>
using namespace std;




// Main method/function used in this program.
void prime_number();

// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	prime_number();

	// Return 0 if all is good.
	return 0;
}





// Method/Function used to get the square root of some number.
int sqrt(int num)
{
	// Variable to hold the result.
	int sum = num * num;

	if ((sum % num) == 0)
	{
		sum /= num;

		return sum;
	}
	else
	{
		return num;
	}
}



// Method/Function used to check if input is a prime number or not.
void check(int prime)
{
	// Variable to keep count of prime numbers.
	int countDivs = 0;



	// Itirating up until the number the user inputed devided by 2.
	// Then checking it the number devides equally into the itirator count.
	// If it does then the counter goes up one.
	for (int i = 1; i <= sqrt(prime); i++)
	{
		if ((prime % i) == 0)
		{
			countDivs++;
		}
	}



	// If counter equals 2 then it is a prime number.
	// Else it's not. 
	if (countDivs == 2)
	{
		cout << prime << " is a prime number." << endl;
	}
	else
	{
		cout << prime << " is not a prime number." << endl;
	}
}





// Implementation of main method/function used in this program.
void prime_number()
{
	// Variable to hold user input.
	int prime;

	// Checking that user input is not negative.
	do
	{
		// Print this message to stdout.
		cout << "Please input a number to be checked: " << flush;
		// Taking user input.
		cin >> prime;
	}
	while (prime < 0);



	// Calling the check method to calculate input and check if it's a prime number or not.
	check(prime);
}
