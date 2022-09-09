#include "Chain.h"
#include <iostream>
#include <string>

using namespace std;

int Chain::count = 0; // tekrardan static yazma

Chain::Chain(string name,string surname,int age){
	setName(name);
	setSurname(surname);
	setAge(age);
	count++;
	this->print();
}
Chain::~Chain(){
	count--;
}
Chain &Chain::setName(string name){
	this->name = name;
	return *this;
}
Chain &Chain::setSurname(string surname){
	this->surname = surname;
	return *this;
}
Chain &Chain::setAge(int age){
	this->age = age;
	return *this;
}
void Chain::print() const{
	cout << "name : " << this->name << endl
	<< "surname : " << this->surname << endl
	<< "age : " << this->age << endl
	<< "current members count : " << this->count << endl;
}
int Chain::getCount(){
	cout << count << endl;
	return count;
}
//staticlerle this birlikte kullanma
