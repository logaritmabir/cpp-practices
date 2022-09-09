#include "Increment.h"
#include <iostream>

using namespace std;

void Increment::addIncrement(){
	count += increment;
}
Increment::Increment(int c, int i):count(c),increment(i){} //baþlatýcý listesi kurucudan önce çalýþýr.
void Increment::print() const {
	cout << "number : " << count << " arttýrým " << increment << endl;
}
