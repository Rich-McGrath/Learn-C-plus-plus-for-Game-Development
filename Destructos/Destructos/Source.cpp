#include <iostream>
#include <string>
using namespace std;

class Character
{
public:
	Character(); // Constructor - needs to be called the same name as your class
	~Character(); // Destructor

	int* CharacterAge;
	float* CharacterHealth;

};

int main()
{
	Character* Char = new Character;
	delete Char;

	system("pause");
}

Character::Character()
{
	cout << "A new character was created.\n";
	CharacterAge = new int(1);
	CharacterHealth = new float(100.f);
}

Character::~Character()
{
	cout << "Character destroyed.\n";

	delete CharacterAge;
	delete CharacterHealth;
	

}