#include "Card.h"
#include <vector>
#include <iostream>

using namespace std;

class DeckOfCard{
	private:
		static vector<Card> deck;
		int currentCard;
	public:
		DeckOfCard(string f,string s){
			deck.push_back(Card(f,s));
		}
		void printVector(){
			for(int i = 0;i<deck.size();i++){
				cout << deck[i].getFace() << endl;
			}
		}
	
};
