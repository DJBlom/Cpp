// The purpose of this program is to find the absolute value in a given array.

// All the libraries used in this program.
#include <iostream>
using namespace std;




// Main method/function used in this program.
void absolute_max();

// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	absolute_max();

	// Return 0 if all is good.
	return 0;
}





// Method/Function used to display result to stdout.
void display(int result)
{
	cout << "The absolute max value in list is " << result << endl;
}





// Method/Function used to find the absolute value in array.
int max_in_lst(int list[], int len)
{
	// Itirating over the list to find the min value in list.
	for (int i = 0; i < len; i++)
	{
		// If first element in list is greater
		// than the current element in the list
		// assing it to first element of the list.
		if (list[0] > list[i])
		{
			list[0] = list[i];
		}
	}
	// Variable to hold min element in list.
	int min = list[0];



	// Itirating over the list to find the max value in the list.
	for (int i = 0; i < len; i++)
	{
		// If first element in the list is less 
		// than the current element in the list
		// assing it to first element of the list.
		if (list[0] < list[i])
		{
			list[0] = list[i];
		}
	}
	// Variable to hold the max value in the list.
	int max = list[0];




	// Variable to hold the converted integer.
	int new_min = min * (- 1);

	

	// If the new min is greater than the positive max
	// return it, else
	// return the max.
	if (new_min > max)
	{
		return new_min;
	}
	else
	{
		return max;
	}
}




// Implementation of main method/function used in the program.
void absolute_max()
{
	// Variable to hold user input.
	int len;

	// Checking that user does not input negatibe integers.
	do
	{
		// Printing to stdout.
		cout << "Please enter the size of list: " << flush;
		// Taking user input.
		cin >> len;
	}
	while (len < 0);


	// Creating list as big as the size given by user, to be filled with value by user.
	int list[len];

	// Printing message to stdout for user.
	cout << "Please fill the list with values" << endl;

	// Ititrating over list and filling in values.
	for (int i = 0; i < len; i++)
	{
		cout << "Value: " << i + 1 << ")" << flush;
		cin >> list[i];
	}



	// Variable to hold result to be printed to stdout.
	// Calling max_in_lst method/function to be executed.
	int result = max_in_lst(list, len);


	// Calling the display function to display the result to stdout.
	display(result);
}
