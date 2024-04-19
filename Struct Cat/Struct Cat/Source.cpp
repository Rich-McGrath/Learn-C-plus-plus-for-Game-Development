#include <iostream>
#include <string>
using namespace std;

struct Cat
{
	Cat();

	int age;
	float Health;

	void Meow();
};

Cat::Cat()
{
	cout << "A new cat is born!" << endl;

	age = 3;
	Health = 75.f;

	Meow();
}

void Cat::Meow()
{
	cout << "My age is: " << age << ".\n";
	cout << "My health is: " << Health << ".\n";

}

int main()
{
	Cat cat;

	cat.age += 5;

	cat.Meow();

	system("pause");
}


// Structs in C++:
// A struct is a user - defined composite type that allows you to group several related variables into one place.
// Members : Each variable within the structure is known as a member.Unlike an array, a structure can contain various data types such as integers, strings, booleans, and more.
//
// Constructors :
// A constructor is a special method that is automatically called when an object is declared for a class or struct.
// Constructors allow you to initialize the object’s state during creation.
// In C++, both classes and structs can have constructors.
// The syntax for defining a constructor is similar for both :