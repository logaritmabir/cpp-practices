#include "Animal.h"
#include "string"
#include <iostream>
#include <typeinfo>

Animal::Animal(string name,int weight,int height) {
	setName(name);
	setWeight(weight);
	setHeight(height);
}
Animal::~Animal() {
	cout << "A " << typeid(*this).name() << " is deleted" << endl; //buraya bir bak
}
string Animal::getName()const {
	return this->name;
}
void Animal::setName(const string name) {
	this->name = name;
}
int Animal::getWeight()const {
	return this->weight;
}
void Animal::setWeight(const int weight) {
	this->weight = weight;
}
int Animal::getHeight()const {
	return this->height;
}
void Animal::setHeight(const int height) {
	this->height = height;
}
void Animal::info()const {
	cout << this->getName() << endl
		<< this->getWeight() << endl
		<< this->getHeight() << endl;
}