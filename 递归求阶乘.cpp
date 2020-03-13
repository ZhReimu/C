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

	printf("%d!=%d\n", 9, f(9));
	printf("程序结束");
	return 0;
}
