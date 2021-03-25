// The purpose of this program is to implement a linear search method/function.

// All libraries used in this program.
#include <iostream>
using namespace std;




// Main method/function used in this program.
void linear_search();

// Main program.
int main(void)
{
	// Calling main method/fuction to be executed.
	linear_search();

	// Return 0 if all is good.
	return 0;
}






// Method/Fucntion used to print to stdout.
void display(int result)
{
	cout << result << " is the index number where your values was found." << endl;
}






// Method/Function used to search.
int search(int *list, int len, int key)
{
	// Variable to keep track of the indexes.
	int i = 0, result;

	// Itirating over the list to find the key.
	while (i < len)
	{
		if (list[i] == key)
		{
			return i;
		}
		
		i++;
	}

	return - 1;
}






// Implementation of main method/function used in this program.
void linear_search()
{
	// Variables to hold the user input.
	int key;

	// Checking that user does not enter a negative integer.
	do
	{
		cout << "Please enter the item to be found: " << flush;
		cin >> key;
	}
	while (key < 0);



	// Creating the list used in this program.
	int list[] = {5, 1, 2, 6, 9, 10, 4, 20};

	// Finding the length of the list.
	int len = sizeof(list);

	// Variable to hold the result after calling the --search-- method/function.
	int result = search(list, len, key);

	// Calling the --display-- method/function to be executed.
	display(result);
}
