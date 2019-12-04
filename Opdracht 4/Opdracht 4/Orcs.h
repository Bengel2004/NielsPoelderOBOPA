#pragma once
#include "NPC.h"

#include <string>
class Orcs : public NPC
{
public:
	Orcs(NPC& _npc) :npc(_npc)
	{
		
	}

	virtual void Render() 
	{
		npc.Render();
	}
private:
	NPC& npc;
};

