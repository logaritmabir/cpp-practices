#ifndef BASECLASS_H
#define BASECLASS_H

#include <string>
#include <iostream>

using namespace std;

class BaseClass{
	private:
		string name;
		string surname;
		string socialSecurityNumber;
		string department;
		int age;
		double salary;
		double riseRate;
	public:
		BaseClass(string = " - ",string = " - ",string = " - ",string = " - ",int = 0,double=0.0,double=0.0);
		
		void setName(const string);
		string getName()const;
		
		void setSurname(const string);
		string getSurname()const;
		
		void setSocialSecurityNumber(const string);
		string getSocialSecurityNumber()const;
		
		void setDepartment(const string);
		string getDepartment()const;
		
		void setAge(const int);
		int getAge()const;
		
		void setSalary(const double);
		double getSalary()const;
		
		void setRiseRate(const double);
		double getRiseRate()const;
		
		virtual void print()const;
};

#endif
