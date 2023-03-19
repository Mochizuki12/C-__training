#include <iostream>
#include <string>

/*--------------------------------------------
            メンバイニシャライザ
----------------------------------------------*/

class SimpleClass
{
private:
    int number;
    std::string name;

public:
    //メンバイニシャライザ：代入よりも効率が良い
    SimpleClass() : number(0), name("no name")
    {
        //メンバ変数は既に初期化されているため，
        //コンストラクタ内では何もしない
    }

    //アクセッサ
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
    std::cout << sc.getNumber() << std::endl << sc.getName() << std::endl;
}