#include<iostream>
#include"stdlib.h"

using namespace std;

class A{
public:
	virtual void Print()
	{
		cout << "A::Print" << endl;
	}
};
class B :public A{
public:
	virtual void Print(){ cout << "B::Print" << endl; }
};
class D :public A{
public:
	virtual void Print(){ cout << "D::Print" << endl; }
};
class E :public B{
	virtual void Print(){ cout << "E::Print" << endl; }
};

int main()
{
	A a; B b; E e; D d;
	A *pa = &a; B *pb = &b;
	D *pd = &d; E *pe = &e;

	pa->Print();//多态 pa指向class A的对象，调用a.Print
	pa = pb;
	pa->Print();//多态 pa指向class B的对象，调用b.Print
	pa = pd;
	pa->Print();//多态 pa指向class D的对象，调用d.Print
	pa = pe;
	pa->Print();//多态 pa指向class E的对象，调用e.Print
	system("pause");
	return 0;
}