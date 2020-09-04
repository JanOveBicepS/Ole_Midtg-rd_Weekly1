#include <iostream>
#include <string>

int main() {
	std::cout << "What is your name and age?\n";
	std::string name;
	int age;
	std::cin >> name;
	std::cin >> age;

	std::cout << "Do you like coffee? Y/N = 1/2\n";
	int coffee;
	std::cin >> coffee;

	std::cout << "Your name is: " << name << "\n";
	std::cout << "You are " << age << " years old\n";


	
	if (coffee <= 1){
		std::cout << "Seems you like coffee\n";
		}
	if  (coffee >= 2) {
		std::cout << "Oh you don't like coffee";
	}






}