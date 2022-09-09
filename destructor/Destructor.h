#include <string>

using namespace std;

#ifndef DESTRUCTOR_H
#define DESTRUCTOR_H

class Destructor{
	private:
		int ID;
		string message;
	public:
		Destructor(int,string);
		~Destructor();
};

#endif
