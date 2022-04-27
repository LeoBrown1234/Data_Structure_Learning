#include<stdio.h>
#include<stdlib.h>
#include "LinkNode_2_2.h"

void CreateListF(LinkNode*& L, ElemType a[], int n);//头插法

void CreateListR(LinkNode*& L, ElemType a[], int n);//尾插法

void InitList(LinkNode*& L);//初始化单链表

void DestroyList(LinkNode*& L);//销毁单链表

bool ListEmpty(LinkNode* L);//判断单链表是否为空

int ListLength(LinkNode* L);//查看单链表长度

void DispList(LinkNode* L);//输出单链表各元素内容

bool GetElem(LinkNode* L, int i, ElemType& e);//查看单链表第i个元素的值

int LocateElem(LinkNode* L, ElemType e);//查找第一个为e的元素的序号

bool ListInsert(LinkNode*& L, int i, ElemType e);//插入元素到第i个位置

bool ListDelete(LinkNode*& L, int i, ElemType& e);//删除第i个元素