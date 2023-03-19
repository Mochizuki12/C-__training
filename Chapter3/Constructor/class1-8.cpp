#include <iostream>
#include <string>

/*--------------------------------------------
            比静的メンバ変数の初期化
----------------------------------------------*/

class SimpleClass
{
private:
    //一番初めに初期化を行える．静的メンバ変数(static)は初期化できない
    int number = 0;
    std::string name = "no name";

public:
 
    SimpleClass()
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