#include "Date.h"
#include <iostream>

Date::Date(int d,int m,int y){
	this->day = d;
	this->month = m;
	this->year = y;
}
void Date::setDate(int d,int m,int y){
	this->day = d;
	this->month = m;
	this->year = y;
}
Date& Date::operator++(){
	this->day++;
	return *this;
}
Date Date::operator++(int nothing){
	Date temp = *this;
	this->day++;
	return temp;
}
ostream &operator<<(ostream &output,const Date &d){
	output << d.day << "-" << d.month << "-" << d.year << endl;
	return output;
}
