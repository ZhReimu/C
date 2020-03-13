#include "stdio.h"
int f(int n)
{
	if (n == 1)
		return 1;
	else
		return n * f(n - 1);
}

int main()
{
	int N = 5, s = 0, i;
	for (i = 1; i <= N; i++)
		s += f(i);
	printf("1!+2!+...+%d!=%d\n", N, s);
	printf("程序结束");
	return 0;
}
