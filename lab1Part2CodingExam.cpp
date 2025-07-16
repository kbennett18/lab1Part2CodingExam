#include "Dog.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Dog myDog;
	int age;
	string name;
	string breed;

	cout << "Please enter your dogs information " << endl;
	cin >> "Name: " >> myDog.getName() >> endl;
	cin >> "Age: " >> myDog.getAge() >> endl;
	cin >> "Breed: " >> myDog.getBreed() >> endl;

	myDog = Dog(name, age, breed);

	cout << "My dog is " << myDog.describe();
}