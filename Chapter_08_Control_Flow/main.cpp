#include <iostream>
#include <cstdlib>
//#define DOGUKAN_LOOPS
bool age(int age);


int main() {
#ifdef DOGUKAN_LOOPS
	int a = 2;
	if (a == 2)
		std::cout << "statement worked." << '\n'; //avoid using this method always use blocks
	
	if (a == 2) {
		int x = 5;
	}
	//std::cout << x << '\n'; //this will cause error because x is not in the scope

	if (a == 2) {
		if (a == 2) { //you can use nested ifs
			std::cout << "Works like Java!" << '\n';
		}
	}

	const double pi = 3.14;
	if (pi == 3.15) {
		std::cout << "It works!" << '\n';
	}
	
	int u = 1;
	switch (u) {
	case 1:
		std::cout << "One";
		break;
	case 2:
		std::cout << "Two";
		break;
	case 3:
		std::cout << "Three";
		break;
	default:
		std::cout << "Unknown";
		break;
	}

	std::cout << '\n';

	char c = 'c';
	switch (c) {
	case 'a':
	case 'b':
	case 'c': {
		int temp = 3; //you can only initialıze variables inside the brackets
		std::cout << temp << '\n';
	}
	case 'd':
		std::cout << "another way of using swtich" << '\n';
	default:
		break;
	}

	//goto statements
	int positive = 0;
	tryAgain:
	std::cout << "Please enter a positive number: ";
	std::cin >> positive;
	if (positive <= 0) {
		goto tryAgain;
	}
	
	int counter = 50;
	while (counter >= 0) {
		if (counter % 10 == 0) {
			std::cout << counter << '\n';
			counter--;
		}
		else {
			counter--;
		}
	}

	//do-whıle loops
	int grade = 0;
	do {
		std::cout << "Please enter your grade accordingly: \n";
		std::cout << "1 - Very Good (85-100) \n";
		std::cout << "2 - Good (70-85) \n";
		std::cout << "3 - Average (50-70) \n";
		std::cout << "4 - Bad (0-50)\n";
		std::cin >> grade;
		if (grade <= 0 || grade >= 5) {
			std::cout << "Invalid input, try again.\n";
			std::cin.ignore();
		}
	} while (grade <= 0 || grade >= 5);
		std::cout << "Your selection is: " << grade << '\n';


		for (int i = 0; i < 10; ++i) {
			std::cout << i << '\n';
	}
		for (int x = 0, y = 10; x < 10; ++x,--y) { //2 statement for loop
			std::cout << x << ' ' << y << '\n';
		}
		tryAge:
		int age1 = 0;
		std::cout << "Enter your age: \n";
		std::cin >> age1;
		std::cin.ignore();
		std::cout << "I am " << age << "years old. Is that correct?\n";
		if (age(age1)) {
			std::cout << "Correct!\n";
		}
		else {
			std::cout << "False! Try again.\n";
			goto tryAge;
		}
#endif

		int sum = 0;
		for (int i = 0; i < 10; ++i) {
			int inputValue = 0;
			std::cout << "Enter a number (enter 0 to exit): ";
			std::cin >> inputValue;
			if (inputValue < 0) {
				std::cout << "You can't enter negative numbers.\n";
				continue;
			}
			if (inputValue == 0) {
				std::cout << "0 has entered. System shutting down!\n";
				break;
			}
				sum += inputValue;
		}
		std::cout << "sum: " << sum << '\n';

		int password = 0;
		std::cout << "Please set your password: ";
		std::cin >> password;
		std::cin.ignore();
		std::cout << "\n";
		int passwordTry = 0;
		for (int i = 0; i < 3; i++) {
			std::cout << "Please enter your password: ";
			std::cin >> passwordTry;
			std::cin.ignore();
			std::cout << '\n';
			if (passwordTry == password) {
				std::cout << "Password has entered successfully!\n";
				break;
			}
			if (i == 2 && password != passwordTry) {
				std::cout << "Security Breach! System shutting down!" << std::endl;
				std::exit(1);
			} if (password != passwordTry) {
				std::cout << "incorrect password, try again.\n";
				continue;
			}
		}

	
	return 0;
}

bool age(int age) {
	if (age == 24) {
		return 1;
	}
	else {
		return 0;
	}
}