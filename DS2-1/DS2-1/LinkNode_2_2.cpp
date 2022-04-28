#include<stdio.h>
#include<stdlib.h>
#include "LinkNode_2_2.h"

void CreateListF(LinkNode*& L, ElemType a[], int n)//头插法
{
	LinkNode* s;
	L = (LinkNode*)malloc(sizeof(LinkNode));//初始化头节点的空间
	L->next = NULL;
	for (int i = 0; i < n; i++)
	{
		s = (LinkNode *)malloc(sizeof(LinkNode));//初始化新节点s
		s->data = a[i];//赋值给新节点
		s->next = L->next;//此时把s连接到头节点的后面
		L->next = s;//L的下一个还是指向s
	}
}
void CreateListR(LinkNode*& L, ElemType a[], int n)//尾插法
{
	LinkNode* s, * r;
	L = (LinkNode *)malloc(sizeof(LinkNode));
	r = L;
	for (int i = 0; i < n; i++)
	{
		s = (LinkNode *)malloc(sizeof(LinkNode));
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;
}
void InitList(LinkNode*& L)//初始化单链表
{
	L = (LinkNode*)malloc(sizeof(LinkNode));
	L->next = NULL;
}
void DestroyList(LinkNode*& L)//销毁单链表
{
	LinkNode* pre = L, * p = pre->next;
	while (p != NULL)
	{
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);
}
bool ListEmpty(LinkNode* L)//判断单链表是否为空
{
	return(L->next == NULL);
}
int ListLength(LinkNode* L)//查看单链表长度
{
	int i = 0;
	LinkNode* p = L;
	while (p->next != NULL)
	{
		i++;
		p = p->next;
	}
	return(i);
}
void DispList(LinkNode* L)//输出单链表各元素内容
{
	LinkNode* p = L->next;
	while (p!= NULL)
	{
		printf("%c",p->data);
		p = p->next;
	}
	printf("\n");
}
bool GetElem(LinkNode* L, int i, ElemType& e)//查看单链表第i个元素的值
{
	int j = 0;
	LinkNode* p = L;
	if(i<=0)
	{
		return false;
	}
	while (j < i && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)
	{
		return false;
	}
	else {
		e = p->data;
		return true;
	}
}
int LocateElem(LinkNode* L, ElemType e)//查找第一个为e的元素的序号
{
	int i = 1;
	LinkNode* p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
		i++;
	}
	if (p == NULL)
	{
		return (0);
	}
	else {
		return(i);
	}
}
bool ListInsert(LinkNode*& L, int i, ElemType e)//插入元素到第i个位置
{
	int j = 0;
	LinkNode* p = L, * s;
	if(i<=0)
	{
		return false;
	}
	while (j < i - 1 && p != NULL)
	{
		j++;
		p = p->next;
	}
	if (p == NULL)
	{
		return false;
	}
	else {
		s = (LinkNode*)malloc(sizeof(LinkNode));
		s->data = e;
		s->next = p->next;
		p->next = s;
		return true;
	}
}
bool ListDelete(LinkNode*& L, int i, ElemType& e)//删除第i个元素
{
	int j = 0;
	LinkNode* p = L, * q;
	if (i <= 0)
	{
		return false;
	}
	if (p == NULL)
	{
		return false;
	}
	else {
		q = p->next;
		if (q == NULL)
		{
			return false;
		}
		e = q->data;
		p->next = q->next;
		free(q);
		return true;
	}
}