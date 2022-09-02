#include <stdio.h>
#include <iostream>

int main()
{
	std::cout << "ABCDE\n";

	std::cout << "ABCDE\n" << std::flush;

	std::cout << "ABCDE" << std::endl;

	getchar();
}
