#include <iostream>
#include <algorithm>
#include <functional>
#include <set> 
#include <numeric>
#include <vector>



template<typename T>
void printVectors(std::vector<T> list) {
	for (int i = 0; i < list.size(); i++)
	{
		std::cout << list[i] << " ";
	}
	std::cout << std::endl;
}

std::vector<std::string> splitVector(std::vector<std::string> list, std::string word) {
	std::sort(list.begin(), list.end());

	bool split = false;

	std::vector<std::string> tempList1;
	std::vector<std::string> tempList2;

	for (int i = 0; i < list.size(); i++)
	{
		if (list[i] == word) {
			split = true;
		}

		if (!split) {
			tempList1.push_back(list[i]);
		}
		else {
			tempList2.push_back(list[i]);
		}
	}

	return tempList2;
}

std::vector<std::string> Uppercase(std::vector<std::string> list) {
	std::vector<std::string> tempList;

	int toupper(int c);

	for (int i = 0; i < list.size(); i++)
	{
		std::string word = list[i];

		std::transform(word.begin(), word.end(), word.begin(), ::toupper);

		tempList.push_back(word);
	}

	return tempList;

}

std::vector<std::string> removeDuplicates(std::vector<std::string> list) {
	std::set<std::string> s;

	for (int i = 0; i < list.size(); i++)
	{
		s.insert(list[i]);
	}

	std::vector<std::string> undoubleList(s.begin(), s.end());

	return undoubleList;
}

std::vector<double> removeNegative(std::vector<double> list) {
	std::vector<double> tempList;

	for (int i = 0; i < list.size(); i++)
	{
		if (list[i] > 0) {
			tempList.push_back(list[i]);
		}
	}

	return tempList;
}

std::vector<double> checkEven(std::vector<double> list) {
	std::vector<double> tempList;

	for (int i = 0; i < list.size(); i++)
	{
		int x = (int)list[i];

		if (x % 2 == 0) {
			tempList.push_back(list[i]);
		}
	}

	return tempList;
}

std::vector<double> Sum(std::vector<double> list) {
	std::vector<double> tempList;

	double sum = std::accumulate(list.begin(), list.end(), 0);
	tempList.push_back(sum);

	double avg = std::accumulate(list.begin(), list.end(), 0.0) / list.size();
	tempList.push_back(avg);

	double prod = std::accumulate(list.begin(), list.end(), 1, std::multiplies<double>());
	tempList.push_back(prod);

	return tempList;
}

int main() {
	std::vector<std::string> colours{ "red", "green", "white", "blue", "orange", "green", "orange", "black", "purple" };
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)

	// 1) de vector in 2 nieuwe vectoren te splitsen: 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na
	// 2) alle elementen UPPERCASE te maken.
	// 3) alle dubbele te verwijderen
	printVectors(splitVector(colours, "purple"));
	printVectors(Uppercase(colours));
	printVectors(removeDuplicates(colours));


	std::vector<double> numbers{ 10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635 };
	// gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
	// 1) alle negatieve elementen te verwijderen
	// 2) voor alle elementen te bepalen of ze even of oneven zijn
	// 3) de som, het gemiddelde, en het product van alle getallen te berekenen
	printVectors(removeNegative(numbers));
	printVectors(checkEven(numbers));
	printVectors(Sum(numbers));

	return 0;
}