#include "Complex.h"

using namespace std;

Complex::Complex(int real,int imaginary):real(real),imaginary(imaginary){}
Complex::Complex(const Complex& copy):real(copy.real),imaginary(copy.imaginary){}
Complex Complex::operator+(Complex right){
	return Complex(this->real + right.real,this->imaginary + right.imaginary);
}
Complex Complex::operator-(Complex right){
	return Complex(this->real - right.real,this->imaginary - right.imaginary);
}
Complex Complex::operator*(Complex right){
	int r = (this->real * right.real) - (this->imaginary * right.imaginary);
	int i = (this->real * right.imaginary) + (this->imaginary * right.real);
	return Complex(r,i);
}
void Complex::operator=(Complex copyObject){
	this->real = copyObject.real;
	this->imaginary = copyObject.imaginary; 
}
bool Complex::operator==(Complex conditionObj){
	if(this->real == conditionObj.real && this->imaginary == conditionObj.imaginary){
		return true;
	}
	else{
		return false;
	}
}
bool Complex::operator!=(Complex conditionObj){
	if(this->real != conditionObj.real || this->imaginary != conditionObj.imaginary){
		return true;
	}
	else{
		return false;
	}
}
ostream& operator<<(ostream& output,const Complex obj){
	if(obj.imaginary<0){
		output << obj.real << obj.imaginary << "i"; 
	}
	else{
		output << obj.real <<"+"<<obj.imaginary << "i"; 
	}
	return output;
}
