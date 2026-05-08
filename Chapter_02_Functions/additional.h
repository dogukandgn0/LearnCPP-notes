#pragma once
#include <iostream>

namespace DogukanMath {  //using namespace is necessary when working with a group
	double divide(double x, double y);
	int multiply(int x, int y);
	int isEven(int x);
	int getValue();
	int inputValueEven();
	int add(int x, int y);
}

void PrintString(std::string a);
//you can create 2 functions with same names but their parameters should be different