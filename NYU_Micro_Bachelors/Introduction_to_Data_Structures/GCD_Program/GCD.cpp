// The purpose of this program is to find the GCD of two integers.

// All libraries used in this program.
#include <iostream>
using namespace std;




// Main method/function used in this program.
void greatest_common_devisor();

// Main program.
int main(void)
{
	// Calling the main method/function to be executed.
	greatest_common_devisor();

	// Return 0 if all is good.
	return 0;
}






// Method/Function used to print the result to stdout.
void display(int result, int num1, int num2)
{
	cout << "The GCD of " << num1 << " and " << num2 << " is " << result << endl;
}






// Method/Function used to find the GCD of two integers.
int gcd(int num1, int num2)
{
	// Recursive call to find the GCD.
	if (num2 == 0)
	{
		return num1;
	}
	else
	{
		return gcd(num2, num1 % num2);
	}
}





// Implementation of the main method/function used in this program.
void greatest_common_devisor()
{
	// Variables to hold the users input.
	int num1, num2;

	// Asking user for their input.
	cout << "Enter two integers to find their GCD: Example (18 84): " << flush;
	// Taking user input.
	cin >> num1 >> num2;

	// Variable to hold the result of the method/function.
	// Calling the --gcd-- method/function to be executed.
	int result = gcd(num1, num2);

	// Calling the display method/function to be executed.
	display(result, num1, num2);
}
