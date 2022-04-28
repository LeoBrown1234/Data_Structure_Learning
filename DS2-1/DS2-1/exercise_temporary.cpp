#include<stdio.h>
#include<stdlib.h>
#include "LinkNode_2_2.h"
void CreateListF(LinkNode*& L, ElemType a[], int n)
{
	LinkNode* s;
	L = (LinkNode *)malloc(sizeof(LinkNode));
	L->next = NULL;
	for (int i = 0; i < n; i++)
	{
		s = (LinkNode *)malloc(sizeof(LinkNode));
		s->data = a[i];
		s->next = L->next;
		L->next = s;
	}
}

void CreateListR(LinkNode*& L, ElemType a[], int n)
{
	LinkNode* s,*r;
	L = (LinkNode*)malloc(sizeof(LinkNode));
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


