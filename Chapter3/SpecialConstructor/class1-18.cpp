#include <iostream>
#include <string>

/*-----------------------------------------------------------
                     変換コンストラクタ１
-------------------------------------------------------------*/

class SimpleClass
{
    int number;

public:
    SimpleClass() { number = 0; }

    //変換コンストラクタ
    SimpleClass(int n) { number = n; }

    int get() { return number; }
    void set(int n) { number = n; }
};

int main()
{
    SimpleClass sc;

    //変換コンストラクタの呼び出し：引数が一つだけの時に限る
    sc = 10;

    //暗黙の変換ができないのでNG
    //sc = "abc";

    std::cout << sc.get() << std::endl;

    std::cin.get();
}