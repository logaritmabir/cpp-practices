#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using namespace std;

class Array{
	private:
		int size;
		int *firstMember;
	public:
		explicit Array(int);
		Array(const Array &copyArray); //kopya kurucusu için referans kullanmak zorundayMIÞIM.niyeyse aq
		int& operator[](int);
		void operator=(const Array);
		Array& operator++();
		bool operator==(const Array);
		int* getFirstMember();
		int getSize();
};
#endif
