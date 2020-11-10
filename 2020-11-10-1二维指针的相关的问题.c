//二维指针的相关的问题
#include<stdio.h>
void  print1(int arr[3][5], int x, int y)//arr[][]数组类型，数组参数
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int (*p)[5], int x, int y)//参数指针的形式
{
	//把arr[3][5]二维数组看作一维数组， (*p)[5]
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ",*(*(p+i)+j));//关键的理解点
			//printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}
void print3(int(*p)[5], int x, int y)//参数指针的形式
{
	//把arr[3][5]二维数组看作一维数组， (*p)[5]
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			//printf("%d ", *(*(p + i) + j));//关键的理解点
			printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr,3,5);//arr首元素地址
	print2(arr,3,5);
	print3(arr,3,5);
	return 0;
}