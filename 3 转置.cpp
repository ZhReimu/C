#include<stdio.h>
#include<conio.h>
#include<math.h>
void Turn(int (*arr)[5], int num)
{
	int i, j, t[5][5] = { 0 };
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
			t[i][j] = arr[j][i];
	}

	for (i = 0; i < num; i++)
		for (j = 0; j < num; j++)
			arr[i][j] = t[i][j];


}

int main()
{
#define NUM 5
	int i, j, x[NUM][NUM];
	// ={{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4},{5,5,5,5,5}};

	printf("请输入转置前的数组:\n");
	for (i = 0; i < NUM; i++)
		for (j = 0; j < NUM; j++)
		{
			printf("请输入一个整数\n");
			scanf("%d", &x[i][j]);
		}
	Turn(*x, NUM);
	printf("转置后的数组是:\n");
	for (i = 0; i < NUM; i++)
	{
		for (j = 0; j < NUM; j++)
			printf("%d\t", x[i][j]);
		printf("\n\n\n");
	}

	getch();
	return 0;
}
