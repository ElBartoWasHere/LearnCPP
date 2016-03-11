#include <iostream>
 
void doIt(int x)
{
    x = 3;
    int y = 4;
    std::cout << "doIt: x = " << x << " y = " << y << std::endl;    // Prints x=3 and y=4
}
 
int main()
{
    int x = 1;
    int y = 2;
    std::cout << "main: x = " << x << " y = " << y << std::endl;    // Prints x=1 and y=2
    doIt(x);
    std::cout << "main: x = " << x << " y = " << y << std::endl;    // Prints x=1 and y=2
    return 0;
}
