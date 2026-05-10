#include <iostream>
#include <string>
//#define CHAP_FIVE
//#define CHAP_SIX
//#define CHAP_SEVEN

std::string getQuantityPhrase(int a);
std::string getApplesPluralized(int a);
int accumulate(int x);

int main() {
	
#ifdef CHAP_FIVE
	const std::string name = "Yusuf Dogukan Dogan"; //you have to define constants at the same time you identify
	int classCapacity;
	int askedNumber;
	std::string className;
	std::cout << "What is the capacity for this class? : ";
	std::cin >> classCapacity;
	std::cin.ignore(); //buffer cleaner
	std::cout << "What is the name of this class? : ";
	std::getline(std::cin, className);
	std::cout << "How many students do you want to enroll to this class? : ";
	std::cin >> askedNumber;
	std::cout << "Class details are gathered..." << '\n';
	
	if (askedNumber <= classCapacity) {
		std::cout << "Enrollment is sucessfull, remaining capacity is: " << classCapacity - askedNumber << '\n';
	}
	else {
		std::cout << "Enrollment failed! Capacity is reached." << '\n';
	}
#endif
#ifdef CHAP_SIX
	const int maryApples{ 3 };
	std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

	std::cout << "How many apples do you have? ";
	int numApples{};
	std::cin >> numApples;

	std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";
#endif
#ifdef CHAP_SEVEN
	std::cout << accumulate(4) << '\n'; // prints 4
	std::cout << accumulate(3) << '\n'; // prints 7
	std::cout << accumulate(2) << '\n'; // prints 9
	std::cout << accumulate(1) << '\n'; // prints 10
#endif
	return 0;
}

std::string getQuantityPhrase(int a) {
	if (a < 0) {
		return "negative";
	}
	else if (a == 0) {
		return "no";
	}
	else if (a == 1) {
		return "single";
	}
	else if (a == 2) {
		return "a couple of";
	}
	else if (a == 3) {
		return "few";
	}
	else {
		return "many";
	}
}

std::string getApplesPluralized(int a) {
	return (a == 1) ? "apple" : "apples";
} 

int accumulate(int x) {
	static int sum = 0;
	sum += x;
	return sum;
}