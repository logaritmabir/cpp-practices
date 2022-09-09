#include <iostream>
#include "Interface.h"

using namespace std;

int main(int argc, char** argv) {
	Interface inter(5);
	cout << inter.getValue() << endl;
	inter.setValue(25);
	cout << inter.getValue() << endl;
}
