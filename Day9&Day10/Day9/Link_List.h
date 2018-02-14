//定义链表节点和方法
#ifndef __Link_List_H__
#define __Link_List_H__
#include<string>
using namespace std;

struct Info  //存储的数据
{
	string name;
	int id;
};
//链表定义
struct Node
{
	Info val;//链表节点中存放的数据
	Node *next;//指向下一个节点
	/*这里指向下一个节点，实际上是定义了一个指针，同时开辟了一
	  块内存空间用于存储节点中的数据
	*/
	Node(Info x) :val(x), next(NULL){}
	//结构体构造函数，与类的构造函数相同，冒号后面是初始化列表
	//也就是给成员val初始化为传入的参数为x，next初始化为NULL
};
//自引用使用typedef时
/*
typedef struct tag_1
{
	int value;
	struct tag_1 *link;
}NODE;
或
struct tag_2;
typedef struct tag_2
{
	int value;
	NODE *link;
};
或
struct tag_3
{
	int value;
	struct tag *link;
};
typedef struct tag_3 NODE;
*/

class LinkList
{
public:
	LinkList();//构造函数
	void InsertHead(Info val);//在链表头部插入结点
	void Insert(Info val, int pos);//插入节点
	void Remove(Info val);//删除节点
	int Length();//得到链表长度
	void Reverse();//链表反序
	int Find(Info val);//查找节点位置
	void Print();//打印链表
	~LinkList();//析构函数
private:
	Node *head;
	int length;
};






#endif