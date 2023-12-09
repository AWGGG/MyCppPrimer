//
// Created by yi.chen03 on 2023/12/5.
//
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string s1;						// 默认初始化, s1是空字符串
	string s2 = s1;					// s2是s1的副本
	string s3 = "hiya";				// s3是该字符串字面值的副本, 拷贝初始化
	string s4(10, 'c');  // s4的内容是 cccccccccc
	string s5 = "hiya";				// 拷贝初始化
	string s6("hiya");			// 直接初始化
	string s7(10, 'c');	// 直接初始化

	string s;
	cin >> s;
	cout << s << endl;

	string line;
	std::wstring wline;
	while(std::getline(std::wcin, wline))
		std::wcout << wline << endl;

	return 0;
}