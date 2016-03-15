#include <iostream>
#include <math.h>

int converter(int decimal, int position)
{
  position = pow(2, position);
  
  ((decimal >= position) ? (std::cout << "1") : (std::cout << "0"));
  
  return ((decimal >= position) ? (decimal - position) : decimal );
}

int main()
{
  std::cout << "Please decimal between 0 and 255: ";
  int decimal;
  std::cin >> decimal;
  
  decimal = converter(decimal, 7);
  decimal = converter(decimal, 6);
  decimal = converter(decimal, 5);
  decimal = converter(decimal, 4);
  decimal = converter(decimal, 3);
  decimal = converter(decimal, 2);
  decimal = converter(decimal, 1);
  decimal = converter(decimal, 0);
  
  return 0;
}
