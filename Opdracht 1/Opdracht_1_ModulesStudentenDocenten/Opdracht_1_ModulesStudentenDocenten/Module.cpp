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
	std::cout << "Docent " << _docent.getName() << " toegevoegd aan " << naam << "." << std::endl << std::endl;
	docent = _docent;
}

void Module::addStudent(std::vector<Student> _student)
{
	std::cout << _student.size() << " Studenten toegevoegd aan " << naam << "." << std::endl;
	for (int i = 0; i < _student.size(); i++) {
		studenten.push_back(_student[i]);
	}
}

void Module::addStudent(Student _student)
{
	std::cout << "Student " << _student.getName() << " toegevoegd aan " << naam << "." << std::endl;
	studenten.push_back(_student);
}

void Module::removeStudent()
{
	std::cout << "Alle studenten verwijderd." << std::endl;
	studenten.clear();
}

void Module::getStudents()
{
	std::cout << "Studenten: " << std::endl;
	int i;;
	if (studenten.size() > 0) {
		for (i = 0; i < studenten.size(); i++)
		{
			std::cout << "Naam: " << studenten[i].getName() << std::endl;
			std::cout << "EC: " << studenten[i].getEc() << std::endl;
			std::cout << std::endl;
		}
	}
	else {
		std::cout << "Er zijn geen studenten in deze module gevonden";
	}
}

void Module::getDocent()
{
	std::cout << "Docent: " << docent.getName() << std::endl;
}

void Module::getModule()
{
	std::cout << "Module: " << naam << std::endl;
	getDocent();
	getStudents();
}
