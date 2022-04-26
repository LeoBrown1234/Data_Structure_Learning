#include<stdio.h>
#include<stdlib.h>
#include "Algorithm_2_1.h"
#define MAX_INT 32767
#define MIN_INT -32768

void Hello_View() //���Ե������
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

void  CreateList(SqList*& L, ElemType a[], int n)//1����˳���
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
void InitList(SqList*& L) //2��ʼ��˳���
{
	L = (SqList*)malloc(sizeof(SqList));
	L->length = 0;
}
void DestroyList(SqList*& L)//3����˳���
{
	free(L);
}
bool ListEmpty(SqList* L)//4�ж�˳����Ƿ�Ϊ��
{
	return(L->length == 0);
}
int ListLength(SqList* L)//5�鿴˳���
{
	return(L->length);
}
void DispList(SqList* L)//6������Ա�
{
	for (int i = 0; i < L->length; i++)
	{
		printf("%d",L->data[i]);
	}
	printf("\n");
}
bool GetElem(SqList* L, int i, ElemType& e);//7��ȡ���Ա�ĳ������Ԫ�ص�ֵ��e

int LocateElem(SqList* L, ElemType e);//8��Ԫ��ֵ����λ��

bool ListInsert(SqList*& L, int i, ElemType e);//9��������Ԫ��

bool ListDelete(SqList*& L, int i, ElemType& e);//10ɾ������Ԫ��





