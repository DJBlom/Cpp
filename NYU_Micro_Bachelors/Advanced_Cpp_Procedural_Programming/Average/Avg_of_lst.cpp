// The purpose of this program is to find the average of a list of grades.

// All the libraries used in this program.
#include <iostream>
using namespace std;





// Main method/function used in this program.
void average();

// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	average();

	// Return 0 if all is good.
	return 0;
}






// Method/Function to print to stdout.
void display(int result)
{
	cout << "The average score of students grades is " << result << endl;
}






// Method/Function to calculate the average.
float avg_of_lst(int list[], int len)
{
	// Variable to hold the sum of all the scores in list.
	float sum;

	// Itirating over list and adding each score to the variable sum.
	for (int i = 0; i < len; i++)
	{
		sum += list[i];
	}

	// Variable to hold the avg calculated.
	float avg = sum / len;

	return avg;
}






// Implementation of main method/function used in this program.
void average()
{
	// Variable to hold the user's input.
	int len;

	// Checking that user does not input negative integers.
	do
	{
		// Ask user to input the size of the list.
		cout << "Please Enter The Size of The List: " << flush;
		// Taking the user's input and storing it in the variable created.
		cin >> len;
	}
	while (len < 1);




	// Creating the list to hold all the scores.
	int list[len];

	// Itirating over the list and assigning values to it.
	for (int i = 0; i < len; i++)
	{
		// Counting the amount of values entered.
		cout << "Value: " << i + 1 << ")" << flush;
		// Taking user input.
		cin >> list[i];
	}


	// Calling the average calculating method/function.
	float result = avg_of_lst(list, len);



	// Printing the answer to stdout.
	display(result);
}
