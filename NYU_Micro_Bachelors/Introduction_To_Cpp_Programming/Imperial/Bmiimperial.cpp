// This programs purpose is to calculate a client's BMI in a country that uses imperial measurements.

// All the libraries used in this program.
#include <iostream>
#include <iomanip>
using namespace std;


// Main method/function used for this program.
void BMI_Program();

// Main program.
int main(void)
{
	// Calling main method/function to execute.
	BMI_Program();

	// Return 0 if all is good.
	return 0;
}






// Method/Function to print to stdout.
void Display(float result)
{
	cout << "Client's BMI is: " << setprecision(4) << result << endl;
}





// Method/Function to convert imperial values to metric.
float Convert(int weight, int height, int num)
{
	// If ladder to make sure the right conversion returns.
	if (num == 1)
	{
		// Converting imperial weight to metric weight.
		float weightM = weight * 0.453592;

		// Returning the new weight for calculation.
		return weightM;
	}
	else if (num == 2)
	{
		// Converting imperial height to metric height.
		float heightM = height * 0.0254;

		// Returning the new height for calculation.
		return heightM;
	}
	else
	{
		// Error message if something goes wrong.
		cout << "Something went wrong" << endl;
	}
}





// Method/function to calculate the BMI of client.
float BMI(float weightM, float heightM)
{
	// Calculating client's BMI.
	float bmi = weightM / (heightM * heightM);

	// Returning final result.
	return bmi;
}





// Main method/function used in program.
void BMI_Program()
{
	// Variables to hold user input.
	int weight, height;

	// Checking that the user inputs the right ints.
	do
	{
		// Print to stdout.
		cout << "Please enter client's weight:\t" << flush;
		// Taking user input.
		cin >> weight;

		// Print to stdout.
		cout << "Please enter client's height:\t" << flush;
		// Taking user input.
		cin >> height;
	}
	while (weight < 0 || height < 0);



	// Variables to help convert imperial to metric.
	int num1 = 1, num2 = 2;



	// Variables for metric weight and height.
	float weightM = Convert(weight, height, num1);
	float heightM = Convert(weight, height, num2);



	// Variable to hold the result.
	// Calling the BMI method/function to calculate the client's BMI.
	float result = BMI(weightM, heightM);

	// Calling the display method/function to print result to stdout.
	Display(result);
}
