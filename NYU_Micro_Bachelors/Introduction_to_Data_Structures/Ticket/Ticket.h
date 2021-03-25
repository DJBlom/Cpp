#ifndef _TICKET_H
#define _TICKET	_H
#include <iostream>
using namespace std;



class TicketSales
{
	public:
		virtual string print_ticket() const = 0;
};


class ShowTicket :public TicketSales
{
	protected:
		string row, seat;

	public:
		ShowTicket(string row, string seat) :row(row), seat(seat) {};
		~ShowTicket() {};

		bool seat_sold() const;
		void sell_seat();
		string print_ticket() const;
};


class SportTicket :public ShowTicket
{
	public:
		SportTicket(string row, string seat) :ShowTicket(row, seat) {};
		~SportTicket() {};

		bool beer_sold() const;
		void sell_beer();
		string print_ticket() const;
};



#endif
