#include<iostream>
#include<fstream>
#include<string>
#include"stdlib.h"
using namespace std;

int main()
{
	ifstream file;
	ofstream outf;
	string s1, s2;
	file.open("H://Self Code//C++//C-21-//Day5&Day6//new file.txt");
	outf.open("H://Self Code//C++//C-21-//new file.txt");
	while (getline(file, s1))
	{
		outf << endl;
		outf << s1;
	}
	file.close();
	outf.close();
	file.open("H://Self Code//C++//C-21-//new file.txt");
	while (getline(file, s1))
	{
		cout << s1;
	}
	system("pause");
	return 0;
}