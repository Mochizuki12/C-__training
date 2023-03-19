#include <iostream>
#include <string>

/*--------------------------------------------
            コンストラクタ
----------------------------------------------*/

class SimpleClass
{
private:
    int number;
    std::string name;

public:
    //コンストラクタ：インスタンス生成時に呼び出し．重い処理は非推奨
    //省略した場合は何もしないコンストラクタが生成
    SimpleClass()
    {
        number = 0;
    }

    int getNumber() { return number; }
    void setNumber(int n) { number = n;}

    std::string getName() { return name; }
    void setName(char* s) { name = s; }
};

int main()
{
    SimpleClass sc;
    //この時点でsc.numberは0で初期化されている

    //0を表示
    std::cout << sc.getNumber() << std::endl;
}