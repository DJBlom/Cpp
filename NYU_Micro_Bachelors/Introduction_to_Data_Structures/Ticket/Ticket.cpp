// This file contains the implementations of all the methods in the file Ticket.h.

// All libraries used in this program.
#include <iostream>
#include <vector>
#include "Ticket.h"
using namespace std;

vector<string> ROW;
vector<string> SEAT;
vector<string> BEER;


/* All methods in this section belongs to ShowTicket class. */

// Implementation of seat_sold() method.
bool ShowTicket::seat_sold() const
{
	for (auto &i : ROW)
	{
		for (auto &j : SEAT)
		{
			if (i == row && j == seat)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}




// Implementation of sell_seat() method.
void ShowTicket::sell_seat()
{
	ROW.push_back(row);
	SEAT.push_back(seat);
}




// Implementation of print_ticket() method. Override.
string ShowTicket::print_ticket() const
{
	if (seat_sold())
	{
		return this -> row + " " + this -> seat + " sold";
	}
	else
	{
		return this -> row + " " + this -> seat + " available";
	}
}




/* All methods in this section belong to the class SportTicket. */

// Implementation of beer_sold() method.
bool SportTicket::beer_sold() const
{
	if (seat_sold())
	{
		return true;
	}
	else
	{
		return false;
	}
}




// Implementation of sell_beer() method.
void SportTicket::sell_beer()
{
	BEER.push_back(seat);
}




// Implementation of print_ticket() method. Overrride.
string SportTicket::print_ticket() const
{
	if (beer_sold())
	{
		return this -> row + " " + this -> seat + " sold beer";
	}
	else
	{
		return this -> row + " " + this -> seat + " sold no beer";
	}
}
