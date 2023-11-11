//
// Created by yi.chen03 on 2023/11/11.
//
#include <iostream>

int main()
{
	int curNum = 0, val = 0;
	if(std::cin >> curNum)
	{
		int curCount = 1;
		while(std::cin >> val)
		{
			if(val == curNum)
				++curCount;
			else
			{
				std::cout << curNum << " occurs " << curCount << " times\n";
				curCount = 1;
				curNum = val;
			}
		}
		std::cout << curNum << " occurs " << curCount << " times\n";
	}
	return 0;
}