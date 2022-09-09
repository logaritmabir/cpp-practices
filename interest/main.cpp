#include <iostream>
#include "SavingsAccount.h"

int main(int argc, char** argv) {
	SavingsAccount acc1(4000);
	acc1.modifyInterestRate(3);
	SavingsAccount acc2(3000);
	cout << acc1.calculateMonthlyInterest() << endl;
	acc1.insertInterest();
	cout << acc1.getCurrentBalance() << endl;
}
