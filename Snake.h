#ifndef SNAKE_H
#define SNAKE_H

#include "Reptile.h"
#include <string>
class Snake : public Reptile {
private:
	string skinColor;
public:
	Snake(string name, int weight, int height, int length, string skinColor);
	string getSkinColor()const;
	void setSkinColor(const string);
	virtual void move()const; //Bu fonksiyon ne kadar saf sanal olsa da(türetilmiþ sýnýf tarafýndan ezilmeli) miras aldýðý Reptile
								// bu fonksiyonu daha önce ezdiði için Reptile'ýn move() fonksiyonu miras alýnýp kullanýlabilir.
	virtual void info()const;
};
#endif
