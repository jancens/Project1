#include <iostream>
#include <string>

int main() {
	
	std::cout << "Hello world!\n\n";

	std::string input;

	std::getline(std::cin, input);

	std::cout << std::endl << input << std::endl;
	
	return 0;
}