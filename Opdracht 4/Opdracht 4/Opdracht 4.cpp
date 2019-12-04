// Opdracht 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NPC.h"
#include "Orcs.h"
#include "Elves.h"
#include "Farmer.h"
#include "Soldier.h"
#include "Shaman.h"
int main()
{
    std::cout << "Hello World!\n";
	NPC* npc = new Elves();
	npc->Render();

	NPC* FarmElf = new Farmer(*npc);
	FarmElf->Render();
}

