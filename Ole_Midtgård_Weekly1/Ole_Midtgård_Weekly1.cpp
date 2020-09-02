//Ask for full name, initial, age, phone number and date of birth;
#include <iostream>

int name;
int initial;
int age;
int phone;
int birth;

int main() {
	std::cout << "What is your full name?";
	std::cin >> name;
	std::cout << "What is the initial to your first name?";
    std::cin >> initial;
	std::cout << "What is your age?"
		std::cin >> age;
	std::cout << "What is your phone number?"
		std::cin >> phone;
	std::cout << "What is your date of birth?"
		std::cin >> birth;
}