#include "PhoneNumber.h"
#include <iomanip>

using namespace std;

ostream &operator<<(ostream &output,const PhoneNumber &number){
	output << "(" << number.areaCode << ")" << number.exchange << "-" << number.line;
	return output; 
}
istream &operator>>(istream &input,PhoneNumber &number){
	input >> setw(3) >> number.areaCode;
	input >> setw(3) >> number.exchange;
	input >> setw(4) >> number.line;
	return input;
}
