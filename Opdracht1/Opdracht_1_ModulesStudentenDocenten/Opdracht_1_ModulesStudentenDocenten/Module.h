#pragma once

#include <string>
#include <vector>
#include "Docent.h"
#include "Student.h"
class Module
{
public:
	Module(std::string _naam, float _ec);
	~Module();
	void setDocent(Docent _docent);
	void addStudent(Student _student);
	void removeStudent(Student _student);
	void getStudents();
	void getDocent();
	void getModule();

private:
	Docent docent;
	std::vector<Student> studenten;
	std::string naam;
	float ec;
};

