
//#include "stdafx.h"//If the vc++6.0, with this line.
#include<iostream>
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#define N 131071
char *Any_Long_Str(char *p){//�ַ���ָ����ĺ���
	char *pt;//�����ַ���ָ��
	if ((pt = (char *)malloc(N)) == NULL){//Apply for a larger space for temporary use
		//malloc������̬�����ڴ棬ȫ��memory allocation������һ���������ڴ�飬
		//����һ��void *��δ֪���͵�ָ�룩����ǿ��ת����ת����char���͵�ָ��
		//�������NULL˵�����붯̬�ڴ�ʧ��
		printf("Apply for temporary use of space to fail...\n");
		exit(0);
		//exit(0) ��ʾ���������˳�,exit��/exit(-1����ʾ�����쳣�˳���
	}
	gets(pt);//Get a string from the keyboard
	//gets�ӱ�׼�����豸���ַ�����������������޶�ȡ�������ж����ޣ��Իس���
	//����ȡ�����Գ���ԱӦ��ȷ��buffer�Ŀռ��㹻���Ա���ִ�ж�����ʱ������
	//�����
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