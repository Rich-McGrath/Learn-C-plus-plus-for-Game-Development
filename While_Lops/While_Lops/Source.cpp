#include <iostream>
using namespace std;

int main()
{
	int MyInt(0);

	int count = 0;

	while (count <= 10)
	{
		cout << MyInt << endl; 
		MyInt++;
		count++;
	}

	system("pause");
}