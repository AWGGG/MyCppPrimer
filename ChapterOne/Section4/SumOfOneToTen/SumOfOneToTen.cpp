//
// Created by yi.chen on 2023/11/5.
//
#include <iostream>

int main()
{
	int sum1 = 0, val1 = 1;
	while (val1 <= 10)
	{
		sum1 += val1;
		val1++;
	}
	std::cout << "[While Loop] Sum of One To Ten is " << sum1 << std::endl;

	int sum2 = 0;
	for (int i = 0; i < 11; ++i)
	{
		sum2 += i;
	}
	std::cout << "[For Loop] Sum of One To Ten is " << sum2;

	return 0;
}