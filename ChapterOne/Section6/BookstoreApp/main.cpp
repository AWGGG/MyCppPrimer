//
// Created by yi.chen03 on 2023/11/13.
//
#include <iostream>
#include "../../../Utils/Sales_item.h"

int main()
{
	// 将每个ISBN的数据合并起来, 存入total变量
	// 使用另一个名为trans的变量保存读取每一条销售记录
	Sales_item total;
	if (std::cin >> total) {
		Sales_item trans;
		while (std::cin >> trans) {
			if (total.isbn() == trans.isbn())
				total += trans;
			else {
				std::cout << total << "\n";
				total = trans;
			}
		}
		std::cout << total << "\n";
	}
	else {
		std::cerr << "No data?\n";
		return -1;
	}
	return 0;
}