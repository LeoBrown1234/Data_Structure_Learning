#include <DynamicArray.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
//��ʼ��
Dynamic_Array* Init_Array() {
	Dynamic_Array* myArray = (Dynamic_Array *)malloc(sizeof(Dynamic_Array));
	myArray->size = 0;
	myArray->capacity = 20;
	myArray->pAddr = (int*)malloc(sizeof(int)*myArray->capacity);
	return myArray;
}
//����
void Push_Back_Array(Dynamic_Array* arr, int value) {


}
//����λ��ɾ��
void Remove_Array(Dynamic_Array* arr, int pos) {

}
//����ֵɾ��
void RemoveByValue_Array(Dynamic_Array* arr, int value) {

}
//����
int Find_Array(Dynamic_Array* arr, int value) {

	return 0;
}
//��ӡ
void Print_Array(Dynamic_Array* arr) {
	if (arr == NULL) {
		return;
	}
	for (int i = 0; i < arr->size; i++) {
		printf("%d", arr->pAddr[i]);
	}
	printf("\n");
}
//�ͷŶ�̬������ڴ�
void FreeSpace_Array(Dynamic_Array* arr) {
	if (arr = NULL) {
		return;
	}
	if (arr->pAddr != NULL) {
		free(arr->pAddr);
	}
	free(arr);
}
//�������
void Clear_Array(Dynamic_Array* arr) {
	if (arr == NULL) {
		return;
	}
	arr->size = 0;
}
//��ö�̬��������
int Capacity_Array(Dynamic_Array* arr) {
	if (arr == NULL) {
		return;
	}
	return arr->capacity;
}
//��ö�̬���ݵ�ǰԪ�ظ���
int Size_Array(Dynamic_Array* arr,int pos) {
	if (arr == NULL) {
		return;
	}
	return arr->size;
}
//����λ�û��ĳ��λ��Ԫ��
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