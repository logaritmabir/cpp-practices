#include <iostream>
#include "Date.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Date date1(01,11,1993);
	cout << date1 << endl;
	cout << date1++;
	cout << date1;
}
