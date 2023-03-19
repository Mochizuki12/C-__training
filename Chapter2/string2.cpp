#include <iostream>
#include <string>

int main()
{
    std::string str1 = "ABCDE";

    std::string str2;
    std::cout << str2 <<std::endl;

    str2 = str1;
    std::cout << str2 << std::endl;

    str2 = "abcdefghijklmn";
    std::cout << str2 << std::endl;

    std::cin.get();
}