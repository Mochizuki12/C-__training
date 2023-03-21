#include <iostream>
#include <string>

/*--------------------------------------------
        デフォルトコピーコンストラクタ
----------------------------------------------*/

class SimpleClass
{
private:
    int number;
    std::string name;
public:
    //コンストラクタ
    SimpleClass() { number = 0; }
    SimpleClass(int n, const char *s)
    {
        number = n;
        name = s;
    }

    int getNumber() { return number; }
    void setNumber(int n) { number = n; }

    std::string getName() { return name; }
    void setName(const char* s) { name = s; }
};

int main()
{
    SimpleClass sc1(1, "Jhon");
    //number: 1 name: John
    std::cout << "number: " << sc1.getNumber();
    std::cout << "\nname: " << sc1.getName() << std::endl;

    //コピーコンストラクタ
    SimpleClass sc2(sc1);
    //↓でもOK
    //SimpleClass sc2 = sc1;

    //number: 1 name: John
    std::cout << "number: " << sc2.getNumber();
    std::cout << "\nnaem: " << sc2.getName() << std::endl;

    std::cin.get();
}