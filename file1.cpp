#include <iostream>



int main ()
{
    int var;
    int var2;
    std::cout << "enter a number" << std::endl;
    std::cin >> var;
    std::cout << "the number  you ve entered is: " << var << std::endl;
    std::cout << "enter second number" << std::endl;
    std::cin >> var2;
    std::cout << "the number  you ve entered is: " << var2 << std::endl;
    std::cout << "the sum of both numbers is: " << var + var2 << std::endl;
    return 0;
}
