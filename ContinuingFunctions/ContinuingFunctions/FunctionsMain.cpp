#include <iostream>
using namespace std;

void welcome();

char getYesNo();

void printResponse(char responseToPrint);

void askYesOrNoQuestion();

int main()
{
	// Asks user to enter y or n and then returns the response
	askYesOrNoQuestion();

	system("pause");
}

void welcome()
{
	// Welcome the user to the program
	cout << "Welcome!\n";
}

char getYesNo()
{
	// Ask the user to enter y or n?
	cout << "Please answer: y or n.\n";

	// char variable to store the response
	char response;
	
	// get input from the user via keyboard
	cin >> response;

	return response;
}

void printResponse(char responseToPrint)
{
	// Print the response to the screen
	cout << "Your answer was: " << responseToPrint << endl;
}

void askYesOrNoQuestion()
{
	// Greet the user
	welcome();

	// create char variable and store the result from getYesNo()
	char answer = getYesNo(); // getYesNo() gets a y or n from the user

	// Return the response back to the user on the screen
	printResponse(answer);
}
