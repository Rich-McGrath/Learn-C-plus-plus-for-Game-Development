#include <iostream>
#include <string>
#include "Object.h"
#include "Actor.h"
#include "Pawn.h"
using namespace std;

void InheritanceFunction()
{
	Object* ptr_to_object = new Object;
	Actor* ptr_to_actor = new Actor;
	Pawn* ptr_to_pawn = new Pawn;

	Object* ObjectArray[] = { ptr_to_object, ptr_to_actor, ptr_to_pawn };

	for (int i = 0; i < 3; i++)
	{
		//ObjectArray[i]->BeginPlay();

		Object* obj = ObjectArray[i]; // dynamic casting below allows us to loop throug ObjectArray[] and check to see of that particular pointer points to an actor object, or pawn object.

		Actor* act = dynamic_cast<Actor*>(obj);

		if (act)
		{
			act->ActorFunction();
		}

		Pawn* pwn = dynamic_cast<Pawn*>(obj);

		if (pwn)
		{
			pwn->PawnFunction();
		}

	}

	delete ptr_to_object;
	delete ptr_to_actor;
	delete ptr_to_pawn;
	// 	delete[] ObjectArray;
}

int main()
{
	InheritanceFunction();
}
