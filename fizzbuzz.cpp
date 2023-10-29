#include <iostream>
//includes

//main function
int main()
{
  //for loop which prints numbers from 0 to 100
  for(int i=0; i<=100; i++)
  {
      //detects if a number is divisible by 3 and prints fizz in addition to the number
      if(i % 3 == 0)
      {
      std::cout << "Fizz ";
      std::cout << i << std::endl;
      }
      //detects if a number is divisible by 5 and prints fizz in addition to the number
      if(i % 5 == 0)
      {
      std::cout << "Buzz ";
      std::cout << i << std::endl;
      }
      else
      {
      std::cout << i << std::endl;
      }
    }
  return 0;
}
