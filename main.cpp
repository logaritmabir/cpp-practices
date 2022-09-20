#include <iostream>
#include "Animal.h"
#include "Reptile.h"
#include "Snake.h"
#include <typeinfo>
#include <vector>

int main()
{
	Reptile reptile1("Lizard", 760, 13, 33);
	Snake snake1("Cobra", 1400, 6, 280, "Black");

	vector <Animal* > animals(2);
	animals.at(0) = &reptile1;
	animals.at(1) = &snake1;

	for (Animal* ptr : animals) {
		cout << "Current object is a " << typeid(*ptr).name() << endl;
		ptr->info();
		ptr->move();
		Snake* detectSnakePtr = dynamic_cast <Snake*>(ptr);
		if (detectSnakePtr != nullptr) {
			cout << "A Snake object has been detected" << endl;
		}
	}
}

