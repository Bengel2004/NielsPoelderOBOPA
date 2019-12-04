#pragma once
#include "Elves.h"
#include "Orcs.h"
#include <iostream>
class Farmer : public Elves
{
public:

	Farmer(NPC& _npc) :Elves(_npc)
	{

	}

	virtual void Render()
	{
		NPC::Render();
		std::cout << "Farmer" << std::endl;
	}
};

