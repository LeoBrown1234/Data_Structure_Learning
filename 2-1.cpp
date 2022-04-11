#include <DynamicArray.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
//初始化
Dynamic_Array* Init_Array() {
	Dynamic_Array* myArray = (Dynamic_Array *)malloc(sizeof(Dynamic_Array));
	myArray->size = 0;
	myArray->capacity = 20;
	myArray->pAddr = (int*)malloc(sizeof(int)*myArray->capacity);
	return myArray;
}
//插入
void Push_Back_Array(Dynamic_Array* arr, int value) {


}
//根据位置删除
void Remove_Array(Dynamic_Array* arr, int pos) {

}
//根据值删除
void RemoveByValue_Array(Dynamic_Array* arr, int value) {

}
//查找
int Find_Array(Dynamic_Array* arr, int value) {

	return 0;
}
//打印
void Print_Array(Dynamic_Array* arr) {
	if (arr == NULL) {
		return;
	}
	for (int i = 0; i < arr->size; i++) {
		printf("%d", arr->pAddr[i]);
	}
	printf("\n");
}
//释放动态数组的内存
void FreeSpace_Array(Dynamic_Array* arr) {
	if (arr = NULL) {
		return;
	}
	if (arr->pAddr != NULL) {
		free(arr->pAddr);
	}
	free(arr);
}
//清空数组
void Clear_Array(Dynamic_Array* arr) {
	if (arr == NULL) {
		return;
	}
	arr->size = 0;
}
//获得动态数组容量
int Capacity_Array(Dynamic_Array* arr) {
	if (arr == NULL) {
		return;
	}
	return arr->capacity;
}
//获得动态数据当前元素个数
int Size_Array(Dynamic_Array* arr,int pos) {
	if (arr == NULL) {
		return;
	}
	return arr->size;
}
//根据位置获得某个位置元素
int At_Array(Dynamic_Array* arr,int pos) {
	if (arr == NULL) {
		return;
	}
	return arr->pAddr[pos];
}


int main()
{

	system("pause");
	return 0;
}