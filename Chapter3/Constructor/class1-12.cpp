#include <iostream>
#include <string>

/*--------------------------------------------
            new演算子とコンストラクタ
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
        //引数付きコンストラクタに処理を任せるので何もしない
    }

    //引数付きコンストラクタ
    SimpleClass(int n, const char *s) : number(n), name(s)
    {
        //メンバイニシャライザで初期化するため，何もしない
    }

    int getNumber() { return number; }
    void setNumber(int n) { number = n; }

    std::string getName() { return name; }
    void setName(char* s) { name = s; }
};

int main()
{
    //インスタンスの宣言と同時にコンストラクタが実行
    SimpleClass sc1;

    //ポインタ変数の宣言
    //まだコンストラクタは実行されていない
    //(メモリは確保されていない)
    SimpleClass *sc2;

    //new演算子の働きによりコンストラクタが実行される
    sc2 = new SimpleClass();

    std::cout << "number: " << sc2->getNumber();
    std::cout << "\nname: " << sc2->getName() << "\n";
    std::cout << sc2 << std::endl;

    //sc2を破棄
    delete sc2;
    //これ以降sc2はつかえない

    //new演算子の働きによりコンストラクタが実行される
    //一度破棄した変数に再割り当ても可能
    sc2 = new SimpleClass(1, "John");
    std::cout << "number: " << sc2->getNumber();
    std::cout << "\nname: " << sc2->getName() << std::endl;
    
    //mallocはコンストラクタが実行されないためNG
    //sc2 = (SimpleClass*)(malloc(sizeof(SimpleClass)));
}