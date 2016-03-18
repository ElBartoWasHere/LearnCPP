#include <iostream>
#include <string>

float perYear(int age, float length)
{
  return (age / length);
}

int main()
{
  std::string name;
  int age;
  
  std::cout << "Enter your full name: ";
  std::getline(std::cin, name);
  std::cout << "Enter your age: ";
  std::cin >> age;
  
  std::cout << "You've lived " << perYear(age, name.length()) << " years for each letter in your name.";
  
  return 0;
}
