#include "Cell.h"
#include <iostream>

Cell::Cell()
{
	int _r = rand() % 10 + 1;
	if (_r < 5) 
	{
		this->isAlive = true;
	}
}

Cell::~Cell()
{
}

void Cell::Kill()
{
	this->isAlive = false;
}

void Cell::Draw()
{
	if (this->isAlive) 
	{
		std::cout << "1";
	}
	else {
		std::cout << "0";
	}
}

void Cell::SetAlive()
{
	this->isAlive = true;
}

bool Cell::GetAlive()
{
	return isAlive;
}
