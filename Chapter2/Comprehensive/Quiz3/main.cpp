#include <iostream>

int main()
{

  using namespace std;
  double firstNumber;
  double secondNumber;
  char operation;
  
  cout << "Enter a double value: " << endl;
  cin >> firstNumber;
  cout << "Enter a second double value: " << endl;
  cin >> secondNumber;
  cout << "Enter one of the following: +, -, *, or /: " << endl;
  cin >> operation;
  
  if(operation == '+')
    cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << endl;
  esle if(operation == '-')
    cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << endl;
  else if(operation == '*')
    cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << endl;
  else if(operation == '/')
    if(secondNumber == 0)
      cout << "Second double value cannot be 0.."
    else
      cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << endl;
  else
    cout << "Not a valid operator.." << endl;
    
  return 0;
}
