#include <iostream>

int main() {
	float length;

	std::cout << "Enter your length in centimenters: ";
	std::cin >> length;

	if (length < 0)
		std::cerr << "Negative input!\n";
	else
		std::cout << "Your length in inches: " << length / 2.54 << "\n";

	return 0;
}