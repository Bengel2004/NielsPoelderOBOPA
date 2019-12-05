// Opdracht 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// dit is handiger dan elke keer een biggest int en een biggest string class aan te maken. Bijv: std::string Biggest() int Biggest
// hiermee bespaar je dus code en ruimte, en usability

template<typename T>
T biggest(T a, T b) {
	if (a > b) return a;
	return b;
}

int main()
{
	std::cout << "Hello World!\n";
	biggest<int>(3, 6);
	biggest<std::string>("Kiwi", "Limoengroen");

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
