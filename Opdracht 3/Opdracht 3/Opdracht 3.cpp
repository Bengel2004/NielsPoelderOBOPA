// Opdracht 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Transactie.h"
#include "Bankrekening.h"
int main()
{
	Bankrekening rekening1 = Bankrekening(100);
	rekening1.showSaldo();
	Transactie transactie1 = Transactie(1200, "04/12/2019");
	rekening1 + transactie1;
	Transactie transactie2 = Transactie(300, "04/12/2019");
	rekening1 - transactie2;
	Transactie transactie3 = Transactie(99, "04/12/2019");
	rekening1 + transactie3;


	std::cout << rekening1;

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
