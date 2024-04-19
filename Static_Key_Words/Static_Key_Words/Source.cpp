#include <iostream>
#include <string>
using namespace std;

void AddToCount()
{
	static int count = 0; // Static Keywords using in a function
	count++;
	cout << count << endl;
}

int main()
{
	for (int i = 0; i < 100; i++)
	{
		AddToCount();
	}


	system("pause");
}