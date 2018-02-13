//��������ڵ�ͷ���
#ifndef __Link_List_H__
#define __Link_List_H__
#include<string>
using namespace std;

struct Info  //�洢������
{
	string name;
	int id;
};
//������
struct Node
{
	Info val;//����ڵ��д�ŵ�����
	Node *next;//ָ����һ���ڵ�
	/*����ָ����һ���ڵ㣬ʵ�����Ƕ�����һ��ָ�룬ͬʱ������һ
	  ���ڴ�ռ����ڴ洢�ڵ��е�����
	*/
	Node(Info x) :val(x), next(NULL){}
	//�ṹ�幹�캯��������Ĺ��캯����ͬ��ð�ź����ǳ�ʼ���б�
	//Ҳ���Ǹ���Աval��ʼ��Ϊ����Ĳ���Ϊx��next��ʼ��ΪNULL
};
//������ʹ��typedefʱ
/*
typedef struct tag_1
{
	int value;
	struct tag_1 *link;
}NODE;
��
struct tag_2;
typedef struct tag_2
{
	int value;
	NODE *link;
};
��
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
	LinkList();//���캯��
	void InsertHead(Info val);//������ͷ��������
	void Insert(Info val, int pos);//����ڵ�
	void Remove(Info val);//ɾ���ڵ�
	int Length();//�õ�������
	void Reverse();//������
	int Find(Info val);//���ҽڵ�λ��
	void Print();//��ӡ����
	~LinkList();//��������
private:
	Node *head;
	int length;
};






#endif