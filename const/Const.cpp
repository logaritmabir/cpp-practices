#include "Const.h"
#include <string>
#include <iostream>
#include <ctime>

using namespace std;

Const::Const(string consName,string consSurname,string consID,int consAge,string consBirthPlace){
	setName(consName);
	setSurname(consSurname);
	setID(consID);
	setAge(consAge);
	setBirthPlace(consBirthPlace);
	setAccountCreateDate();
	printObject();
}

void Const::setName(string pName){
	name = pName;
}
void Const::setSurname(string pSurname){
	surname = pSurname;
}
void Const::setID(string pID){
	ID = pID;
}
void Const::setAge(int pAge){
	age = pAge;
}
void Const::setBirthPlace(string pBirthPlace){
	birthPlace = pBirthPlace;
}
void Const::setAccountCreateDate(){
	time_t createdAt = time(NULL);
	char *converTime = ctime(&createdAt);
	accountCreateDate = converTime;
}
string Const::getName(){
	return name;
}
string Const::getSurname(){
	return surname;
}
string Const::getID(){
	return ID;
} 
int Const::getAge(){
	return age;
}
string Const::getBirthPlace(){
	return birthPlace;
}
string Const::getAccountCreateDate(){
	return accountCreateDate;
}
void Const::printObject() const{
	cout << "(CONST ONLY)A constant object has been constructed with these values : " << endl
	<< "name : " << name << endl
	<< "surname : " << surname << endl
	<< "ID : " << ID << endl 
	<< "age : " << age << endl
	<< "birth place : " << birthPlace << endl
	<< "account created at : " << accountCreateDate << endl;
}
void Const::printObject(string param) const{
	cout << "(CONST ONLY)A constant object has been constructed with these values : " << endl
	<< "name : " << name << endl
	<< "surname : " << surname << endl
	<< "ID : " << ID << endl 
	<< "age : " << age << endl
	<< "birth place : " << birthPlace << endl
	<< "account created at : " << accountCreateDate << endl
	<< "given string parameter is : " << param << endl;
}
void Const::printObject(){
	cout << "An object has been constructed with these values : " << endl
	<< "name : " << name << endl
	<< "surname : " << surname << endl
	<< "ID : " << ID << endl 
	<< "age : " << age << endl
	<< "birth place : " << birthPlace << endl
	<< "account created at : " << accountCreateDate << endl;
}
void Const::printForConstants() const{
	cout << "(CONST ONLY) A constant object has been constructed with these values : " << endl
	<< "name : " << name << endl
	<< "surname : " << surname << endl
	<< "ID : " << ID << endl 
	<< "age : " << age << endl
	<< "birth place : " << birthPlace << endl
	<< "account created at : " << accountCreateDate << endl;
}
