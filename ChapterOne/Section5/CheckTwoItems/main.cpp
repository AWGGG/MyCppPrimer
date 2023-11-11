//
// Created by yi.chen03 on 2023/11/12.
//
#include <iostream>
#include "../../../Utils/Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << item1.isbn() << std::endl;
	std::cout << item2.isbn() << std::endl;;
	if (item1.isbn() == item2.isbn())
	{
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Data Must refer to same ISBN\n";
	}
	return 0;
}