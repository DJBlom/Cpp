// The purpose of this program is to check if a student graduated with honors, graduated or failed.

// All the libraries used in this program.
#include <iostream>
using namespace std;



// Main method/function used in this program.
void Grade_Student();


// Main program.
int main(void)
{
	// Calling main method/function to be executed.
	Grade_Student();

	// Return 0 if all is good.
	return 0;
}






// Method/Function to calculate grades.
void Grade(int grade1, int grade2)
{
	// Logic check if student passed or not.
	if (grade1 < 60 && grade2 < 60)
	{
		// Print to stdout.
		cout << "Student Failed!" << endl;
	}
	else if (grade1 >= 95 && grade2 >= 95)
	{
		// Print to stdout.
		cout << "Student Graduated With Honors!" << endl;
	}	
	else
	{
		// Print to stdout.
		cout << "Student Graduate!" << endl;
	}
}






// Implementation of main method/function used in this program.
void Grade_Student()
{
	// Variables to hold user input.
	int grade1, grade2;

	// Checking that user does not input lower than 40.
	do
	{
		// Printing to stdout.
		cout << "Please enter student grades (Seperated by sapce: 56 57): " << flush;
		// Taking user input.
		cin >> grade1 >> grade2;
	}
	while (grade1 <= 40 || grade2 <= 40);


	// Calling the calculation method/function for result.
	Grade(grade1, grade2);
}
