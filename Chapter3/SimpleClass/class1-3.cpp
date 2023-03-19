#include <iostream>
#include <string>

/*--------------------------------------------
            アクセッサとメンバ関数
----------------------------------------------*/

class SimpleClass
{
private:
    int number;
    std::string name;

//アクセッサ：privateのメンバ変数をpublicのメンバ関数を介して
//           アクセスできるようにするメンバ関数
public:
    
    //ゲッター：値を取得するアクセッサ
    int GetNumber()
    {
        return number;
    }

    //セッター：値を設定するためのアクセッサ
    void SetNumber(int n)
    {
        number = n;
    }

    //ゲッター
    std::string GetName()
    {
        return name;
    }

    //セッター
    void SetName(const char* s)
    {
        name = s;
    }
};

int main()
{
    //インスタンスの宣言
    SimpleClass sc;
    sc.SetNumber(0);
    sc.SetName("やる夫");

    //privateメンバは sc.number = 0;　のような方法でアクセスできない

    std::cout << "number: " << sc.GetNumber();
    std::cout << "\nname: " << sc.GetName() << std::endl;

    std::cin.get();
}