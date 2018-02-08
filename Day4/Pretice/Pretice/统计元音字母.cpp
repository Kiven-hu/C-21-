#include<iostream>
#include"stdlib.h"
#include"Mylibrary.h"
#pragma comment(lib,"Mylibrary.h")
using namespace std;


int main()
{
	char *vactor = NULL;
	int count = 0;
	cout << "ÊäÈë×Ö·û´®";
	vactor = Any_Long_str(vactor);
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
	cout << "ÔªÒô×ÖÄ¸¹²¼Æ" << endl << count << endl;
	system("pause");
	return 0;
}