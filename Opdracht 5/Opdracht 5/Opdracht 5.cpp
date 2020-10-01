#include <iostream>
#include "ConcurrentVector.h"

void addVector() {
	ConcurrentVector vector;
	vector.safePushBack();
}

int main()
{
	// create threads
	std::thread t1(addVector);
	std::thread t2(addVector);
	std::thread t3(addVector);
	// join threads
	t1.join();
	t2.join();
	t3.join();

	return 0;
}