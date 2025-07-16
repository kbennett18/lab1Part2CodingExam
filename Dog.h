#ifndef Dog_h
#define Dog_h
#include <iostream>
#include <string>
using namespace std;


class Dog
{
private:
	int age;
	string name;
	string breed;
public:
	Dog();
	Dog(int age, string name, string breed);
	~Dog();
	void setAge(int age);
	void setName(string name);
	void setBreed(string name);
	int getAge();
	string getName();
	string getBreed() const;
	int getAgeInDogYears(int age);
	string describe(string T1, string T2);

};
#endif

