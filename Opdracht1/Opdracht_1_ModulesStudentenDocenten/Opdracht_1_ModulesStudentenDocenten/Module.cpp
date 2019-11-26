#include "Module.h"
#include <iostream>
Module::Module(std::string _naam, float _ec) : naam(_naam), ec(_ec)
{
}

Module::~Module()
{
}

void Module::setDocent(Docent _docent) 
{
	docent = _docent;
}

void Module::addStudent(Student _student)
{
	studenten.push_back(_student);
}

void Module::removeStudent(Student _student)
{
	studenten.clear();
}

void Module::getStudents()
{
	std::cout << "Studenten: ";
	int i;;
	if (studenten.size() > 0) {
		for (i = 0; i < studenten.size(); i++)
		{
			std::cout << studenten[i].getName();
		}
	}
	else {
		std::cout << "Er zijn geen studenten in deze module gevonden";
	}
}

void Module::getDocent()
{
	std::cout << "Docent: " << docent.getName();
}

void Module::getModule()
{
	std::cout << "Module: " << naam;
}
