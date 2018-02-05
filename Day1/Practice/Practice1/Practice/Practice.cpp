#include<iostream>
#include<stdlib.h>
using namespace std;
int add(int, int);
int main()
{
	int a, b,c;
	cin >> a >> b;
	c = add(a, b);
	cout << "a+b=" << c << endl;
	system("pause");
	return 0;
}

int add(int x, int y)
{
	int z;
	z = x + y;
	return(z);
}