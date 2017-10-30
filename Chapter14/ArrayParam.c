#include<stdio.h>

void ShowArrayElem(int *param, int len)
{
	int i;
	for (i= 0; i<len; i++)
	{
		printf("%d ",param[i]);
	}
	printf("\n");
}

void main1()
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7 };

	ShowArrayElem(arr1, sizeof(arr1)/sizeof(int));
	ShowArrayElem(arr2, sizeof(arr2)/sizeof(int));

}