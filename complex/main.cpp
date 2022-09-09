#include <iostream>
#include "Complex.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Complex complx1(2,-3);
	Complex complx2(6,4);
	cout << complx1 << " " << complx2 << " " << complx1*complx2 << endl;
	if(complx1 == complx2){
		cout << "complx1 == complx2" << endl;
	}
	else if (complx1 != complx2){
		cout << "complx1 != complx2" << endl;
	}
	Complex complx3(complx2);
	cout << complx3 << " " << complx2+complx3 << endl;
	
}
