#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
	PS_Crouched, 
	PS_Standing,
	PS_Walking,
	PS_Running
};

enum MovementStatus
{
	MS_Crouched,
	PS_Running
};

int main()
{
	PlayerStatus status;
	status = PlayerStatus::PS_Running;

	status = MovementStatus::PS_Running;

	



	system("pause");
}