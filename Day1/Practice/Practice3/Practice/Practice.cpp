#include<iostream>
#include<stdlib.h>
using namespace std;
/*字符数据与整数进行算数运算*/
int main()
{
	char c1, c2;
	c1 = 'a';
	c2 = 'b';
	c1 = c1 - 32;
	c2 = c2 - 32;
	cout << c1 << ' ' << c2 << endl;
	system("pause");
	return 0;
}