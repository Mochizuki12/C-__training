#include <stdio.h>
#include <iostream>

int main()
{
	int number;
	
	while (1)
	{
		std::cout << "整数値を入力してください。" << std:: endl;
		std::cin >> number;

		if (std::cin.fail())
		{
			std::cout << "入力エラー！" << std::endl;
			std::cin.clear();
			std::cin.ignore(1024, '\n');
			continue;
		}
		break;
	}

	std::cin.ignore(1024, '\n');
	//ストリームに入力可能な最大文字数をセット
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "\nnumber: " << number << std::endl;

	getchar();
}
