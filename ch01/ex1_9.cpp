#include <iostream>

int sum(int lhs, int rhs)
{
    int sum = 0;
    while (lhs <= rhs)
    {
        sum = sum + lhs++;
    }
    return sum;
}

int main()
{
    std::cout << "The sum of 50 to 100 is :" << sum(50, 100) << std::endl;
}

