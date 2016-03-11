#include <iostream>

int multiply(int x, int y)
{
    int product = x * y;
    return product;           // This line didn't exist, so it wasn't returning anything
}
 
int main()
{
    std::cout << multiply(4, 6) << std::endl;       // Multiply function only had one argument
    return 0;
}
