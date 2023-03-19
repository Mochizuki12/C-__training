#include <iostream>
#include <string>

/*--------------------------------------------
        シンプルなクラスとインスタンス
----------------------------------------------*/

class SimpleClass
{
public:
    int number;
    std::string name;
};

int main()
{
    //定義したクラスの変数（インスタンス）の宣言
    SimpleClass sc;
    sc.number = 0;
    sc.name = "やる夫";

    std::cout << "number: " << sc.number;
    std::cout << "\nname: " << sc.name << std::endl;

    std::cin.get();
}