#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
int rand_n(int, int, int);
float rand_f(int);
int main()
{
	int seed = 0;
	int par1 = rand_n(100, 200, seed++);
	int par2 = rand_n(100, 200, seed++);
	printf("%d%c%d=", par1, sign[rand_n(0, 3, seed++)], par2);


	return 0;
}

int rand_n(int min, int max, int seed)
// 返回一个随机数
{
	srand((int)time(NULL) + seed);
	return rand() % (max - min + 1) + min;
}

float rand_f(int seed)
//返回一个随机数，小数
{
	srand((int)time(NULL) + seed);
	return rand() / (double)(RAND_MAX);
		// 获得随机值
}


