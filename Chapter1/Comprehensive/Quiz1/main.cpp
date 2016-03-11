#include <iostream>

int readNumber()
{
  std::cout << "Please enter number: " << std::endl;
  int temp;
  std::cin >> temp;
  retutn temp;
}

void writeAnswer(int x)
{
  std::cout << "Numbers added: " << x << std::endl;
}

int main()
{

  int x = readNumber();
  int y = readNumber();

  writeAnswer(x+y);
  
  return 0;
}
