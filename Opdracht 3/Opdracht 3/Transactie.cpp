#include "Transactie.h"
#include <iostream>
Transactie::Transactie()
{
}

Transactie::Transactie(float _amount, std::string _date) : amount(_amount), date(_date)
{
}



void Transactie::setType(std::string _type)
{
	type = _type;
}

void Transactie::setDate(std::string _date)
{
	date = _date;
}

float Transactie::getAmount()
{
	return amount;
}

