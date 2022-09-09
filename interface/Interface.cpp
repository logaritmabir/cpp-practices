#include "Implementation.h"
#include "Interface.h"

Interface::Interface(int v):ptr(new Implementation(v)){}
void Interface::setValue(int v){
	ptr->setValue(v);
}
int Interface::getValue(){
	return ptr->getValue();
}
