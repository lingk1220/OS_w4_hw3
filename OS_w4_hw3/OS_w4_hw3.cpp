#include <thread>
#include <iostream>
int main() {
	std::chrono::nanoseconds sum_ns;
	auto t0 = std::chrono::high_resolution_clock::now();
	auto t1 = std::chrono::high_resolution_clock::now();
	sum_ns = t0 - t0;
	std::chrono::duration< double > s;
	std::chrono::nanoseconds ns;
	for (int i = 0; i <= 100; i++) {
		t0 = std::chrono::high_resolution_clock::now();
		std::this_thread::yield();
		t1 = std::chrono::high_resolution_clock::now();
		s = t1 - t0;
		ns = std::chrono::duration_cast<std::chrono::nanoseconds>(s);

		if (i != 0) sum_ns += ns;

	}


	std::cout << sum_ns.count() / 100;
	 
	//std::chrono::nanoseconds d = std::chrono::duration_cast<std::chrono::nanoseconds>(fs);
	
	//std::cout << fs.count() << "s\n";
}