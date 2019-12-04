#pragma once
#include <string>
class Transactie
{
public:
	Transactie();
	Transactie(float _amount, std::string _date);
	void setType(std::string _type);
	void setDate(std::string _date);
	float getAmount();
	std::string type;
	float amount;
	std::string date;

};

