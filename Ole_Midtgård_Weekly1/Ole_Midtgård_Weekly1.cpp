//Ask for full name, initial, age, phone number and date of birth;
#include <iostream>
#include <string>
#include <limits>



int main() {

	std::cout << "What is your full name?";
	std::string name;
	std::getline(std::cin, name);


	std::cout << name << ", What is the initial to your first name?\n";
	char initial{};
    std::cin >> initial;


	std::cout << name << ", What is your age?\n";
	int age{};
	std::cin >> age;


	std::cout << name << ", What is your phone number?\n";
	int phone{};
	std::cin >> phone;


	std::cout << name << ", What is your date of birth?\n";
	std::string birth{};
	std::cin >> birth;

	std::cout << "Your name " << name << "\n";

	std::cout << "Your initial " << initial << "\n";

	std::cout << "Your age " << age << "\n";

	std::cout << "Your phone number " << phone << "\n";

	std::cout << "Your birthday " << birth << "\n";



	return 0;
}