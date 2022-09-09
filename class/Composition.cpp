#include "Composition.h"
#include <string>
using namespace std;

Composition::Composition(string name,string surname,string ssn,string depart,int age,double salary,double rate,string country){
	baseObj.setName(name);
	baseObj.setSurname(surname);
	baseObj.setSocialSecurityNumber(ssn);
	baseObj.setDepartment(depart);
	baseObj.setAge(age);
	baseObj.setSalary(salary);
	baseObj.setRiseRate(rate);
	setCountry(country);
}
void Composition::setCountry(string country){
	this->country = country;
}
string Composition::getCountry()const{
	return this->country;
}
void Composition::print()const{
	cout << "Name : " << baseObj.getName() << endl
	<< "Surname : " << baseObj.getSurname() << endl
	<< "Social Security Number : " << baseObj.getSocialSecurityNumber() << endl
	<< "Department : " << baseObj.getDepartment() << endl
	<< "Age : " << baseObj.getAge() << endl
	<< "Base Salary : " << baseObj.getSalary() << endl
	<< "Rise Rate : " << baseObj.getRiseRate() << endl
	<< "Country : " << this->getCountry() << endl;
}
