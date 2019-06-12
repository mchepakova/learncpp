#include <iostream>

int main ()

{
    long int sum = 0;
    for (int var1 = 0; var1 <= 10000000; var1 += 2)
    {
        //std::cout << var1 << std::endl;
        sum += var1;
    }
    std::cout << "sum is " << sum << std::endl;
    return 0;
}
