#include <string>
#include "Destructor.h"
#include <iostream>
using namespace std;

Destructor::Destructor(int objectID,string objectMessage){
	
	ID = objectID;
	message = objectMessage;
	cout << "An object has been created with these values --> "
	<< " ID : " << objectID
	<< " message : " << objectMessage << endl;
	cout << "-------------------------------------" << endl;
}
Destructor::~Destructor(){
	
	cout << "An object has been destroyed with these values --> "
	<< " ID : " << ID
	<< " message : " << message << endl;
	cout << "-------------------------------------" << endl;
}
