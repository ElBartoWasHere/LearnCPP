#include <iostream>

int main()
{

  using namespace std;
  int firstNumber, secondNumber;
  
  cout << "Enter first number: ";
  cin >> firstNumber;
  cout << "\nEnter bigger number: ";
  cin >> secondNumber;
  
  if(firstNumber > secondNumber)
  {
    cout << "Swapping numbers..........." << endl;
    int temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
  }
  
  cout << "The smaller value is " << firstNumber << endl;
  cout << "The bigger value is " << secondNumber << endl;
  
  return 0;
}
