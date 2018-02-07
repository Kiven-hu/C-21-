
//#include "stdafx.h"//If the vc++6.0, with this line.
#include<iostream>
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#define N 131071
char *Any_Long_Str(char *p){//字符型指针类的函数
	char *pt;//设置字符型指针
	if ((pt = (char *)malloc(N)) == NULL){//Apply for a larger space for temporary use
		//malloc函数动态分配内存，全称memory allocation，申请一块连续的内存块，
		//返回一块void *（未知类型的指针），经强制转换，转换成char类型的指针
		//如果等于NULL说明申请动态内存失败
		printf("Apply for temporary use of space to fail...\n");
		exit(0);
		//exit(0) 表示程序正常退出,exit⑴/exit(-1）表示程序异常退出。
	}
	gets(pt);//Get a string from the keyboard
	//gets从标准输入设备读字符串函数，其可以无限读取，不会判断上限，以回车结
	//束读取，所以程序员应该确保buffer的空间足够大，以便在执行读操作时不发生
	//溢出。
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
	system("pause");
	return 0;
}