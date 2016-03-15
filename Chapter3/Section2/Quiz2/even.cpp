#include <iostream>

bool isEven(int number)
{
  if((number%2) == 1)
    return FALSE;
  else
    return TRUE;
}

int main()
{
  using namespace std;
  int number;
  
  cout << "Please enter number: " << endl;
  cin >> number;
  
  if(isEven(number))
    cout << "The number " << number << " is even." << endl;
  else
    cout << "The number " << number << " is odd." << endl;
}
