#pragma once
#include "Elves.h"
#include "Orcs.h"
#include <iostream>
class Soldier : public Orcs, public Elves
{
public:

	Soldier(NPC& _npc) :Orcs(_npc)
	{

	}

	Soldier(NPC& _npc) :Elves(_npc)
	{

	}


	virtual void Render()
	{
		Elves::Render();
		std::cout << "Farmer" << std::endl;
	}

};

