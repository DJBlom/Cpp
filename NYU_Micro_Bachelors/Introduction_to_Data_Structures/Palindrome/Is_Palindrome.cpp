// The purpose of this program is to check if a integer given is a palindrome number or not.

// All libraries used in this program.
#include <iostream>
#include <math.h>
using namespace std;




// Main method/function used in this program.
void palindrome();

// Main progarm.
int main(void)
{
	// Calling the main method/function to be executed.
	palindrome();

	// Return 0 if all is good.
	return 0;
}






// Method/Function used to print the result to stdout.
void display(int result, int num)
{
	// if it is a palindrome number.
	if (result == num)
	{
		// Print to stdout.
		cout << num << " Is a palindrome number." << endl;
	}
	else
	{

		// if not, print to stdout.
		cout << num << " Is Not a palindrome number." << endl;
	}
}







// Method/Function used to find the reverse of a integer.
int is_palindrome(int num)
{
	// Variable to hold the number of digits in num.
	int len = log10(num);

	// Recusive call to find the reverse of the number.
	if (num == 0)
	{
		// If num is 0 then nothing to do but to return zero.
		return 0;
	}
	else
	{
		// If number is not zero then modulo by 10 the number to get the last digit in the number.
		// multiply it by the power 10 times the length of the number to make space
		// and finally deviding num with 10 to get the last digit and fill the blank space.
		return ((num % 10 * pow(10, len)) + is_palindrome(num / 10));
	}
}







// Implementation of main method/function used in this program.
void palindrome()
{
	// Variable to hold the user's input.
	int num;

	// Checking that the user inputs a positive integer.
	do
	{
		// Asking user for input.
		cout << "Please enter a positive integer: " << flush;
		// Taking user input.
		cin >> num;
	}
	while (num < 0);


	// Variable to hold the result of the method/function call --isPalindrome--.
	int result = is_palindrome(num);


	// Calling the --display-- method/function to be executed.
	display(result, num);
}
