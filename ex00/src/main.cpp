#include "template.hpp"

int main (void){
	int a = 10;
	int b = 20;
	std::cout << max(a,b) << std::endl;
	std::cout << min(a, b) << std::endl; 

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	swap(a, b);
	std::cout << "SWAP" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

}