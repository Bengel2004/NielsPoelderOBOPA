// Opdracht_1_ModulesStudentenDocenten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Docent.h"
#include "Module.h"
#include "Student.h"

int main()
{
    std::cout << "Hello World!\n";

	Module module1("OBOPB", 2);
	Module module2("OPOPA", 2);
	Module module3("Interface Design", 2);

	Docent docent("Edwin");
	Docent docent2("Dimme");

	Student student1("Niels");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
