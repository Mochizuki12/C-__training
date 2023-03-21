#include <iostream>

/*-----------------------------------------------------------
                     コピーコンストラクタの禁止の罠
-------------------------------------------------------------*/

class PointerClass
{
    //ポインタを格納
    int *pointer;

    //コピーコンストラクタ：Privateで宣言することでコンパイル時にエラーが出る
    PointerClass(const PointerClass &c) {}

public:
    PointerClass(int *p = 0) { pointer = p; }

    int *get() { return pointer; }
    void set(int *p) { pointer = p; }
};

int main()
{
    int num = 10;
    //引数付きインスタンスpc1・デフォルトインスタンスpc2を生成
    PointerClass pc1(&num);
    PointerClass pc2;

    //メンバ変数がそのままコピー：防ぐにはオーバーロードが必要
    pc2 = pc1;

    //メモリもコピーされるため，pc1で引き渡した値がpc2で引き渡した値に上書きされる

    std::cout << "pc1値: " << *pc1.get() << std::endl;
    std::cout << "pc2ポインタ: " << pc1.get() <<std::endl;

    std::cout << "pc2値: " << *pc2.get() << std::endl;
    std::cout << "pc2ポインタ: " << pc2.get() << std::endl;

    std::cin.get();
}