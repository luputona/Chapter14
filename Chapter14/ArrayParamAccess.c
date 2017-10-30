#include<stdio.h>

void ShowArrayElem2(int *param, int len)
{
	int i;
	for ( i = 0; i<len; i++)
	{
		printf("%d ",param[i]);
	}
	printf("\n");
}
void AddArrayElem2(int *param, int len, int add)
{
	int i;
	for (i = 0; i < len; i++)
	{
		param[i] += add;
	}
}

void main2()
{
	int arr[3] = { 1,2,3 };

	AddArrayElem2(arr, sizeof(arr) / sizeof(int), 1);
	ShowArrayElem2(arr, sizeof(arr) / sizeof(int));
	AddArrayElem2(arr, sizeof(arr) / sizeof(int), 2);
	ShowArrayElem2(arr, sizeof(arr) / sizeof(int));
	AddArrayElem2(arr, sizeof(arr) / sizeof(int), 3);
	ShowArrayElem2(arr, sizeof(arr) / sizeof(int));
}