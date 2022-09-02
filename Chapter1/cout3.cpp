#include <stdio.h>
#include <iostream>

int main()
{

	std::cout.put('A');
	std::cout.put('\n');

	std::cout.write("ABCDE\n", 6);
	std::cout.write("ABCDE\n", 3);

	getchar();
}
