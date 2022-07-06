#include <iostream>
#include <string>

void celstofahr(double a) {
	std::cout << "\n" << a << " degrees celsius is " << (a * 1.8) + 32 << " in degrees fahrenheit.\n\n";
	system("pause");
};

void fahrtocels(double a) {
	std::cout << "\n" << a << " degrees fahrenheit is " << (a - 32) / 1.8 << " in degrees celsius.\n\n";
	system("pause");
};

int main() {

	char choice;
	std::cout << "This is a temperature converter. " << std::endl;
	std::cout << "\n1. Convert celsius to fahrenheit: " << std::endl;
	std::cout << "\n2. Convert fahrenheit to celsius: \n" << std::endl;
	std::cout << "Choice (1 or 2): ";
	std::cin >> choice;

	switch (choice) {
	case '1':
		double temperatureOne;
		std::cout << "\nEnter temperature in celsius: " << std::endl;
		std::cin >> temperatureOne;
		celstofahr(temperatureOne);
		break;
	case '2':
		double temperatureTwo;
		std::cout << "\nEnter temperature in fahrenheit: " << std::endl;
		std::cin >> temperatureTwo;
		fahrtocels(temperatureTwo);
	default:
		std::cout << "\nPlease choose a valid option!";
	};

	return 0;
}