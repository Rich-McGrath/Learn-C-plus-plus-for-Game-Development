#include <iostream>
#include <String>
using namespace std;

class Critter
{
public:

	Critter() 
	{
		cout << "A critter is born!\n";
		++CritterCount;
	}

	static void AnnounceCount() // A static function
	{
		cout << CritterCount << endl;
	}
	static int CritterCount;
};

int Critter::CritterCount = 0; // you cant Initialize (assign a value) to a static variable inside of a class

// You can create a class with Static varibales and functions and use those functions without creating a n object of that class.

int main() 
{
	
	Critter::AnnounceCount();

	Critter* crit = new Critter;
	Critter::AnnounceCount();

	delete crit;

	system("pause");
}