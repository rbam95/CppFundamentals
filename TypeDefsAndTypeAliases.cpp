#include <iostream>
#include <vector>


typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;

typedef int number_t;


using text_t = std::string;

using number_t = int;



int main()

{

	pairlist_t pairlist;

	text_t firstName = "Tyler";

	number_t age = 21;


	std::cout << firstName << std::endl;

	std::cout << age << std::endl;


	std::cin.get();


}

