#include <iostream>
#include <string>

/*--------------------------------------------
            クラステンプレート
----------------------------------------------*/

template<typename T>
class TestClass
{
    T value;

public:
    void Set(T val)
    {
        value = val;
    }

    T Get()
    {
        return value;
    }

    void Print()
    {
        std::cout << value << std::endl;
    }
};

int main()
{   
    //テンプレートクラスのインスタンス宣言
    TestClass<int> tc1;
    tc1.Set(10);
    tc1.Print();
    std::cout << tc1.Get() << std::endl;

    TestClass<std::string> tc2;
    tc2.Set("ABC");
    tc2.Print();
    std::cout << tc2.Get() << std::endl;

    std::cin.get();
}