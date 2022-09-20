#include "Snake.h"
#include <iostream>
#include <string>

Snake::Snake(string name, int weight, int height, int length, string color) :Reptile(name, weight, height, length) {
	setSkinColor(color);
}
void Snake::setSkinColor(string color) {
	this->skinColor = color;
}
string Snake::getSkinColor()const {
	return this->skinColor;
}
void Snake::move()const {
	cout << "Snake Move" << endl;
}
void Snake::info()const {
	Reptile::info();
	cout << this->getSkinColor() << endl;
}