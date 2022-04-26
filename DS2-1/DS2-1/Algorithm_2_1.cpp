#include<stdio.h>
#include<stdlib.h>
#include "Algorithm_2_1.h"
#define MAX_INT 32767
#define MIN_INT -32768

void Hello_View() //尝试的玩意儿
{ 
	int Choice;
	printf("Choice a number you like:\n");

	while (1) {
		scanf("%d", &Choice);

		if (Choice > 32767 || Choice < -32768) {
			printf("The number must be needed between -32768 ~ 32767!!!\n\n");
			printf("Please type a number again!!!\n\n");
			printf("Choice a number you like:\n\n");
			continue;
		}
		else if (Choice <= 0) {
			printf("Go to the basement.\n");
			break;
		}
		else {
			printf("Go upstairs.\n");
			break;
		}
	}
}

void  CreateList(SqList*& L, ElemType a[], int n)//1创建顺序表
{
	int i,k=0;
	L = (SqList*)malloc(sizeof(SqList));
	for (i = 0; i < n; i++)
	{
		L->data[i] = a[i];
		k++;
	}
	L->length = k;
}
void InitList(SqList*& L) //2初始化顺序表
{
	L = (SqList*)malloc(sizeof(SqList));
	L->length = 0;
}
void DestroyList(SqList*& L)//3销毁顺序表
{
	free(L);
}
bool ListEmpty(SqList* L)//4判断顺序表是否为空
{
	return(L->length == 0);
}
int ListLength(SqList* L)//5查看顺序表长
{
	return(L->length);
}
void DispList(SqList* L)//6输出线性表
{
	for (int i = 0; i < L->length; i++)
	{
		printf("%d",L->data[i]);
	}
	printf("\n");
}
bool GetElem(SqList* L, int i, ElemType& e);//7获取线性表某个数据元素的值到e

int LocateElem(SqList* L, ElemType e);//8按元素值查找位置

bool ListInsert(SqList*& L, int i, ElemType e);//9插入数据元素

bool ListDelete(SqList*& L, int i, ElemType& e);//10删除数据元素





