#include <iostream>

void Calculator();
void heightOfBall(double height);
double distanceTaken(double a);

int main() {
	Calculator();
	double height = 100.0;
	heightOfBall(height);

	return 0;
}

void Calculator() {
	double x;
	double y;
	char a;
	std::cout << "Please enter a number with decimals: ";
	std::cin >> x;

	std::cout << "Please enter the second number with decimals: ";
	std::cin >> y;

	std::cout << "Please enter the equation symbol from (+,-,*,/): ";
	std::cin >> a;
	std::cin.ignore();

	double result = 0.0;

	if (a == '+') {
		result = x + y;
	}
	else if (a == '-') {
		result = x - y;
	}
	else if (a == '*') {
		result = x * y;
	}
	else if (a == '/') {
		result = x / y;
	}

	std::cout << "Equation user typed: " << x << " " << a << " " <<  y << " = " << result << '\n';
}

double distanceTaken(double second) {
	double gravity_constant = 9.81;
	return gravity_constant * second * second / 2;
}


void heightOfBall(double height) { //could be much more easier if I know loops
	std::cout << "At 0 seconds, the ball is at height:" << height << " meters." << '\n';
	std::cout << "At 1 seconds, the ball is at height:" << height - distanceTaken(1) << " meters." << '\n';
	std::cout << "At 2 seconds, the ball is at height:" << height - distanceTaken(2) << " meters." << '\n';
	std::cout << "At 3 seconds, the ball is at height:" << height - distanceTaken(3) << " meters." << '\n';
	std::cout << "At 4 seconds, the ball is at height:" << height - distanceTaken(4) << " meters." << '\n';
	std::cout << "At 5 seconds, the ball is on the ground" << '\n';
}