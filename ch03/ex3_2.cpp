#include <iostream>
#include <string>

int main()
{
    std::string str;
    getline(std::cin, str);
    std::cout << str;

    std::cin >> str;
    std::cout << str;
}

