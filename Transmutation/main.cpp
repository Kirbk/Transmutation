#include <iostream>
#include <thread>
#include <chrono>

unsigned char x = 0;
int y = 500;
int z = 1;

int main() {
	using namespace std;

	while (true) {
		this_thread::sleep_for(chrono::milliseconds(y));
		cout << (int)x << " : " << static_cast<void *>(&x) << " : Speed: " << y << " milliseconds (" << &y << ")" << " : " << z << " wrap" << endl;
		
		if (x == 255) {
			z++;
		}
		
		x++;
	}

	return 0;
}