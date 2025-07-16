#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;

int ageInDog;

Dog::Dog(int a, string n, string b)
{
	a = age;
	n = name;
	b = breed;
}

void Dog::setAge(int a)
{
	age = a;
}

void Dog::setName(string n)
{
	name = n;
}

void Dog::setBreed(string b)
{
	breed = b;
}

int Dog::getAge()
{
	return age;
}

string Dog::getName()
{
	return name;
}

string Dog::getBreed() const
{
	return breed;
}

int Dog::getAgeInDogYears(int age)
{
	ageInDog = age * 7;
	return ageInDog;
}

string Dog::describe(string T1, string T2)
{
	cout << "My dog is " << age << "Which is " << ageInDog << "years old in dog years." << endl;
	cout << "My dogs name is " << name << "and he is a " << breed << endl;
	cout << "My dog knows 2 tricks " << T1 << "and " << T2 << endl;
}
