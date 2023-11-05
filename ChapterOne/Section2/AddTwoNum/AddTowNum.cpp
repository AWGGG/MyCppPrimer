//
// Created by yi.chen on 2023/11/5.
//
#include <iostream>

int main()
{
    std::cout << "Enter Two Numbers\n";
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << std::endl;
    std::cin.get();
    return 0;
}