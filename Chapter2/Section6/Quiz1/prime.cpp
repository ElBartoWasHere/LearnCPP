#include <iostream>

int main()
{
  
  bool isPrime = FALSE;
  int numberEntered;

  std::cout << "Please enter number greater than 0: " << std::endl;
  std::cin >> numberEntered;
  
  if(numberEntered < 0)
    std::cout << "Number has to be positive." << std::endl;
  else if(numberEntered == 1)
    isPrime = TRUE;
  else if(numberEntered == 2)
    isPrime = TRUE;
  else if(numberEntered == 3)
    isPrime = TRUE;
  else if(numberEntered == 5)
    isPrime = TRUE;
  else if(numberEntered == 7)
    isPrime = TRUE;
  else if(numberEntered == 11)
    isPrime = TRUE;
  else if(numberEntered == 13)
    isPrime = TRUE;
  
  if(isPrime)  
    std::cout << "The number entered is prime." << std::endl;
  else
    std::cout << "The number entered is not prime." << std::endl;
    
  return 0;
}
