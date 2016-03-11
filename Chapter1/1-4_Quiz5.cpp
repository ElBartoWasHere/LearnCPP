#include <iostream>
 
int multiply(int x)
{
    return x * 2;
}
 
int main()
{
    std::cout << "Please enter a number: " << std::endl;
    
    int temp;
    std::cin >> temp;
    
    std::cout << doubleNumber(temp) << std::endl;
    return 0;
}
