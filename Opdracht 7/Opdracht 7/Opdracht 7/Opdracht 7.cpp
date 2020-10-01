#include <iostream>
#include <algorithm>
#include <vector>
#include "Queue.h"
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
template<class T>
void templateSort(T arr[], int size)
{}

template<>
void templateSort(float arr[], int size) {
	std::sort(arr, arr + size, std::less<float>());
	// sorts array to lowest value and counts to highest
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "Float Array:" << std::endl;
}

template<>
void templateSort(std::string arr[], int size) {
	std::sort(arr, arr + size);
	// sorta array from shortest words to longest
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "String Array:" << std::endl;
}

int main()
{
	float nummertjes[3] = { 0.1, -12, 500 };
	templateSort<float>(nummertjes, 3);
	std::string textjes[6] = { "aap", "noot", "mies", "boom", "roos", "vuurrr" };
	templateSort(textjes, 6);
	Queue<float> floatQueue(nummertjes);
	floatQueue.put(20);
	floatQueue.printQueue();
	std::cout << "Array Size: " << floatQueue.size << std::endl;
	std::cout << "First element: " << floatQueue.getFirst() << std::endl;

	return 0;
}
