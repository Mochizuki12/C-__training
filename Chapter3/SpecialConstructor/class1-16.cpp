#include <iostream>

/*-----------------------------------------------------------
                     コピーコンストラクタの禁止２
-------------------------------------------------------------*/

class PointerClass
{
    //ポインタを格納
    int *pointer;

public:
    PointerClass(int *p = 0) { pointer = p; }

    //コピーコンストラクタの自動生成禁止：生成時に消去されるため，コンパイル時にエラーが出る
    PointerClass(const PointerClass &c) = delete;

    int *get() { return pointer; }
    void set(int *p) { pointer = p; }
};

int main()
{
    int num = 10;
    PointerClass pc1(&num);

    //デフォルトコピーコンストラクタを利用
    PointerClass pc2(pc1);

    //pc2から値を書き換え
    *pc2.get() = 20;

    //メモリもコピーされるため，pc1で引き渡した値がpc2で引き渡した値に上書きされる

    std::cout << "pc1値: " << *pc1.get() << std::endl;
    std::cout << "pc2ポインタ: " << pc1.get() <<std::endl;

    std::cout << "pc2値: " << *pc2.get() << std::endl;
    std::cout << "pc2ポインタ: " << pc2.get() << std::endl;

    std::cin.get();
}