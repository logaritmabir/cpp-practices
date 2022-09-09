#include <iostream>
#include "Account.h"

using namespace std;
int main(int argc, char** argv) {
	
	Account Acc1(300,"Usman");
	Acc1.decreaseBalance(100);
	Acc1.increaseBalance(400);
	cout << Acc1.getOwner() << endl;
	cout << Acc1.getBalance() << endl;
}
