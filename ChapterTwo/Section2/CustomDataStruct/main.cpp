//
// Created by yi.chen03 on 2023/12/5.
//
#include <string>
#include "Sales_data.h"

int main()
{
	Sales_data data1, data2;
	// 读入data1和data2的代码
	double price = 0;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;

	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;
	// 检查data1和data2的ISBN是否相同
	// 如果相同, 求出两者之和
	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalSold = data1.units_sold + data2.units_sold;
		unsigned totalRevenue = data1.revenue + data2.revenue;
		std::cout << data1.bookNo << " " << totalSold << " " << totalRevenue << "\n";
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to the same ISBN\n";
		return -1;
	};

	return 0;
}