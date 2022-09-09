#include <iostream>
#include "Person.h"
#include <ctime>
#include <vector>
#include <thread>

using namespace std;
vector<thread> threads;

void startTransaction();
void continueTransaction(Person* person);
void createThread();
void nameThread(Person* person);
void surnameThread(Person* person);
void addressThread(Person* person);
void pnumberThread(Person* person);
void birthdayThread(Person* person);
void countryThread(Person* person);

int main()
{
	startTransaction();
	for (int i = 0; i < threads.size(); i++) {
		threads.at(i).join();
	}
}
void startTransaction() {
	threads.push_back(thread(createThread));
}
void continueTransaction(Person* person) {
	threads.push_back(thread(nameThread, person));
	threads.push_back(thread(surnameThread, person));
	threads.push_back(thread(addressThread, person));
	threads.push_back(thread(pnumberThread, person));
	threads.push_back(thread(birthdayThread, person));
	threads.push_back(thread(countryThread, person));
}
void createThread() {
	Person person1;
	continueTransaction(&person1);
}
void nameThread(Person* person) {
	person->setName("Thread name");
}
void surnameThread(Person* person) {
	person->setSurname("Thread surname");
}
void addressThread(Person* person) {
	person->setAddress("Thread address");
}
void pnumberThread(Person* person) {
	person->setPhoneNumber("000-000-000");
}
void birthdayThread(Person* person) {
	person->setBirthday("Thread birthday");
}
void countryThread(Person* person) {
	person->setCountry("Thread country");
}
