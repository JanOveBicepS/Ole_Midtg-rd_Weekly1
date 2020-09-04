#include <iostream>
#include <string>

int main() {
	int age;
	std::cout << "How old are you??\n";
	std::cin >> age;
	
	if (age < 20) {
		std::cout << "You are young";
	}
	if (age >= 20 && age < 41) {
		std::cout << "You are a grown up";
	}
	if (age >= 41 && age < 61) {
		std::cout << "You are old";
	}
	if (age > 60) {
		std::cout << "You ARE really old";
	}

}