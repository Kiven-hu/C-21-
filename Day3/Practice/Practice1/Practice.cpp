//#include<iostream>
//#include "stdlib.h"
//using namespace std;
////��ת�ַ�����������һ���ַ�����������ת�����
//int main()
//{
//	/*���������������й����п���ȷ����
//	����������һ��������ȷ�����鳤�ȣ�
//	�����Ļ�����ͨ����̬�ڴ����ʵ�֡�*/
//	int a, num = 0;
//	cin >> a;
//	char *b = new char[a],*c= new char[a];
//	cin >> b;
//	//cout << &b << endl << b[2] << endl << *b << endl;
//	//     �����ַ         ����  ָ��ָ��ĵ�һ���ַ�
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
		//malloc������̬�����ڴ棬ȫ��memory allocation
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