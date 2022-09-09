#include <iostream>
#include "Increment.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Increment value(10,5);
	value.print();
	value.addIncrement();
	value.print();
}
