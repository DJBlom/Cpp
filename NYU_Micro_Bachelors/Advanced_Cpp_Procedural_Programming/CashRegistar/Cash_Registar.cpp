// The purpose of this program is to give the client the right price of item after tax and discount.

// All libraries used in this program.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;




// Main method/function used in this program.
void cash_registar();

// Main program.
int main(void)
{
	// Calling the main method/function to be executed.
	cash_registar();

	// Return 0 if all is good.
	return 0;
}






// Method/Function used to print to stdout.
void display(int base, float afterD, float total)
{
	cout << "Base price = " << base << endl;
	cout << "Price after discounts = " << setprecision(4) << afterD << endl;
	cout << "Total price = " << setprecision(4) << total << endl;
}





// Method/Function used to get the final result for members.
void member(float tax, int base, int item)
{
	// Algorithm used to get all the discounts and subtract it.
	float discount1 = item * 0.50;
	float newBase = base - discount1;
	float discount2 = newBase * 0.10;
	float afterD = newBase - discount2;

	// Algorithm used to get the tax and add it.
	float newTax1 = tax / 100;
	float newTax2 = afterD * newTax1;
	float total = afterD + newTax2;


	display(base, afterD, total);

}





// Method/Function used to get the final result for non members.
void none_member(float tax, int base, int item)
{
	// Algorithm used to get all the discounts and subtract it.
	float discount = item * 0.50;
	float afterD = base - discount;

	// Algorithm used to get the tax and add it.
	float newTax1 = tax / 100;
	float newTax2 = afterD * newTax1;
	float total = afterD + newTax2;

	display(base, afterD, total);

}







// Implementation of main method/function used in this program.
void cash_registar()
{
	// Variables to hold item prices and tax.
	float tax;
	int item1, item2;

	// Checking that user does not input negative integers.
	do
	{
		// Printing to stdout 
		// Taking user input.
		cout << "Price of first item: " << flush;
		cin >> item1;

		cout << "Price of second item: " << flush;
		cin >> item2;

		cout << "Enter Tax Rate: " << flush;
		cin >> tax;
	}
	while (item1 < 0 || item2 < 0);



	// Variable to hold user input.
	string answer;

	// Checking that the user does not enter something other than what they have to.
	do
	{
		// Ask user if he/she is a club member or not.
		cout << "Is Client a Member?" << endl;
		cout << "Answer ('Y' or 'y' for yes) ('N' or 'n' for no): " << flush; 
		cin >> answer;
	}
	while (answer != "Y" && answer != "y" && answer != "N" && answer != "n");



	
	// Calculating the base.
	int base = item1 + item2;

	// Answer is y for yes then do this else do the other.
	if (answer == "Y" || answer == "y")
	{
		// Checking which item is less than the other one.
		if (item1 < item2)
		{
			// Calling the member function to be executed.
			member(tax, base, item1);
		}
		else
		{
			member(tax, base, item2);
		}
	}
	else
	{
		if (item1 < item2)
		{
			// Calling the none_member function to be executed.
			none_member(tax, base, item1);
		}
		else
		{
			none_member(tax, base, item2);
		}
	}

}
	
