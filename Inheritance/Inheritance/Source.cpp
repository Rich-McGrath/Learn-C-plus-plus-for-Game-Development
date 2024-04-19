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

int main()
{
	Animal animal;

	animal.Report();

	Animal animal_2("Cheetah", 7, 5); // calling the version of Animal with the 3 parameters

	animal_2.Report();

	system("pause");
}

Animal::Animal() // define animal constructor
{
	cout << "An ANIMAL is born!\n";

	Name = "DEFAULT";
	Age = 2;
	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_limbs): Name(name), Age(age), NumberOfLimbs(num_limbs) // define overload animal constructor
{
	// The code below has been replace by Name(name), Age(age), NumberOfLimbs(num_limbs) when defining the constructor
	/*Name = name; 
	Age = age;
	NumberOfLimbs = num_limbs; */
}

void Animal::Report() // Animal Class Report Function
{
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "NumberOfLimbs " << NumberOfLimbs << endl;
}
