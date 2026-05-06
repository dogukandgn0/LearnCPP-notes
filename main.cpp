#include <iostream>
#include <string>

std::string doPrint(std::string a) { //**functions can only return a single value
	return a;
}

std::string doPrintAgain(std::string a) {
	return doPrint(a);
}

int isEven(int x) { //use function variable when something need to be passed in the function
	if (x % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int getValue() { //use local variable when there is no need to pass a variable in the function
	std::cout << "Enter an integer" << std::endl;
	int x;
	std::cin >> x;
	return x;
}

int inputValueEven() {
	return isEven(getValue()); //nested function
}

void noLongerNeeded(int /*value*/) { //there used to be a function that was using the value
	//from Google C++ style guide
}

int add(int x, int y) { //x and y are local variables
	int z = x + y; //z is also a local variable //int z{x + y}; is also an another way of this statement
	return z;
} //variables are destroyed here

int main() {

	std::cout << doPrintAgain("Selam ben Dogukan") << std::endl; //temporary string same as every return value
	if (isEven(2)) {
		std::cout << "2 is even number\n";
	}

	if (inputValueEven()) {
		std::cout << "Picked number is even\n";
	}
	else {
		std::cout << "Picked number is not even\n";
	}

	std::cout << "2+3: " << add(2, 3) << std::endl;

	return 0;
}