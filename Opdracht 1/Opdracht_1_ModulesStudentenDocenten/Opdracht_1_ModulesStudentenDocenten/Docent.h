#pragma once
#include <string>
class Docent
{
public:
	Docent();
	Docent(std::string _naam);
	~Docent();
	std::string getName();

private:
	std::string naam;
};

