#pragma once
#include <string>
class Student
{
public:
	Student();
	Student(std::string _naam);
	~Student();
	std::string getName();

private:
	std::string naam;
};

