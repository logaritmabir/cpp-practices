#include <string>
#include <ctime>

using namespace std;
class Account{
	private:
		string owner;
		int balance;
		time_t createdAt;
	public:
		Account(int initialBalance,string accountOwner);
		
		string getOwner();
		void setOwner(string);
		
		int getBalance();
		void setBalance(int);
		
		void increaseBalance(int amount);
		void decreaseBalance(int amount);
		
		time_t getCreatedDate();
};
