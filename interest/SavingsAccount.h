#include <iostream>

using namespace std;

class SavingsAccount{
	private:
		static int annualInterestRate;
		int currentBalance;
	public:
		SavingsAccount(int balance);
		int getCurrentBalance() const;
		static int getAnnualInterestRate();
		int calculateMonthlyInterest();
		static void modifyInterestRate(int newRate);
		void insertInterest();
};
