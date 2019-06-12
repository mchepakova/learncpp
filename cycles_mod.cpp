#include <iostream>
#include <vector>

int main ()

{
    std::vector<int> vec;
    for (int var1 = 1; var1 <10000000; var1++)
    {
        if (var1 % 334 == 0)
        {
            //std::cout << var1 << std::endl;
            vec.emplace_back(var1);
        }

    }
    std::cout << vec.size() << std::endl;
    std::cout << vec.front() << std::endl;
    std::cout << vec.back() << std::endl;

    return 0;
}
