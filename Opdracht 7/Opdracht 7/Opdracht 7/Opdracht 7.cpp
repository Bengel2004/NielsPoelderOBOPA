#include <iostream>
#include <algorithm>
#include <vector>
/* losse functies per type
int biggest(int a, int b) {
	if (a > b) return a;
	return b;
}
float biggest(float a, float b) {
	if (a > b) return a;
	return b;
}
string biggest(string a, string b) {
	if (a > b) return a;
	return b;
}
*/

// template functie
template<typename T>
T templateSort(T* _array) {
	return std::sort(_array, _array.size);;
}


int main() {

	int number[] = { 1, 6, 2, 10 };
	std::cout << templateSort<int>(number) << std::endl;

	std::cout.precision(20);

	for (std::string s : {"aap", "noot", "mies", "boom", "roos", "vuur"}) {
	//	std::cout << biggest<std::string>(s) << std::endl;
	}

	return 0;
}
