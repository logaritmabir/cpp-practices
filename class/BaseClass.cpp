#include <string>
#include "BaseClass.h"
#include <iostream>

using namespace std;
BaseClass::BaseClass(string name,string surname,string ssn,string depart,int age,double salary,double riseRate){
	setName(name);
	setSurname(surname);
	setSocialSecurityNumber(ssn);
	setDepartment(depart);
	setAge(age);
	setSalary(salary);
	setRiseRate(riseRate);
}
void BaseClass::setName(const string name){
	this->name = name;
}
string BaseClass::getName()const{
	return this->name;
}
void BaseClass::setSurname(const string sname){
	this->surname = sname;
}
string BaseClass::getSurname()const{
	return this->surname;
}
void BaseClass::setSocialSecurityNumber(const string SSN){
	this->socialSecurityNumber = SSN;
}
string BaseClass::getSocialSecurityNumber()const{
	return this->socialSecurityNumber;
}
void BaseClass::setDepartment(const string depart){
	this->department = depart;
}
string BaseClass::getDepartment()const{
	return this->department;
}
void BaseClass::setAge(const int age){
	this->age = age;
}
int BaseClass::getAge()const{
	return this->age;
}
void BaseClass::setSalary(const double salary){
	this->salary = salary;
}
double BaseClass::getSalary()const{
	return this->salary;
}
void BaseClass::setRiseRate(const double rate){
	this->riseRate = rate;
}
double BaseClass::getRiseRate()const{
	return this->riseRate;
}
void BaseClass::print()const{
	cout << "Name : " << getName() << endl
	<< "Surname : " << getSurname() << endl
	<< "Social Security Number : " << getSocialSecurityNumber() << endl
	<< "Department : " << getDepartment() << endl
	<< "Age : " << getAge() << endl
	<< "Base Salary : " << getSalary() << endl
	<< "Rise Rate : " << getRiseRate() << endl;
}
