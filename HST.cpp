#include <iostream>

int main()
{
	float hst = 1.13, price = NULL;
	std::cout << "Input price: " << std::endl;
	std::cin >> price;
	
	std::cout << "The price after HST is: ";
	std::cout << price * hst << std::endl; 

	return 0;
}
