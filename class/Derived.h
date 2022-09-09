#ifndef DERIVED_H
#define DERIVED_H

#include <string>
#include "BaseClass.h"
using namespace std;

class Derived : public BaseClass{
	public:
		Derived(string,string,string,string,int,double,double,string);
		void setCountry(const string);
		string getCountry()const;
		virtual void print()const;
	private:
		string country;
};
#endif
