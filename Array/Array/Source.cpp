#include <iostream>
using namespace std;

int main()
{
	// int MyIntArray[10];

	// for (int i = 0; i < 10; ++i)
	// {
	//	MyIntArray[i] = 1;
	//	cout << MyIntArray[i] << endl;
	// }

	// cout << "The first element in MyIntArray is: " << MyIntArray[0] << endl;

	// cout << "The First element: " << MyIntArray[4] << endl;

	int MyArray[5] = { 1, 23, 5, 4, 9 };

	// cout << "MyArray[0] = " << MyArray[0] << endl;
	// cout << "MyArray[1] = " << MyArray[1] << endl;
	// cout << "MyArray[2] = " << MyArray[2] << endl;
	// cout << "MyArray[3] = " << MyArray[3] << endl;
	// cout << "MyArray[4] = " << MyArray[4] << endl;
	// cout << "MyArray[5] = " << MyArray[5] << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "MyArray[" << i << "] = " << MyArray[i] << endl;
	}


	system("pause");
}