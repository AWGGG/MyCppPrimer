//
// Created by yi.chen03 on 2023/12/5.
//

#ifndef INNERSCOPE_CHAPTERTWO_SECTION2_CUSTOMDATASTRUCT_SALES_DATA_H
#define INNERSCOPE_CHAPTERTWO_SECTION2_CUSTOMDATASTRUCT_SALES_DATA_H
#include <iostream>
struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double  revenue = 0.0;
};

#endif //INNERSCOPE_CHAPTERTWO_SECTION2_CUSTOMDATASTRUCT_SALES_DATA_H
