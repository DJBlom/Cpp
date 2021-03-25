// This programs purpose is to calculate the BMI of a person.

// All the libraries used in this program.
#include <iostream>
#include <iomanip>
using namespace std;


// Main method/function used in this program.
void BMI_Program();

// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	BMI_Program();

	// Return 0 if all is good.
	return 0;
}




// Printing the result to stdout.
void Display(float result)
{
	// Print to stdout.
	cout << "Client's BMI is:\t" << setprecision(4) << result << endl;
}




// Method/Function used to calculate the BMI.
float BMI(int weight, float height)
{
	// Variable to hold the calculation.
	float bmi = weight / (height * height);

	// Returning the BMI of client.
	return bmi;
}




// Implementation of main method/function.
void BMI_Program()
{
	// Variables to hold user input.
	int weight; 
	float height;

	// Checking that use does not input negative ints.
	do
	{
		// Print to stdout.
		cout << "Please enter clients weight. (50):\t" << flush;
		// Taking user input.
		cin >> weight;

		// Print to stdout.
		cout << "Please enter clients height. (1.58):\t" << flush;
		// Taking user input.
		cin >> height;
	}
	while (weight < 0 || height < 0.00 || height > 3.00);


	// Variable to hold the result.
	// Calling the BMI method/function to calculate the persons BMI.
	float result = BMI(weight, height);

	// Print the result to stdout.
	Display(result);
}
