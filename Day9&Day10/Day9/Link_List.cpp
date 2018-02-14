//#include "stdafx.h" //Ԥ����ͷ�ļ�������MFC
#include "Link_List.h"
#include<iostream>
using namespace std;

//index   ����; <��>ָ��; ָʾ; ��־
//temp    ��ʱ��Ա������ָ����ʱ����

//���캯��
LinkList::LinkList()
{
	head = NULL;
	length = 0;
}

//��������
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

//�õ�������
int LinkList::Length()
{
	return length;
}

//������ͷ������ڵ�
void LinkList::InsertHead(Info val)
{
	Insert(val, 0);
}

//����ڵ�
void LinkList::Insert(Info val, int pos)
{
	if (pos < 0)
	{
		cout << "pos must be greater than zero" << endl;
		return;
	}
	int index = 1;//ָ�뵱ǰλ��
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

//ɾ���ڵ�
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
	int index = 2;//ָ�뵱ǰλ��
	Node *temp = head;
	while (index < pos)
	{
		temp = temp->next;
	}
	temp->next = temp->next->next;
	length--;
}

//���ҽڵ�λ��
int LinkList::Find(Info val)
{
	Node *temp = head;
	int index = 1;
	while (temp != NULL)
	{
		if (temp->val.name==val.name&&temp->val.id==val.id)
		{
			return index;//���������ѧ�Ŷ�����Ҫ���򷵻ؽڵ����
		}
		temp = temp->next;//����������һ���ڵ�
		index++;//�ڵ����+1
	}
	return -1;//�����ڷ���-1
}

//������
void LinkList::Reverse()
{
	if (head == NULL)
	{
		return;
	}
	Node *curNode = head, *nextNode = head->next, *temp;
	//���ڵĽڵ㣬��һ���ڵ㣬��ʱ��Žڵ������
	while (nextNode != NULL)
	{
		temp = nextNode->next;
		nextNode->next = curNode;
		curNode = nextNode;
		nextNode = temp;
	}//�����û������
	head->next = NULL;//ͷ�ڵ�ָ���
	head = curNode;
}

//��ӡ����
void LinkList::Print()
{
	if (head == NULL)
	{
		cout << "LinkList is empty" << endl
			<< "�������ǿյ�" << endl;
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