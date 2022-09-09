#include <string>

using namespace std;

class Chain{
	private:
		string name;
		string surname;
		int age;
		static int count;
	public:
		Chain(string,string,int);
		~Chain();
		void print() const;
		Chain &setName(string);
		Chain &setSurname(string);
		Chain &setAge(int);
		static int getCount();
};
