#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
private:
	string name;
	int weight;
	int height;
public:
	Animal(string, int, int);
	string getName()const;
	void setName(const string);
	int getWeight()const;
	void setWeight(const int);
	int getHeight()const;
	void setHeight(const int);
	virtual void move()const = 0; // eðer bu fonksiyon alt sýnýfta ezilmezse alt sýnýfta soyut sýnýfa dönüþür.
	virtual void info()const;
	virtual ~Animal();
};

#endif // !
