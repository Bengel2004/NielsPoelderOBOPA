// Opdracht_1_ModulesStudentenDocenten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Docent.h"
#include "Module.h"
#include "Student.h"

int main()
{
    std::cout << "Hello World!\n";

	Module module1("Game development", 4);
	Module module2("OPOPA", 2);
	Module module3("Interface Design", 2);

	Docent docent1("Edwin");
	Docent docent2("Dimme");
	Docent docent3("Valentijn");


	std::vector<Student> studenten;
	Student student1("Niels");
	Student student2("Kevin");
	Student student3("Geert");
	Student student4("Pietje");
	Student student5("Janus");
	Student student6("Gerda");
	Student student7("Geertje");
	Student student8("Triesje");
	Student student9("Merel");
	Student student10("Kees");
	

	studenten.push_back(student1);
	studenten.push_back(student2);
	studenten.push_back(student3);
	studenten.push_back(student4);
	studenten.push_back(student5);
	studenten.push_back(student6);
	studenten.push_back(student7);
	studenten.push_back(student8);
	studenten.push_back(student9);
	studenten.push_back(student10);


	module1.setDocent(docent1);
	module1.addStudent(studenten);
	module1.getModule();
	module1.removeStudent();
	module1.getModule();

	module2.setDocent(docent2);
	module2.addStudent(studenten);
	module2.getModule();
	module2.removeStudent();
	module2.getModule();

	module3.setDocent(docent3);
	module3.addStudent(studenten);
	module3.getModule();
	module3.removeStudent();
	module3.getModule();
}
