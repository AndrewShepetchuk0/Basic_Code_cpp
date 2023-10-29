#include <iostream>

int main()
{
  for(i =0; i <= 100; i++)
  {
    std::cout << i << std::endl;
    switch(i)
    {
      case 3:
      std::cout << "Fizz ";
      std::cout << i << std::endl;
      case 5:
      std::cout << "Buzz ";
      std::cout << i << std::endl;
      default:
      std::cout << i << endl;
    }
  }
  return 0;
}
