#pragma once
#include "NPC.h"
#include <string>
class Elves : public NPC
{
public:

	Elves(NPC& _npc) :npc(_npc)
	{

	}

	virtual void Render()
	{
		npc.Render();
	}
private:
	NPC& npc;
};

