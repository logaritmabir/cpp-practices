#include <iostream>
#include <string>
#include <ctime>
#include "Account.h"

using namespace std;

Account::Account(int initialBalance,string accountOwner){
	setBalance(initialBalance);
	setOwner(accountOwner);
	createdAt = time(NULL);
	char *converTime = ctime(&createdAt);
	
	cout << "An account has been created with these values : " << endl 
	<< "balance : " << balance << endl
	<< "owner : " << owner <<endl
	<< "created at : " << converTime << endl;
}
int Account::getBalance(){
	return balance;
}
string Account::getOwner(){
	return owner;
}
void Account::setBalance(int newBalance){
	if(newBalance < 0){
		cout << "A number inserted that less than 0 !!!" << endl;
		balance = 0;
	}
	else{
		balance = newBalance;
	}
}
void Account::setOwner(string ownerName){
	owner = ownerName;
}
void Account::increaseBalance(int amount){
	if(amount > 0){
		balance += amount;
		cout << "Balance after operation : " << balance << endl;
	}
	else{
		cout << "Please do not use minus or zero for spesific functions." << endl;
	}
}
void Account::decreaseBalance(int amount){
	if(amount < balance){
		if(amount > 0){
			balance -= amount;
			cout << "Balance after operation : " << balance << endl;
		}
		else{
			cout << "Please do not use minus or zero for spesific functions." << endl;
		}
	}
	else{
		cout << "You do not have enough money to withdraw." << endl;
		cout << "Balance in your account : " << balance << endl;
	}
}

