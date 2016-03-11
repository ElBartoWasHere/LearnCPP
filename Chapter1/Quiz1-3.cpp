#include <iostream>

int main()
{

  int x = 5;
  x = x - 2;
  std::cout << x << std::endl; // #1
 
  int y = x;
  std::cout << y << std::endl; // #2
 
  // x + y is an r-value in this context, so evaluate their values
  std::cout << x + y << std::endl; // #3
 
  std::cout << x << std::endl; // #4
 
  int z;
  std::cout << z << std::endl; // #5
  
  return 0;
  
}
