#include <iostream>

#define LOG(x) std::cout << x << std::endl;


int main()

{

	int var = 8;

	int* ptr = &var;

	LOG(var);

	std::cin.get();
}