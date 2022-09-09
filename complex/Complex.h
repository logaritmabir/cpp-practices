#include <iostream>
using namespace std;

class Complex{
	friend ostream& operator <<(ostream&,const Complex); 
	private:
		int imaginary;
		int real;
	public:
		explicit Complex(int,int);
		Complex(const Complex&);
		Complex operator+(Complex); 
		Complex operator-(Complex);
		Complex operator*(Complex);
		void operator=(Complex);
		bool operator!=(Complex);
		bool operator==(Complex);
};
