#include <iostream>
 
int add(int x, int y, int z)
{
    return x + y + z;
}
 
int multiply(int x, int y)
{
    return x * y;
}
 
int main()
{
    std::cout << multiply(add(1, 2, 3), 4) << std::endl;      // (1+2+3)*4 => 24
    return 0;
}
