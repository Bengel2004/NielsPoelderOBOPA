#include "Docent.h"

Docent::Docent()
{
}

Docent::Docent(std::string _naam) : naam(_naam)
{
}

Docent::~Docent()
{
}

std::string Docent::getName()
{
	return naam;
}
