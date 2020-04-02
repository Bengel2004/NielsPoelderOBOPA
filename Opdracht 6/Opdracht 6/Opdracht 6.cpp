#include <queue>
#include <thread>
#include <iostream>
#include <condition_variable>

std::condition_variable flag;
std::mutex mutex;

int counter = 0;
bool done = false;
std::queue<int> goods;

void producer() {
	
	std::unique_lock<std::mutex> lock(mutex);
	for (int i = 0; i < 500; ++i) {
		goods.push(i);
		counter++;
	}
	flag.wait(lock);
	
	done = true;
}

void consumer() {
	std::this_thread::sleep_for(std::chrono::seconds(4));
	while (!done) {
		while (!goods.empty()) {
			goods.pop();
			counter--;
		}
		flag.notify_one();
	}
}

int main() {
	std::thread producerThread(producer);
	std::thread consumerThread(consumer);

	producerThread.join();
	consumerThread.join();

	std::cout << "Net: " << counter << " " << goods.size() << " " << std::endl;
}