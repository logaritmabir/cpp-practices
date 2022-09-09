#include <iostream>
#include "Derived.h"
#include "BaseClass.h"
#include "Composition.h"

using namespace std;

int main(int argc, char** argv) {
	BaseClass bclass1("Jessy","Roach","0000","Marketting",20,2000,0.5);
	Derived derived1("Alan","Bold","0001","IT",24,2300,0.8,"USA");
	Composition comp1("Hey","Yo","0002","Movie",22,3000,1.4,"CND");
	
	BaseClass *baseClassPtr = 0;
	baseClassPtr = &derived1;
	baseClassPtr->print();
	
	bclass1.print();
	derived1.print();
	comp1.print();
	
	
}

//YIKICILAR VE KURUCULAR MÝRAS ALINAMAZ.

