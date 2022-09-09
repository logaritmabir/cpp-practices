#include <iostream>
#include <string>
#include "Bill.h"

using namespace std;
int main(int argc, char** argv) {
	Bill bill1("CS101","Object Oriented Programming",2,34);
	cout << bill1.getProductPrice() << endl << bill1.getProductDescription() << endl
	<< bill1.getProductNumber() << endl << bill1.getOrderQuantity() << endl;
}
