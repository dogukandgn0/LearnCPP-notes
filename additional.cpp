#include <iostream>
#include "additional.h"

namespace DogukanMath { //using namespace is necessary when working with a group

    double divide(double x, double y) {
        return x / y;
    }

    int multiply(int x, int y) {
        return x * y;
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

	int add(int x, int y) { //x and y are local variables
		int z = x + y; //z is also a local variable //int z{x + y}; is also an another way of this statement
		return z;
	} //variables are destroyed here

}

void PrintString(std::string a) {
	std::cout << a << std::endl;
}

