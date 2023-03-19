#include <iostream>
#include <string>

/*--------------------------------------------
            privateメンバ変数の挙動
----------------------------------------------*/

class SimpleClass
{
    //プライベートで宣言
    int number;
public:
    std::string name;
};

int main()
{
    //インスタンスを宣言
    SimpleClass sc;

    //プライベートであるためアクセスできない
    sc.number = 0;
    sc.name = "やる夫";
}