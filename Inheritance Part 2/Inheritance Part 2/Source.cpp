#include<iostream>
#include<string>
using namespace std;

class Animal
{
public:
	Animal(); // creating constructor
	Animal(string name, int age, int num_limbs); // creating another constructor with parameters "Overloading Animal Constructor"

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

class Dog : public Animal // child class of animal
{
public:
	Dog();
	Dog(string name, int age, int num_limbs);

	void Speak();
};

class Corgi : public Dog
{

};

int main()
{
	// Animal();
	// Dog dog("Spot", 4, 5);
	// Dog Speak();

	Corgi corgi;

	corgi.Speak();
	corgi.Report();
	

	system("pause");
}

Animal::Animal() // define animal constructor
{
	cout << "An ANIMAL is born!\n";

	Name = "DEFAULT";
	Age = 2;
	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_limbs) : Name(name), Age(age), NumberOfLimbs(num_limbs) // define overload animal constructor
{
	Report();
}

void Animal::Report() // Animal Class Report Function
{
	cout << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "NumberOfLimbs: " << NumberOfLimbs << endl;
	cout << endl;
}

Dog::Dog()
{
	cout << "A DOG is born\n";
}

Dog::Dog(string name, int age, int num_limbs) : Animal(name, age, num_limbs)
{
	
}

void Dog::Speak()
{
	cout << "Woof!\n";
}