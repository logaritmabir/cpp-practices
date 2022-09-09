#include <iostream>
#include <string>
#include "Const.h"
#include <stdexcept>

using namespace std;

int main(int argc, char** argv) {
	Const consti1("itachi","uchiha","K001",22,"Tokyo"); // bu deðiþken const fonksiyonlarý da KULLANABÝLÝR.
	const Const consti2("genzo","wakabayashi","T001",30,"China");
	
	consti2.printForConstants();
	consti2.printObject();
	consti1.printObject();
	consti1.printForConstants();
	
	try{
		cout << consti1.getAge();
	}
	catch(const exception &ex){
		cout << ex.what() << endl;
	}
}
