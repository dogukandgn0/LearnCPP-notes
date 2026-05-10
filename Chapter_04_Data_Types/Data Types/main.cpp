#include <cstdint> // for fixed-width integers
#include <cstddef> // you need this to use size_t
#include <iomanip> // to use setprecision
#include <iostream>
//#define DOGUKAN_NUMBERS //manuel check
//#define DOGUKAN_BOOLEAN
//#define DOGUKAN_CHAR
//#define DOGUKAN_ESCAPE_S

//functions
bool isEqual(int x, int y);
void print(double x);
void ASCIINumber(char x);
//functions

int main() {
#ifdef DOGUKAN_NUMBERS
	std::cout << (double) 13 / 5 << std::endl; //one way to show fractions
	std::cout << (double) -13 / 5 << std::endl; //minus works the same way
	//try to avoid using unsigned integers
	unsigned short x = 65535; //at the limit
	std::cout << x << std::endl;
	x = 65536;
	std::cout << x << std::endl;
	x = 65537;
	std::cout << x << std::endl;

	//avoid using short and long integers
	int y = -2147483648; // int range: (-2147483648) - (2147483647)
	std::cout << y << std::endl;

	//you can manipulate variable's bits to make sure it's crossplatform safe
	std::int32_t z = 2147483647; //32bit integer incorrect value printed
	z = z + 1;
	std::cout << z << std::endl; 
	
	std::int64_t a = 2147483647; //64bit integer correct value printed
	a = a + 1;
	std::cout << a << std::endl;
	std::size_t s = sizeof(y);
	std::cout << "Size of integer y is: " << s << '\n';

	double biggerThanOne = 3.45e3;
	double smallerThanOne = 345e-4;
	std::cout << "Scientific Numbers: " << biggerThanOne << " and " << smallerThanOne << std::endl;

	//use double instead of float when memory is not important
	//use f at the end of the float value** -letter f won't be shown
	float t = 3.345f;
	std::cout << "float number is: " << t << std::endl;

	//never assume that double variables are equal - like (double)x==(double)y
	double u = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	std::cout << std::setprecision(17);
	std::cout << "u: " << u << " (should be 1 technically) " <<std::endl;

	double zero = 0.0;
	double positInf = 5.0 / zero;
	double negInf = -5.0 / zero;
	double naf = 0.0 / zero;

	//you should avoid dividing with zero
	std::cout << "Infinite and Not a Number Test: " << positInf << "," << negInf << "," << naf << std::endl;
	
	print(5.9); //double to int
	std::cout << "" << '\n';

#endif

#ifdef DOGUKAN_BOOLEAN
	bool d1 = true;
	bool d2 = 0;
	bool d3 = 4; //any other integer than 0 converts to true
	std::cout << d1 << "," << !d1 << std::endl; // ! => means opposite
	std::cout << std::boolalpha; //to show words instead of 1 and 0
	std::cout << d2 << "," << !d2 << std::endl;
	std::cout << std::noboolalpha;//to close boolalpha
	std::cout << "integer 4 => " << d3 << std::endl;
	int x1 = 2; int x2 = 2;
	std::cout << std::boolalpha;
	std::cout << "x1: " << x1 << " and " << " x2: " << x2 << " are equal: " << isEqual(x1, x2) << std::endl;
	std::cout << "" << '\n';
	

#endif
#ifdef DOGUKAN_CHAR
	//defining chars with integers are not preferred
	char c1 = '!';
	char c2 = 64;
	char c3;
	std::cout << "Enter a char: ";
	std::cin >> c3;
	std::cout << "You entered: " << c3 << std::endl;
	std::cin.ignore(); //buffer remover
	//will get skipped if the user entered more than one char
	//you can use cin.get() to extract space char -try 'a b' next time
	std::cout << "Enter a char: ";
	std::cin.get(c3);
	std::cout << "You entered: " << c3 << std::endl;
	std::cin.ignore();
	
	ASCIINumber(c3);
	std::cout << "" << '\n';

#endif
#ifdef DOGUKAN_ESCAPE_S

	std::cout << "TEST1"<< '\n';
	std::cout << "TEST2\n";
	std::cout << "TEST3" << std::endl;
	std::cout << "TEST4\tand\tTEST5" << std::endl;
	std::cout << "single quote: \'" << '\n';
	std::cout << "double quote: \"" << '\n';
	std::cout << "backslash: \\" << '\n';
	//use '\n' from now on

#endif
	
	return 0;
}

bool isEqual(int x, int y) {
	return x == y;
}

void print(double x) {
	std::cout << x << " converts from double to int: " << static_cast<int>(x) << '\n';
}

void ASCIINumber(char x) {
	std::cout << x << "'s ASCII number is: " << static_cast<int>(x) << '\n';
}