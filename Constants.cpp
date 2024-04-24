#include <iostream>

int main()

{

	const double PI = 3.1415;

	double radius = 10;

	double circuference = 2 * PI * radius;


	const int LIGHT_SPEED = 299892458;

	const int WIDTH = 1920;

	const int HEIGHT = 1080;


	std::cout << circuference << "cm" << std::endl;

	std::cout << "The speed of light is " << LIGHT_SPEED << " m/s" << std::endl;

	std::cout << "The resoultion of the screen is " << WIDTH << " by " << HEIGHT << std::endl;


	std::cin.get();


}
