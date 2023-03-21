#include <iostream>
#include <string>

/*--------------------------------------------
        引数付きコンストラクタ：同時定義
----------------------------------------------*/

class SimpleClass
{
private:
    int number;

public:
    //引数付き・引数なしコンストラクタ同時定義
    SimpleClass(int n = 0)
    {
        number = n;
    }

    int getNumber() { return number; }
    void setNumber(int n) { number = n; }
};

int main()
{
    //デフォルトコンストラクタの呼び出し
    SimpleClass sc1;
    //number: 0 name:
    std::cout << "number: " << sc1.getNumber() << std::endl;

    //引数付きコンストラクタの呼び出し
    SimpleClass sc2(1);
    //number: 1 name: John
    std::cout << "number: " << sc2.getNumber() << std:: endl;

    std::cin.get();
}