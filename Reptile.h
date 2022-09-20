#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
#include <iostream>
#include <string>

class Reptile : public Animal {
private:
	int length;
public:
	Reptile(string name, int weight, int height, int length);
	int getLength()const;
	void setLength(const int);
	virtual void move()const; // Eðer bu tanýmlama olmasaydý Reptile da bir soyut sýnýf olacaktý
	virtual void info()const;
};
#endif // !REPTILE_H

