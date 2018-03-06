#include <iostream>
#include <string>

int main()
{
    std::string str{"Hello World!"};
    for( auto& s : str )
    {
        s = 'X';
    }
    std::cout << str;
}
