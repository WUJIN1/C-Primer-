#include <cctype>
#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string str;
    getline(std::cin, str);
    std::for_each(str.begin(), str.end(), [](auto c) {   if(!ispunct(c)) std::cout<<static_cast<char>(c);   });
}


