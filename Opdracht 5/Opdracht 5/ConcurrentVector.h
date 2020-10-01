
#pragma once
#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
class ConcurrentVector
{
public:
	std::vector<int> vec;
	std::mutex mutex;

	void safePushBack()
	{
		try
		{
			int amount = 0;
			for (int i = 0; i < 100; i++)
			{
				mutex.lock();
				amount++;
				vec.push_back(amount);
				mutex.unlock();
			}
		}
		catch (const std::exception & error)
		{
			std::cout << "ERROR: " << error.what() << std::endl;
		}
	}
};

