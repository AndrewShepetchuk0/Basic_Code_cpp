#include <iostream>
//includes

//main 
int main()
{
	//Makes variables for HST and price
	float hst = 1.13, price = NULL;
	//Price input and variable allocation
	std::cout << "Input price: " << std::endl;
	std::cin >> price;
	
	std::cout << "The price after HST is: ";
	std::cout << price * hst << std::endl; 

	return 0;
}
