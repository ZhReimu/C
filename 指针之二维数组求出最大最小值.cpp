#include<stdio.h>
#define NUM 5
void ArrayMaxAndMin(int (*arr)[NUM], int *max, int *min)
{
	int i = 0, j = 0;
	*max = *min = *(*arr + i) + j;
	for (; i < NUM; i++)
	{
		for (j = 0; j < NUM; j++)
		{
			if (arr[i][j] > *max)
			{
				*max = arr[i][j];
			}
			else if (arr[i][j] < *min)
			{
				*min = arr[i][j];
			}
		}
	}
}


int main()
{
	int Array[NUM][NUM] = {
		{25, 24, 23, 22, 21},
		{20, 19, 18, 17, 16},
		{10, 11, 12, 13, 14},
		{15, 16, 17, 18, 19},
		{20, 21, 22, 23, 24},

	}, max, min, *pmx = &max, *pmn = &min;

	ArrayMaxAndMin(Array, pmx, pmn);


	printf("The Max Is %d\nThe Min Is %d\n", max, min);
	printf("程序结束\n");

	return 0;
}
