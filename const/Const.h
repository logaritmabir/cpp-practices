#include <string>
using namespace std;

#ifndef CONST_H
#define CONST_H
class Const {
private:
	string name;
	string surname;
	string ID;
	int age;
	string birthPlace;
	string accountCreateDate;
public:
	Const(string,string,string,int,string); // kurucular veya yýkýcýlar const olamaz.
	string getName();						// const bir nesnenin const OLMAYAN fonksiyonunu çaðýrmak hata üretir.
	string getSurname();					//nesnenin bir deðiþkenini deðiþtiren fonksiyonu const tanýmlamak hata üretir.
	string getID();
	int getAge();
	string getBirthPlace();
	string getAccountCreateDate();
	
	void setName(string);
	void setSurname(string);
	void setID(string);
	void setAge(int);
	void setBirthPlace(string);
	void setAccountCreateDate();
	
	void printObject() const;
	void printObject(string param) const;
	void printForConstants() const;
	void printObject();
};
#endif
