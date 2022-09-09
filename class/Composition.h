#ifndef COMPOSITION_H
#define COMPOSITION_H

#include "BaseClass.h"
#include <iostream>
#include <string>

using namespace std;
class Composition{
	public:
		Composition(string,string,string,string,int,double,double,string);
		void setCountry(const string);
		string getCountry()const;
		void print()const;
	private:
		BaseClass baseObj;
		string country;
};

#endif
