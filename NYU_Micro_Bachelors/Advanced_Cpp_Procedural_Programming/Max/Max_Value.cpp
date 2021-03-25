// The purpose of this program is to find the max value in a array.

// All libraries used in this program.
#include <iostream>
using namespace std;




// Main method/function used in this program.
void max_val();

// Main program.
int main(void)
{
	// Calling the main method/function to be executed.
	max_val();

	// Return 0 if all is good.
	return 0;
}






// Method/Function used to print the result to stdout.
void display(int result)
{
	cout << "Max val in list is " << result << endl;
}



// Method/Function used to check for max value in list.
int max_in_list(int list[], int len)
{
	// Itirating over the list and finding the max value in the list.
	for (int i = 0; i < len; i++)
	{
		if (list[0] < list[i])
		{
			list[0] = list[i];
		}
	}

	// Variable to hold the max value after it was found.
	int max_val = list[0];


	// Returning the result to main method/function to be displayed
	return max_val;
}





// Implementation of main method/function used in this program.
void max_val()
{
	// Variable used to hold user input.
	int len;

	// Checking that user input non negative integers.
	do 
	{
		// Printing this message to stdout.
		cout << "Please enter the size of the list: " << flush;
		// Taking user input.
		cin >> len;
	}
	while (len < 0);



	// Creating list to be filled with values.
	int list[len];



	// Printing message to stdout.
	cout << "Please enter list values." << endl;
	// Filling the list with values.
	for (int i = 0; i < len; i++)
	{
		cout << "Value: " << i + 1 << ")" << flush;
		cin >> list[i]; 
	}



	// Calling the max_in_list method/function to be executed.
	int result = max_in_list(list, len);


	// Calling display function to print result to stdout.
	display(result);
}
