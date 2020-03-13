#include<stdio.h>
#include<conio.h>
#include<math.h>
void Sort(int *arr, int len)
{
	int i, j, temp;
	for (i = 0; i < len - 1; i++)	/* 外循环为排序趟数，len个数进行len-1趟 
									 */
		for (j = 0; j < len - 1 - i; j++)
		{						/* 内循环为每趟比较的次数，第i趟比较len-i次 
								 */
			if (arr[j] > arr[j + 1])
			{					/* 相邻元素比较，若逆序则交换（升序为左大于右，降序反之） 
								 */
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

}

int main()
{
#define NUM 10
	int i, x[NUM] = { 0 };

	printf("请输入排序前的数组:\n");
	for (i = 0; i < NUM; i++)
	{
		printf("请输入一个整数\n");
		scanf("%d", &x[i]);
	}

	Sort(x, NUM);
	printf("排序后的数组是:\n");
	for (i = 0; i < NUM; i++)
		printf("%d\t", x[i]);



	getch();
	return 0;
}
