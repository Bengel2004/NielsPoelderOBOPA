#pragma once
#include "Elves.h"
#include "Orcs.h"
#include <iostream>
class Shaman : public Orcs
{
public:

	Shaman(NPC& _npc) :Orcs(_npc)
	{

	}




	virtual void Render()
	{
		Orcs::Render();
		std::cout << "Farmer" << std::endl;
	}




};

