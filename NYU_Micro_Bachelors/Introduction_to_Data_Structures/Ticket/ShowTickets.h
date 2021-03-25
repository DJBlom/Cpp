// This is theatre ticket system program.

#ifndef _SHOWTICKETS_
#define _SHOWTICKETS_
// All the libraries used in this program.
#include <iostream>
#include <vector>
using namespace std;


vector<string> SEAT;
vector<string> ROW;



class ShowTickets
{
	protected:
		string seat;
		string row;
		bool sold;

	public:
		ShowTickets() {};
		~ShowTickets() {};

		bool is_sold(string row, string seat)
		{
			for (int i = 0, ilen = ROW.size(); i < ilen; i++)
			{
				for (int j = 0, jlen = SEAT.size(); j < jlen; j++)
				{
					if (ROW[i] == this->row && SEAT[j] == this->seat)
					{
						return sold = true;
					}
					else
					{
						return sold = false;
					}
				}
			}
		}



		void sell_seat(string row, string seat)
		{
			ROW.push_back(row);
			SEAT.push_back(seat);

			sold = true;
		}



		string print_ticket(string row, string seat)
		{
			for (int i = 0, ilen = ROW.size(); i < ilen; i++)
			{
				for (int j = 0, jlen = SEAT.size(); j < jlen; j++)
				{
					if (ROW[i] == row && SEAT[j] == seat)
					{
						return row + " " + seat + " sold";
					}
					else
					{
						return row + " " + seat + " available";
					}
				}
			}
		}
};


#endif

