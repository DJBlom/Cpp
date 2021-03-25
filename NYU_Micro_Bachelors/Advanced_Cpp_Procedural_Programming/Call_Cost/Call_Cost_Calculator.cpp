// The purpose of this call is to calculate the cost of a long-distance call.

// All libraries used in this program.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;




// Main method/function used in this program.
void Call_Cost_Calculator();

// Main program.
int main(void)
{
	// Calling the main method/function to be executed.
	Call_Cost_Calculator();

	// Return 0 if all is good.
	return 0;
}






// Method/Function to display the result to stdout.
void display(float result)
{
	cout << "This call will cost $" << setprecision(4) << result << endl;
}






// Method/Function used for 24 hour clock conversion.
int clock(int time)
{
	// If time is less than 1000 than convert 
	if (time < 1000)
	{
		int result = time + 1200;
		cout << result << endl;

		return result;
	}
	// Else return original time.
	else
	{
		return time;
	}
}






// Method/Function used to calculate a call that accured between the hourse of 08:00 - 18:00.
float Call_Cost(string day, int time, int minutes)
{
	// Calling the clock method/function to be executed.
	int hour = clock(time);

	// Checking if the time is between 8:00 am and 6:00 pm;
	if ((hour >= 800 || hour <= 1800) && day != "Sat" && day != "Sun")
	{
		float cost = minutes * 0.40;

		return cost;
	}
	// Checking if the time is before 8:00 am and after 6:00 pm
	else if ((hour <= 800 || hour >= 1800) && day != "Sat" && day != "Sun")
	{
		float cost = minutes * 0.25;

		return cost;
	}
	// Any call made on Saturdays or Sundays.
	else
	{
		float cost = minutes * 0.15;

		return cost;
	}
}







// Implementation of main method/function used in this program.
void Call_Cost_Calculator()
{
	// Variable to hold the day the call was made.
	string day;

	// Checking user inputs one of the answers.
	do
	{
		cout << "Monday (Mon), Tuesday (Tue), Wednessday (Wed), Thursday (Thr), Friday (Fri), Saturday (Sat) and Sunday (Sun)" << endl;
		cout << "Enter the day the call started at: " << flush;
		cin >> day;
	}
	while (day != "Mon" && day != "Tue" && day != "Wed" && day != "Thr" && day != "Fri" && day != "Sat" && day != "Sun");



	// Variables to hold the time and minutes.
	int time, minutes;

	// Checking that user does not input negative integers.
	do
	{
		cout << "Enter the time the call started at (hhmm): " << flush;
		cin >> time;

		cout << "Enter the duration of the call (in minutes): " << flush;
		cin >> minutes;
	}
	while (time < 0 || minutes < 0);



	// Calling the display method/function to print the results to stdout.
	float result = Call_Cost(day, time, minutes);

	// Calling the display method to print the result to stdout.
	display(result);
}
