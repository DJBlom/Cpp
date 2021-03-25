// The purpose of this program is to add one to a integer via a pointer function.

// All the libraries used in this program.
#include <iostream>
using namespace std;




// Main method/function used in this program.
void Add_One();

// Main program.
int main(void)
{
	// Calling the main method/function to be executed.
	Add_One();

	// Return 0 if all is good.
	return 0;
}






// Method/Function used to add one to the given integer.
void addOne(int *ptr)
{
	// Adding one to the variable created.
	*ptr += 1;
}






// Implementation of main method/function used in this program.
void Add_One()
{
	// Variable to hold the user input and ptr created.
	int num;

	// Pointer variable that points to the address of variable num.
	int *ptr = &num;

	// Asking user to input a integer.
	cout << "Please enter a integer: " << flush;
	// Taking input.
	cin >> num;

	// Printing to stdout the integer the user inputed.
	cout << "Integer entered." << num << endl;

	// Calling the addone method/function to be executed.
	addOne(ptr);

	// Printing the integer after method/function has been called.
	cout << "Integer after incrimented." << num << endl;
}
