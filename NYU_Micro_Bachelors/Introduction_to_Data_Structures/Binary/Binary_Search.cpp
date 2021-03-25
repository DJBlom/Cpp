// The purpose of this program is to show how binary search works on a sorted list.

// All libraries used in this program.
#include <iostream>
using namespace std;



// Main method/function used in this program.
void binary_search();

// Main program.
int main(void)
{
	// Calling the main method/function to be executed.
	binary_search();

	// Return 0 if all is good.
	return 0;
}





// Method/Function used to display the index of the key searched.
void display(int result)
{
	cout << "It took " << result << " steps to search for the given value" << endl;
}






// Method/Function used to search for the key.
int search(int *list, int len, int key)
{
	// Variables to hold the start, end and mid points.
	int index, low, high, count;


	// Initializing the variables.
	count = 0;
	low = 0;
	high = len - 1;

	// Itirating over the list to search for the item entered.
	while (low <= high)
	{
		// Finding mid point of the list to searh it.
		int mid = (low + high) / 2;

		// If key is at the mid point set found to true and return index.
		if (list[mid] == key)
		{
			return count;
		}
		// else search upper part of the list.
		else if (key < list[mid])
		{
			high = mid - 1;
		}
		// Else search the lower part of the list.
		else
		{
			low = mid + 1;
		}

		count++;
	}
}






// Implementatin of main method/function used in this program.
void binary_search()
{
	// Variables to hold the user input.
	int key;

	// Checking that user does not input negative integer.
	do
	{
		// Printing message to stdout.
		cout << "Please enter a item to search for: " << flush;
		// Taking user input.
		cin >> key;
	}
	while (key < 0);


	// Creating the list with all it's values.
	int list[] = {1, 4, 6, 7, 8, 10, 20, 30, 40, 45};

	// Getting the size of the list.
	int len = sizeof(list);

	// Creating a variable to hold the result.
	// Calling the search method/function to be executed.
	int result = search(list, len, key);

	// Calling the display method/function to be executed.
	display(result);
}
