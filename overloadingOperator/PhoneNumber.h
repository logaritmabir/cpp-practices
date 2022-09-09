#include <string>
#include <iostream>

using namespace std;

#ifndef PHONE_H
#define PHONE_H
class PhoneNumber{
	private:
		string areaCode;
		string exchange;
		string line;
	public:
		friend ostream &operator<<(ostream &,const PhoneNumber &);
		friend istream &operator>>(istream &,PhoneNumber &);
};
#endif
