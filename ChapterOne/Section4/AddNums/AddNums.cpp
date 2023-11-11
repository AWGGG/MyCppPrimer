//
// Created by yi.chen03 on 2023/11/11.
//
#include <iostream>

int main()
{
	std::cout << "Enter Nums: \n";
	int sum = 0, num = 0;
	while(std::cin >> num)
		sum += num;
	std::cout << "Sum is " << sum << std::endl;
	return 0;
}