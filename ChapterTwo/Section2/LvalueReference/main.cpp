//
// Created by yi.chen03 on 2023/11/14.
//
#include <iostream>

int main()
{
	typedef char* pstring;
	int iVal = 1024;
	int &refVal = iVal; // refVal 指向 iVal（是iVal的另一个名字）
//	int &refVal2;       // 引用必须被初始化

	const int ci = 1024;
	const int &r1 = ci;
//	int &r2 = ci;

	return 0;
}
