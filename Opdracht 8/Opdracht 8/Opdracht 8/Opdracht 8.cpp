#include <iostream>

#include <vector>
#include<algorithm>
#include<functional>
int main() {
	std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
	// 1) de vector in 2 nieuwe vectoren te splitsen: 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na
	{
		std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
		//std::toupper
		// 2) alle elementen UPPERCASE te maken.
	}
	{
		std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
		sort(colours.begin(), colours.end());
		colours.erase(unique(colours.begin(), colours.end()), colours.end());

		for (int i = 0; i < colours.size(); i++)
			std::cout << colours.at(i) << ' ';
		// 3) alle dubbele te verwijderen
	}

	std::vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
	// 1) alle negatieve elementen te verwijderen
	// 2) voor alle elementen te bepalen of ze even of oneven zijn
	// 3) de som, het gemiddelde, en het product van alle getallen te berekenen

	return 0;
}