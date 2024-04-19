#include<iostream>
#include<string>
using namespace std;

class Dog
{
public:

	Dog() //Dog Constructor
	{
		Bark();

		Name = "Default Name";
		Age = 10;
		Health = 100.f;
	}

	string Name;
	int Age;
	float Health;

	void Bark() 
	{
		cout << "Woof!" << endl;

	}
};

int main()
{
	Dog dog;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	dog.Name = "Chewy";
	dog.Age = 3;
	dog.Health = 100;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	 // dog.Bark(); No longer needed as we created a constructor in the dog class see line 9
	system("pause");
}