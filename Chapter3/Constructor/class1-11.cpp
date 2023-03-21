#include <iostream>
#include <string>

/*--------------------------------------------
            委譲コンストラクタ
----------------------------------------------*/

class SimpleClass
{
private:
    int number;
    std::string name;

public:
    //引数なしコンストラクタ
    //(デフォルトコンストラクタ)
    SimpleClass() : SimpleClass(0, "no name")
    {
        std::cout << "default" << std::endl;
        //引数付きコンストラクタに処理を任せるので何もしない
    }

    //引数付きコンストラクタ
    SimpleClass(int n, const char *s) : number(n), name(s)
    {
        std::cout << "in value" << std::endl;
        //メンバイニシャライザで初期化するため，何もしない
    }

    int getNumber() { return number; }
    void setNumber(int n) { number = n; }

    std::string getName() { return name; }
    void setName(char* s) { name = s; }
};

int main()
{
    //デフォルトコンストラクタの呼び出し
    SimpleClass sc1;
    //number: 0 name:
    std::cout << "number: " << sc1.getNumber();
    std::cout << "\nname: " << sc1.getName() << std::endl;

    //引数付きコンストラクタの呼び出し
    SimpleClass sc2(1, "John");
    //number: 1 name: John
    std::cout << "number: " << sc2.getNumber();
    std::cout << "\nname: " << sc2.getName() << std::endl;

    std::cin.get();
}