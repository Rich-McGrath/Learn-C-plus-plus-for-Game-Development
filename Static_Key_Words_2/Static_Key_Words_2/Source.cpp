#include <iostream>
#include <string>
using namespace std;

class Item
{
public:
	Item()
	{
		cout << "An item has been created!\n";
	}
	~Item()
	{
		cout << "An item has been destroyed!\n";
	}
};

int main()
{
	{
		static Item item;
	}

	system("pause");
}