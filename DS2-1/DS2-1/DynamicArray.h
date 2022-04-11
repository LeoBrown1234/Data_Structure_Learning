#pragma once
//�������
#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

typedef struct DYNAMICARRAY {
	int* pAddr; //������ݵĵ�ַ
	int size;  //��ǰ���ٸ�Ԫ��
	int capacity;//��������������ǰ��������ɶ���Ԫ��
}Dynamic_Array;

Dynamic_Array* Init_Array();

void Push_Back_Array(Dynamic_Array *arr,int value);

void Remove_Array(Dynamic_Array* arr, int pos);

void RemoveByValue_Array(Dynamic_Array* arr, int value);

int Find_Array(Dynamic_Array* arr, int value);

void Print_Array(Dynamic_Array* arr);

void FreeSpace_Array(Dynamic_Array* arr);

void Clear_Array(Dynamic_Array* arr);

int Capacity_Array(Dynamic_Array* arr);

int Size_Array(Dynamic_Array* arr, int pos);

int At_Array(Dynamic_Array* arr, int pos);
#endif






