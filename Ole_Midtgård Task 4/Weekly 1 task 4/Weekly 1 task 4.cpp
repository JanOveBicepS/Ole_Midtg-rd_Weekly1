#include <iostream>
#include <string>

int main() {
	int drink;
	std::cout << "What is your favorit drink between these three:\n" << "1. Coffee\n" << "2. Tea\n" << "3. Coca Cola\n";
	std::cin >> drink;

	int a = 1;
	int b = 2;
	int c = 3;

	if (drink == a) {
		std::cout << "Coffee is delicious";
	}
	if (drink == b) {
		std::cout << "Tea gives peace of mind";

	}
	if (drink == c) {
		std::cout << "Coke will give you a white smile";
	}
}