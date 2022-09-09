#include "Card.h"

using namespace std;

string Card::faces[] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
string Card::suits[] = {"Spade","Hearts","Diamonds","Clubs"};

Card::Card(string f,string s):face(f),suit(s){
}
void Card::toString(){
	cout << face << " of " << suit << endl;
}
string Card::getFace(){
	return face;
}
string Card::getSuit(){
	return suit;
}
