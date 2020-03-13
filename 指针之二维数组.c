#include<stdio.h>
#define NUM 5
int main()
{
	int Array[NUM][NUM] = {
		{0, 1, 2, 3, 4},
		{1, 2, 3, 4, 5},
		{2, 3, 4, 5, 6},
		{3, 4, 5, 6, 7},
		{4, 5, 6, 7, 8},
	}, (*p)[NUM] = Array;


	printf("(*p+3)+4的值是%d\n", *(*(p + 3) + 4));
	printf("程序结束\n");

	return 0;
}
