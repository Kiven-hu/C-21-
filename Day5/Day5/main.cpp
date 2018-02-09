#include<fstream>
#include<iomanip>
#include<iostream>

using namespace std;
//ÎÄ¼þ¶ÁÐ´²Ù×÷
int main()
{
	ofstream file;
	file.open("H:\Self Code\C++\C-21-\Day5\new file.txt");
	if (file.is_open())
	{
		file << "This is a line." << endl;
		file << "This is another line." << endl;
		file.close();
	}

	return 0;
}