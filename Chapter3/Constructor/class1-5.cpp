#include <iostream>
#include <string>

/*--------------------------------------------
        初期化をしていないクラスの挙動
----------------------------------------------*/

class SimpleClass
{
private:
    int number;
    std::string name;

public:
    int getNumber() { return number; }
    void setNumber(int n) { number = n; }

    std::string getName() { return name; }
    void setName(char* s) { name = s; }
};

int main()
{
    SimpleClass sc;

    //初期化していないメンバ変数にアクセス
    //意図した通りに動かない
    std::cout << sc.getNumber() << std::endl;
}