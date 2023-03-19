#include <iostream>
#include <string>

int main()
{
    std::string str1 = "ABCDEFG";

    //ABCDEFG
    std::string str2(str1);
    std::cout << str2 << std::endl;

    //CDEFG
    std::string str3(str1, 2);
    std::cout << str3 << std::endl;

    //CDE
    std::string str4(str1, 2, 3);
    std::cout << str4 << std::endl;

    //CD
    std::string str5(&str1[2], &str1[4]);
    std::cout << str5 << std::endl;

    //xxxxx
    std::string str6(5, 'x');
    std::cout << str6 << std::endl;

    std::cin.get();
}