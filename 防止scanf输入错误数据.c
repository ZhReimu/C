#include <stdio.h>
int main()
{
	int a, t, i = 0;
  retry:

	printf("请输入a的值\n");
	if (i++)
		getchar();
	t = scanf("%d", &a);
	if (t)
		printf("输入值正确！\n");
	else
	{
		printf("输入有误！请重新输入！\n");
		goto retry;
	}

	printf("程序结束\n");
}
