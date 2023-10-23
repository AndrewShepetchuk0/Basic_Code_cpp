#include <iostream>

int main()
{
	float fnum = NULL, snum = NULL;
	char op = NULL;

	std::cout << "Input the first number: " << std::endl;
	std::cin >> fnum;
	std::cout << "Input operation: " << std::endl;
	std::cin >> op;
	std::cout << "Input the second number: " << std::endl;
	std::cin >> snum;
	
	std::cout << "The result is: ";

	switch(op)
	{
		case('+'):
			std::cout << fnum + snum << std::endl;
			break;
		case('-'):
			std::cout << fnum - snum << std::endl;
			break;
		case('*'):
			std::cout << fnum * snum << std::endl;
			break;
		case('/'):
			std::cout << fnum / snum << std::endl;
			break;
		default:
			std::cout << "Not a valid operation" << std::endl;
	}
	return 0;
}