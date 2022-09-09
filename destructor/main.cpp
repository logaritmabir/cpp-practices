#include <iostream>
#include <string>
#include "Destructor.h"

Destructor des5(5,"CS105"); //Nerede tanýmlandýðýndan baðýmsýz olarak global deðiþkenler main fonksiyon çalýþmaya
							//baþlamadan önce kurulur,main fonksiyon iþini bitirdikten SONRA yýkýlýrlar. bknz.des5,des6
static Destructor des7(7,"CS107");

int main(int argc, char** argv) {
	cout << "main function has started.." << endl; //Bir nesne çalýþtýðý kapsamý terk ettiðinde (parantezler arasý) 
	Destructor des1(1,"CS101");					   // özdevimli olarak parçalanýr.
	Destructor des2(2,"CS102");
	Destructor des3(3,"CS103");
	Destructor des4(4,"CS104");
	cout << "main function has done its mission.." << endl;
}

Destructor des6(6,"CS106");
static Destructor des8(8,"CS108"); //global ve static deðiþkenler yapýldýklarý sýranýn tersiyle yok edilir.stack?
