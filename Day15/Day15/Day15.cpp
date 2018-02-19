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

	pa->Print();//��̬ paָ��class A�Ķ��󣬵���a.Print
	pa = pb;
	pa->Print();//��̬ paָ��class B�Ķ��󣬵���b.Print
	pa = pd;
	pa->Print();//��̬ paָ��class D�Ķ��󣬵���d.Print
	pa = pe;
	pa->Print();//��̬ paָ��class E�Ķ��󣬵���e.Print
	system("pause");
	return 0;
}