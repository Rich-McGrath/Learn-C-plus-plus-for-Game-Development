#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	Creature();

	void SetName(string name); // setter for the creature name
	string GetName(); // Getter for creature name

	float GetHealth();

	void TakeDamage(float damage);


private:
	string Name;
	float Health;



protected:
	int NumberOfLimbs;

};

class Goblin : public Creature
{
public:  // When you create a child class by default it's body is private and your need your constructor to be public if you want to call it by creating an object of that class.
	Goblin();

	int GetNumberOfLimbs();
};

int main()
{
	/*Creature Igor;
	Igor.SetName("Igor");
	cout << "Name: " << Igor.GetName() << endl;
	cout << "Health: " << Igor.GetHealth() << endl;

	cout << "Igot will now take 35 damage!" << endl;

	Igor.TakeDamage(35.0);*/

	Goblin Gobby;

	cout << Gobby.GetName() << endl;
	cout << Gobby.GetNumberOfLimbs() << endl;
	

	system("pause");
}

Creature::Creature() 
{
	Health = 100.f;
	cout << "A creature has been created!\n";
}

void Creature::SetName(string name) // function definition for the creature name setter
{
	Name = name;
}

string Creature::GetName()
{
	return Name;
}

float Creature::GetHealth()
{
	return Health;
}

void Creature::TakeDamage(float damage)
{
	float Total;
	Total = Health - damage;

	if (Total <= 0.f)
	{
		cout << GetName() << " has died\n";
	}
	else
	{
		Health -= damage;
	}

	cout << "Health: " << Health << endl;
}

Goblin::Goblin()
{
	// NumberOfLimbs = 5;

	SetName("Gobby");
}
int Goblin::GetNumberOfLimbs()
{
	NumberOfLimbs = 5;
	return NumberOfLimbs;
}