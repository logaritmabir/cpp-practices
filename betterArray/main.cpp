#include <iostream>
#include "Array.h"

int main(int argc, char** argv) {
	Array array1(10);
	++array1;
	Array array2(array1);
	cout << array1.getSize() << array2.getSize() << endl;
	
	if(array2 == array1){
		cout << "equal" << endl;
	}else{
		cout << "not equal" << endl;
	}
}
