#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<iostream>
#define MAXSIZE 50
typedef int ElemType;
using namespace std;

typedef struct{
    ElemType data[MAXSIZE];
	int length;
}SqList;

void InitList(SqList *L) {
	L = (SqList*)malloc(sizeof(SqList));
	L->length = 0;
}
void CreateList(SqList*& L, int n, ElemType a[])
{
	int i = 0,k=0;
	L = (SqList*)malloc(sizeof(SqList));
	while (i > n)
	{
		L->data[i] = a[i];
		i++;
		k++;
	}
	L->length = k;
}



int main()
{
	



	system("pause");
      return 0;
}