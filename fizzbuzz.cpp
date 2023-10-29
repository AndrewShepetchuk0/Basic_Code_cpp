#include <iostream>

int main()
{
  for(int i=0; i<=100; i++)
  {
    std::cout << i << std::endl;
    switch(i)
    {
      case(i % 3 == 0):
      std::cout << "Fizz ";
      std::cout << i << std::endl;
      case(i % 5 == 0):
      std::cout << "Buzz ";
      std::cout << i << std::endl;
      default:
      std::cout << i << std::endl;
    }
  }
  return 0;
}
