#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 
   思路: 1.将 n-1个盘子先放到B座位上
   2.将A座上地剩下的一个盘移动到C盘上
   3、将n-1个盘从B座移动到C座上 */
unsigned long long int count = 1;
void hannuo(int n, char A, char B, char C)
{
	if (n == 1)
		printf("第%ld步：把%c上的第%d个盘子移动到--->%c柱子上\n", count++, A, n,
			   C);
	else
	{
		hannuo(n - 1, A, C, B);
		printf("第%ld步：把%c上的第%d个盘子移动到--->%c柱子上\n", count++, A, n,
			   C);
		hannuo(n - 1, B, A, C);

	}
}

int main()
{

	clock_t start, finish;
	double duration;
	int n;
	printf("输入汉诺塔层数\n");
	scanf("%d", &n);
	start = clock();

	// 计时开始
	hannuo(n, 'A', 'B', 'C');
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	// 计时结束
	printf("\n\n程序运行总共花了：%lfms\n", duration);
	return 0;

}
