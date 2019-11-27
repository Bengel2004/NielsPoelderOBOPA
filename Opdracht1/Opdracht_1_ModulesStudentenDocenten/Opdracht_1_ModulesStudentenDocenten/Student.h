#pragma once
#include <string>
#include <vector>
class Student
{
public:
	Student();
	Student(std::string _naam);
	~Student();
	std::string getName();
	void addEc(int _ec);
	int getEc();

private:
	std::string naam = "(Onbekend)";
	int ec = 0;
};

