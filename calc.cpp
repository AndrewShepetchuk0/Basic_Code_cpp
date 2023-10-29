#include <iostream>
//includes

//Main
int main()
{
	//Creates variable for first number, second number, and operation
	float fnum = NULL, snum = NULL;
	char op = NULL;

	//User input for first number, operation, and second number
	std::cout << "Input the first number: " << std::endl;
	std::cin >> fnum;
	std::cout << "Input operation: " << std::endl;
	std::cin >> op;
	std::cout << "Input the second number: " << std::endl;
	std::cin >> snum;

	//prints result
	std::cout << "The result is: ";

	//Creates switch statement for operations
	switch(op)
	{
		//Addition operation
		case('+'):
			std::cout << fnum + snum << std::endl;
			break;
		//Subtraction operation
		case('-'):
			std::cout << fnum - snum << std::endl;
			break;
		//Multiplication operation
		case('*'):
			std::cout << fnum * snum << std::endl;
			break;
		//Division operation
		case('/'):
			std::cout << fnum / snum << std::endl;
			break;
		default:
			std::cout << "Not a valid operation. Only addition, subtraction, multiplication, and division operations are supported" << std::endl;
	}
	return 0;
}
