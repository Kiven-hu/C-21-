#include<iostream>
#include"Mylibrary.h"
#include"stdlib.h"
#pragma comment(lib,"Mylibrary.h")
#define N 131071
using namespace std;
char *Any_Long_Str(char *p)
{
	char *pt;
	if ((pt=(char *)malloc(N)) == NULL)
	{
		cout << "���붯̬�ڴ�ռ�ʧ��" << endl;
		exit(0);
	}
	cin >> pt;
	if ((p=(char *)malloc(strlen(pt))) == NULL)
	{
		cout << "���붯̬�ڴ�ռ�ʧ��" << endl;
		exit(0);
	}
	strcpy(p, pt);
	return p;
}