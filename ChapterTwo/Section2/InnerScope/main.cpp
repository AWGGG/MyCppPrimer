//
// Created by yi.chen03 on 2023/11/14.
//
#include <iostream>


int reused = 42; // reused拥有全局作用域
int main()
{
	int unique = 0; // unique拥有块作用域
	// 输出: 使用全局变量
	std::cout << reused << " " << unique << "\n";
	int reused = 0; // 新建全局变量reused, 覆盖全局变量reused
	// 输出: 使用局部变量reused
	std::cout << reused << " " << unique << "\n";
	// 输出: 显示的访问全局变量reused
	std::cout << ::reused << " " << unique << "\n";

	return 0;
}