#include<stdio.h>
#include<conio.h>
#include<math.h>
int Prime(int x)
{
	int i;
	for (i = 2; i <= (int)sqrt((float)x); i++)
		if (x % i == 0)
			break;
	if (i <= (int)sqrt((float)x))
		return 1;
	else
		return 0;
}

int main()
{
	int x;
	printf("请输入一个整数\n");
	scanf("%d", &x);
	if (!Prime(x))
		printf("%d is a Prime\n", x);
	else
		printf("%d is not a Prime\n", x);
	getch();
	return 0;
}
