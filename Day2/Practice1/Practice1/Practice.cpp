#include<iostream>
#include "stdlib.h"
using namespace std;
//逆转字符串——输入一个字符串，将其逆转并输出
int main()
{
	/*如果你的数组在运行过程中可以确定，
	比如你输入一个整数来确定数组长度，
	这样的话可以通过动态内存分配实现。*/
	int a, num = 0;
	cin >> a;
	char *b = new char[a],*c= new char[a];
	cin >> b;
	cout << &b << endl << b[2] << endl << *b << endl;
	//     输出地址       内容  指针指向的第一个字符
	for (int i = a; i > 0; i--)
	{
		c[num] = b[i - 1];
		num += 1;
	}
	cout << c;
	system("pause");
	return 0;

}