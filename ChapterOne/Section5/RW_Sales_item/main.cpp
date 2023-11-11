//
// Created by yi.chen03 on 2023/11/12.
//
#include <iostream>
#include "../../../Utils/Sales_item.h"

int main()
{
	Sales_item book;
	// 读入ISBN号, 出售的册数以及销售的价格
	std::cin >> book;
	// 写入ISBN, 出售的册数, 总销售额, 平均价格
	std::cout << book << std::endl;
	return 0;
}