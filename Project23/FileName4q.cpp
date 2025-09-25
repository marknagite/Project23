#include <iostream>
int main() {
	int a;
	std::cout << "Enter temp in celcium: ";
	std::cin >> a;
	double b = a * 9 / 5 + 32;
	std::cout << b << " is your temp in fahrenheit";
	return 0;
}