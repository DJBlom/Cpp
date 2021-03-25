// The purpose of this program is to create a dynamic array and fill it with data type doubles.

// All libraries used in this program.
#include <iostream>
#include <iomanip>
using namespace std;




// Main method/function used in this program.
void Get_Doubles();

// Main program.
int main(void)
{
	// Calling the main method/function used in this program.
	Get_Doubles();

	// Return 0 if all is good.
	return 0;
}







// Method/Function used to display the values of the list.
void display(double *result, int numDoubles)
{
	for (int i = 1; i <= numDoubles; i++)
	{
		cout << fixed << setprecision(4) << result[i] << endl;
	}
}





// Method/Function used to create the dynamic array and fill it with values.
double *getDoubles(int numDoubles)
{
	double *list = new double [numDoubles];

	for (int i = 1; i <= numDoubles; i++)
	{
		list[i] += (i / 3.0);
	}

	delete [] list;
	// Returning the list.
	return list;
}






// Implementation of main method/function used in this program.
void Get_Doubles()
{
	// Variable to hold the user input.
	int numDoubles;

	// Asking for user input.
	cout << "Please enter the size of the list: " << flush;
	// Taking user input.
	cin >> numDoubles;


	// Calling the --getDoubles-- method/function to be executed.
	double *result = getDoubles(numDoubles);

	// Calling the --display-- method/function to be executed.
	display(result, numDoubles);

}
