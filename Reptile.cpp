#include "Reptile.h"
#include <iostream>

Reptile::Reptile(string name, int weight, int height, int length):Animal(name,weight,height) {
	setLength(length);
}
void Reptile::setLength(const int length) {
	this->length = length;
}
int Reptile::getLength()const {
	return this->length;
}
void Reptile::move()const {
	cout << "Reptile Move" << endl;
}
void Reptile::info()const {
	Animal::info();
	cout << this->getLength() << endl;
}