#include <iostream>
#include <string>
using namespace std;

int main()
{
	string MyString;

	MyString = "My dog's name is: ";
	string first = "Chewy ";
	string last = "McGrath";

	MyString += (first + last);

	cout << MyString << endl;

	system("pause");
}