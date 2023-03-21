#include <iostream>
#include <string>

/*-----------------------------------------------------------
                     変換コンストラクタ２
-------------------------------------------------------------*/

class SimpleClass
{
    int integer;
    double real;
    std::string str;

public:
    SimpleClass() { 
        double real = 0; 
        int integer = 0;
    }

    //全部変換コンストラクタ
    SimpleClass(double x) { 
        real = x; 
        std::cout << "double型の変換コンストラクタの呼び出し" << std::endl;
    }
    SimpleClass(const char * x) { 
        str = x; 
            std::cout << "char型の変換コンストラクタの呼び出し" << std::endl;
    }
    SimpleClass(int x, double y = 0.0)//これもOk
    {
        integer = x;
        real = y;
        std::cout << "複数引数の変換コンストラクタの呼び出し" << std::endl;
    }

    double get() { return real; }
    void set(double n) { real = n; }
};

int main()
{
    //通常コンストラクタの明示的な呼び出し
    SimpleClass sc1;
    SimpleClass sc2(1, 2.00);

    //変換コンストラクタの暗黙的な呼び出し
    SimpleClass sc3 = 20;
    SimpleClass sc4 = "John";
    
    //こういうことはできない
    //SimpleClass sc5 = (1, 1.00);
    //変換コンストラクタの呼び出し：引数が一つだけの時に限る
    sc1 = 10.0;

    //暗黙の変換ができないのでNG
    //sc = "abc";

    std::cout << sc1.get() << std::endl;

    std::cin.get();
}