#include<iostream>
#include"stdlib.h"
#define N 131071
using namespace std;

char *Any_Long_Str(char *p)
{
	char *pt;
	if ((pt = (char *)malloc(N)) == NULL)
	{
		cout << "���붯̬�ڴ�ռ�ʧ��" << endl;
		exit(0);
	}
	cin >> pt;
	if ((p = (char *)malloc(strlen(pt))) == NULL)
	{
		cout << "���붯̬�ڴ�ռ�ʧ��" << endl;
		exit(0);
	}
	strcpy(p, pt);
	return p;
}

int main()
{
	char *vactor = NULL;
	int count = 0;
	cout << "�����ַ���" << endl;
	vactor = Any_Long_Str(vactor);
	for (unsigned int i = 0; i < strlen(vactor); i++)
	{
		if (vactor[i] == 'A' || vactor[i] == 'a' ||
			vactor[i] == 'E' || vactor[i] == 'e' ||
			vactor[i] == 'I' || vactor[i] == 'i' || 
			vactor[i] == 'O' || vactor[i] == 'o' || 
			vactor[i] == 'U' || vactor[i] == 'u')
		{
			count += 1;
		}
	}
	cout << "Ԫ����ĸ����" << endl << count << endl;
	system("pause");
	return 0;
}
