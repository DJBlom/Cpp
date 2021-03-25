// The purpose of this program is to demonstrate OOP programming with: encapsulation, inheritance and polymorphism.

// All the libraries used in this program.
#include <iostream>
#include "Ticket.h"
using namespace std;




int main()
{
	TicketSales *ts;

	ShowTicket t1("AA", "101");
	SportTicket s2("AA", "101");


	t1.sell_seat();

	ts = &t1;

	if (!s2.beer_sold())
	{
		s2.sell_beer();
	}
	cout << ts -> print_ticket() << endl;

	cout << s2.print_ticket() << endl;
	

	
	return 0;
}
