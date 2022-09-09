#include <string>
#include <iostream>

using namespace std;

#ifndef CARD_H
#define CARD_H

class Card{
	private:
		static string faces[];
		static string suits[];
		string face;
		string suit;
	public:
		Card(string f,string s);
		void toString();
		string getFace();
		string getSuit();
};
#endif
