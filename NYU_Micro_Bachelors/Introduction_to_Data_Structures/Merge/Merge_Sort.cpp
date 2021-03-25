// The purpose of this program is to show how Merge Sort algorithm works.

// All libraries used in this program.
#include <iostream>
#include <vector>
using namespace std;




// Main method/function used in this program.
void merge_sort();

// Main program
int main(void)
{
	// Calling the merge_sort function to be executed.
	merge_sort();

	// Return 0 if all is good.
	return 0;
}







// Method/Function used to display the soted list.
void display(vector<int> &list, int len)
{

	cout << "List that was created." << endl;

	// Itirating over the list and printing the contents to stdout.
	for (int i = 0; i < len; i++)
	{
		cout << list[i] << " ";
	}

	cout << endl;
}






// Method/Function used to merge the sorted list.
void merge(vector<int> &list, int lowLeft, int highLeft, int highRight)
{
	// Variables used for this algorithm with values intialized.
	// Created a new vector to hold the sorted list that 
	// will be copied back to the original list at the end.
	int lowRight = highLeft + 1;
	int size = highRight - lowLeft + 1;
	int *mergeList = new int[size];
	int iLeft = lowLeft;
	int iRight = lowRight;
	int iResult = 0;

	// Itirating over the list.
	while (iLeft <= highLeft && iRight <= highRight)
	{
		// If the lower less than the upper then assign it to the new list created.
		// Increase the position of the lower hald of the list.
		// Increase the position of the result variable.
		if (list[iLeft] < list[iRight])
		{
			mergeList[iResult] = list[iLeft];
			iLeft++;
			iResult++;
		}
		// Else if the upper part is less than the lower part then assing the upper part to the new list created.
		// Increase the upper part to be checked again.
		// Increase the result variableto be able to hold a new element.
		else
		{
			mergeList[iResult] = list[iRight];
			iRight++;
			iResult++;
		}
	}


	// Itirating over the list.
	while (iLeft <= highLeft)
	{
		// Assinging the rest of the lower part of the tail to the new list created.
		// Increase the left position to assing new elements.
		// Increase the result position to hold more elements.
		mergeList[iResult] = list[iLeft];
		iLeft++;
		iResult++;
	}


	// Itirating over the list.
	while (iRight <= highRight)
	{
		// Assinging the rest of the upper part of the tail to new list created.
		// Increase the right position to assing new elements.
		// Increase the result position to hold more elements.
		mergeList[iResult] = list[iRight];
		iRight++;
		iResult++;
	}


	// Itirating over the list.
	for (int i = 0, iList = lowLeft; i < size; i++, iList++)
	{
		// Assinging the new list created to the old list, thus replacing the elements of the old list with the new sorted elements.
		list[iList] = mergeList[i];
	}

	// Free the memory allocated by new of the new list created.
	delete(mergeList);
}






// Method/Function used to sort the list.
void sort(vector<int> &list, int low, int high)
{
	// This is a recursive algorithm.
	// If low equals high return nothing because it's a void method/function.
	if (low == high)
	{
		return;
	}
	// Else create the mid variable to hold the mid point of list.
	// Sort the first half of the list up to the middle.
	// Sort the second half of the list up to the end.
	// Merge the first and the second half together.
	else
	{
		int mid = (low + high) / 2;

		sort(list, low, mid);
		sort(list, mid + 1, high);
		merge(list, low, mid, high);
	}
}






// Implementation of main method/function used in this program.
void merge_sort()
{
	// Variable used to hold the user input.
	int len;

	// Checking that the user does input a negative integer.
	do
	{
		cout << "Please enter the amount of item in list: " << flush;
		cin >> len;
	}
	while (len < 0);


	// Creating the list to hold the user's item.
	vector<int> list(len);

	// Filling the list with values.
	for (int i = 0; i < len; i++)
	{
		cout << "Element " << i + 1 << ") " << flush;
		cin >> list[i];
		list.push_back(list[i]);
	}


	// Calling the display method/function to unsorted list.
	display(list, len);

	// Creating the variables needed to hold all the parameters for the sort method/function.
	int low = 0, high = len;

	// Calling the sort method/function to sort the list.
	sort(list, low, high);

	// Calling the display method/function to show the sorted list.
	display(list, len);
}
