//#include<iostream>
//#include "stdlib.h"
//using namespace std;
////逆转字符串——输入一个字符串，将其逆转并输出
//int main()
//{
//	/*如果你的数组在运行过程中可以确定，
//	比如你输入一个整数来确定数组长度，
//	这样的话可以通过动态内存分配实现。*/
//	int a, num = 0;
//	cin >> a;
//	char *b = new char[a],*c= new char[a];
//	cin >> b;
//	//cout << &b << endl << b[2] << endl << *b << endl;
//	//     输出地址         内容  指针指向的第一个字符
//	for (int i = a; i > 0; i--)
//	{
//		c[num] = b[i - 1];
//		num += 1;
//	}
//	cout << c;
//	system("pause");
//	return 0;
//
//}
//#include "stdafx.h"//If the vc++6.0, with this line.
#include<iostream>
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#define N 131071
char *Any_Long_Str(char *p){
	char *pt;
	if ((pt = (char *)malloc(N)) == NULL){//Apply for a larger space for temporary use
		//malloc函数动态分配内存，全称memory allocation
		printf("Apply for temporary use of space to fail...\n");
		exit(0);
	}
	gets(pt);//Get a string from the keyboard
	if ((p = (char *)malloc(strlen(pt) + 1)) == NULL){//Apply for a suitable size of space
		printf("Application memory failure...\n");
		exit(0);
	}
	strcpy(p, pt);//Copy the string pt to p
	free(pt);//Release the temporary use of space
	return p;
}
int main(void){
	char *pstr = NULL;
	printf("Input a string:\n");
	pstr = Any_Long_Str(pstr);
	printf("%s\n", pstr);//Look at...
	free(pstr);//Release the space
	return 0;
}