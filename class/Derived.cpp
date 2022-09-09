#include <string>
#include "Derived.h"
using namespace std;

Derived::Derived(string name,string surname,string ssn,string depart,int age,double salary,double rate,string country)
:BaseClass(name,surname,ssn,depart,age,salary,rate){ //BaseClass::BaseClass þeklinde bir çaðýrma yapma
	setCountry(country);
}
void Derived::setCountry(string country){
	this->country = country;
}
string Derived::getCountry()const{
	return this->country;
}
void Derived::print()const{
	BaseClass::print();
	cout << "Country : " << getCountry() << endl;
}
