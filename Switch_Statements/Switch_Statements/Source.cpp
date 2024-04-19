#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
	PS_Running,
	PS_Walking,
	PS_Crouching
};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);

void SwitchOnInt(int i);

int main()
{
	int integer = 0;

	SwitchOnInt(integer);

																																			//float MovementSpeed;

																																			//PlayerStatus status = PS_Walking; // change this to active different if statments below.

																																			//UpdateMovementSpeed(status, MovementSpeed);


																																			//cout << "MovementSpeed = " << MovementSpeed << endl;



	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed) // This function is being ignored after commenting code to follow along in the video example. Technically should be seperate programs.
{
	switch (P_Status)
	{
	case PS_Running:
		speed = RunSpeed;
		break;
	case PS_Walking:
		speed = WalkSpeed;
		break;
	case PS_Crouching:
		speed = CrouchSpeed;
		break;
	}

																																													// Took if Statments and made Switch instead.
																																													/*if (P_Status == PS_Running)
																																													{
																																														speed = RunSpeed;
																																													}
																																													else if (P_Status == PS_Walking)
																																													{
																																														speed = WalkSpeed;
																																													}
																																													else if (P_Status == PS_Crouching)
																																													{
																																														speed = CrouchSpeed;
																																													}*/
}

void SwitchOnInt(int i)
{
	switch (i)
	{
	case 0:
		cout << "Your number was zero. \n";
		break;
	case 1:
		cout << "Your number was 1. \n";
		break;
	case 2:
		cout << "Your number was 2. \n";
		break; 
	default:
		cout << "Your number was not 0, 1, or 2. \n";
	}
}