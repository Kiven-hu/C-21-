#include<iostream>
#include "stdlib.h"
using namespace std;
//逆转字符串——输入一个字符串，将其逆转并输出
int main()
{
	/*如果你的数组在运行过程中可以确定，
	比如你输入一个整数来确定数组长度，
	这样的话可以通过动态内存分配实现。*/
	int a;
	cin >> a;
	char *b = new char[a];
	cin >> b;
	cout << &b << endl << b << endl << *b << endl;
	//输出地址  内容  指针指向的第一个字符
	*b = *b + a ;
	for (int i = a; i > 0; i--)
	{
		*b = *b - 1;
		cout << *b ;
	}
	system("pause");
	return 0;

}