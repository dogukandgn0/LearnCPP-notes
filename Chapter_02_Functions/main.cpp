#include "additional.h" //don't include .cpp files
#include <string> 		//include order is important //1-paired header file /2-other headers(like 1st statement) /3-3rd party libraries /4-standart library headers (like iostream)
#include <iostream>		
#define DOGUKAN_MATH //manuel check for math processes

std::string doPrint(std::string a) { //**functions can only return a single value
	return a;
}

std::string doPrintAgain(std::string a) {
	return doPrint(a);
}

void noLongerNeeded(int /*value*/) { //there used to be a function that was using the value
	//from Google C++ style guide
}

double average(double x, double y, double z);

int main() {
#if 1 //allowing to process what's inside
	std::cout << doPrintAgain("Hi I am Dogukan") << std::endl; //temporary string same as every return value
	PrintString("Hi I am Dogukan 2");
#endif
#ifdef DOGUKAN_MATH //checking if the math folder is defined
	
	if (DogukanMath::isEven(2)) {
		std::cout << "2 is even number\n";
	}

	if (DogukanMath::inputValueEven()) {
		std::cout << "Picked number is even\n";
	}
	else {
		std::cout << "Picked number is not even\n";
	}

	std::cout << "2+3: " << DogukanMath::add(2, 3) << std::endl;

	std::cout << "2*3: " << DogukanMath::multiply(2,3) << std::endl;

	std::cout << "5/4: " << DogukanMath::divide(5.0, 4.0) << std::endl;

	#if 0 //to not execute statements
		std::cout << "average of 3,5 and 9: " << average(3.0, 5.0, 9.0) << std::endl;
	#endif
#endif
#ifndef DOGUKAN_MATH
	std::cout << "Math path is not included" << std::endl;
#endif

	return 0;
}

double average(double x, double y, double z) {
	double a = (x + y + z) / 3;
	return a;
}
