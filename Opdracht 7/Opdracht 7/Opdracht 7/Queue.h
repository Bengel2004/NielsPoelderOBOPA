#pragma once

#include <vector>
#include <iostream>

using namespace std;

template<typename T>
class Queue {
public:
	Queue() {
	}

	void add(T element) {
		elements.push_back(element);
	}

	void dump() {
		for (int i = 0; i < elements.size(); i++) {
			std::cout << elements[i] << std::endl;
		}
	}

private:
	vector<T> elements;
};

