// The purpose of this program is to demonstrate how to sort with selection sort.

// All libraries used in this program.
#include <iostream>
#include <vector>
using namespace std;



// Main method/function used in this program.
void selection_sort();

// Main program.
int main(void)
{
	// Calling the main method/function to be executed.
	selection_sort();

	// Return 0 if all is good.
	return 0;
}






// Method/Function used to display the sorted list to stdout.
void display(vector<int> &list, int len)
{
	cout << "The sorted list." << endl;

	for (int i = 0; i < len; i++)
	{
		cout << list[i] << " " << flush;
	}

	cout << endl;
}








// Method/Function used to swap two integers.
void swap(int *a, int *b)
{
	// Variable to temporaroly hold the integer being swaped.
	int temp = *a;
	*a = *b;
	*b = temp;
}






// Method/Function used to sort the list.
void sort(vector<int> &list, int len)
{
	// Variable to hold the min integer in list.
	int minIndex;

	// Itirating over the list and sorting.
	for (int i = 0; i < len; i++)
	{
		minIndex = i;

		for (int j = i; j < len; j++)
		{
			if (list[j] < list[minIndex])
			{
				minIndex = j;
			}
		}

		swap(list[minIndex], list[i]);
	}
}






// Implementation of main method/function used in this program.
void selection_sort()
{
	// Variable to hold the amount of element the user wants to put in the list.
	int len;

	// Checking that it's not a negative integer.
	do
	{
		cout << "Enter amount of items: " << flush;
		cin >> len;
	}
	while (len < 0);



	// Creating the list.
	vector<int> list(len);

	// Itirating over the list and filling it with values.
	for (int i = 0; i < len; i++)
	{
		cout << "Element " << i + 1 << "): " << flush;
		cin >> list[i];
		list.push_back(list[i]); 
	}


	// Variable to hold the sorted list.
	// & calling the --sort-- method/function to be executed.
	sort(list, len);

	// Calling the --display-- method/function to be executed.
	display(list, len);
}
