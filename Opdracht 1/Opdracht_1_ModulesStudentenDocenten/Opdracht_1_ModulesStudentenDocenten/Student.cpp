#include "Student.h"

Student::Student()
{
}

Student::Student(std::string _naam) : naam(_naam)
{
}

Student::~Student()
{
}

std::string Student::getName()
{
	return naam;
}

void Student::addEc(int _ec)
{
	ec = ec + _ec;
}

int Student::getEc()
{
	return ec;
}

