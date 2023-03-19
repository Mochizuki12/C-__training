#include <iostream>
#include <string>

class SimpleClass
{
private:
    int number;
    std::string name;

public:
    //引数なしコンストラクタ
    //(デフォルトコンストラクタ)
    SimpleClass()
    {
        number = 0;
    }

    //引数付きコンストラクタ
    SimpleClass(int n, char *s)
    {
        number = n;
        name = s;
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