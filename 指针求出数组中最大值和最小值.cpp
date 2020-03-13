#include<stdio.h>
#define NUM 10
void MaxAndMin(int *arr, int *max, int *min);
int main()
{
	int Array[NUM] = {
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		0
	}, max, min, *pmx = &max, *pmn = &min;

	MaxAndMin(Array, pmx, pmn);

	printf("Max Is %d\nMin Is %d\n", max, min);
	printf("程序结束\n");
	return 0;
}

void MaxAndMin(int *arr, int *max, int *min)
{
	int i;
	*max = *min = arr[0];
	for (i = 0; i < NUM; i++)
		if (arr[i] > *max)
			*max = arr[i];
		else if (arr[i] < *min)
			*min = arr[i];

}
