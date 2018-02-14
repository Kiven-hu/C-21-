//#include "stdafx.h" //预编译头文件，用于MFC
#include "Link_List.h"
#include<iostream>
using namespace std;

//index   索引; <数>指数; 指示; 标志
//temp    临时雇员，（尤指）临时秘书

//构造函数
LinkList::LinkList()
{
	head = NULL;
	length = 0;
}

//析构函数
LinkList::~LinkList()
{
	Node *temp;
	for (int i = 0; i < length; i++)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}

//得到链表长度
int LinkList::Length()
{
	return length;
}

//在链表头部插入节点
void LinkList::InsertHead(Info val)
{
	Insert(val, 0);
}

//插入节店
void LinkList::Insert(Info val, int pos)
{
	if (pos < 0)
	{
		cout << "pos must be greater than zero" << endl;
		return;
	}
	int index = 1;//指针当前位置
	Node *temp = head;
	Node *node = new Node(val);
	if (pos == 0)
	{
		node->next = temp;
		head = node;
		length++;
		return;
	}
	while (temp != NULL && index < pos)
	{
		temp = temp->next;
		index++;
		return;
	}
	if (temp == NULL)
	{
		cout << "Insert failed" << endl;
		return;
	}
	node->next = temp->next;
	temp->next = node;
	length++;
}

//删除节点
void LinkList::Remove(Info val)
{
	int pos = Find(val);
	if (pos == -1)
	{
		cout << "Delete failed" << endl;
		return;
	}
	if (pos == 1)
	{
		head = head->next;
		length--;
		return;
	}
	int index = 2;//指针当前位置
	Node *temp = head;
	while (index < pos)
	{
		temp = temp->next;
	}
	temp->next = temp->next->next;
	length--;
}

//查找节点位置
int LinkList::Find(Info val)
{
	Node *temp = head;
	int index = 1;
	while (temp != NULL)
	{
		if (temp->val.name==val.name&&temp->val.id==val.id)
		{
			return index;//如果姓名和学号都符合要求，则返回节点序号
		}
		temp = temp->next;//否则移向下一个节点
		index++;//节点序号+1
	}
	return -1;//不存在返回-1
}

//链表反序
void LinkList::Reverse()
{
	if (head == NULL)
	{
		return;
	}
	Node *curNode = head, *nextNode = head->next, *temp;
	//现在的节点，下一个节点，临时存放节点的区域
	while (nextNode != NULL)
	{
		temp = nextNode->next;
		nextNode->next = curNode;
		curNode = nextNode;
		nextNode = temp;
	}//这个还没看明白
	head->next = NULL;//头节点指向空
	head = curNode;
}

//打印链表
void LinkList::Print()
{
	if (head == NULL)
	{
		cout << "LinkList is empty" << endl
			<< "该链表是空的" << endl;
		return;
	}
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->val.name << "," << temp->val.id << endl;
		temp = temp->next;
	}
	cout << endl;
}