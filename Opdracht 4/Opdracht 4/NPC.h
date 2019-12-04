#pragma once
#include <string>
class NPC
{
public:
	//NPC();
	//NPC(std::string _name);

	virtual void Render() = 0;
	virtual ~NPC() { }

private:
	std::string name;
};

