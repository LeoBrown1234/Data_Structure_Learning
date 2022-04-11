#pragma once
//黑马跟敲
#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

typedef struct DYNAMICARRAY {
	int* pAddr; //存放数据的地址
	int size;  //当前多少个元素
	int capacity;//容量，我容器当前最大能容纳多少元素
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






