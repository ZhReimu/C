#include "stdio.h"
#include "math.h"
int cal(float x, float y, float z, char c)
{
	int t;
	t = fabs(x * y - z) <= (1e-6);
	switch (c)
	{
	case '+':
		if (x + y == z)
			return 1;
		else
		{
		printf("非常遗憾，你做错了，正确答案是%f\n",x+y);
			return 0;
		}
		break;

	case '-':
		if (x - y == z)
			return 1;
		else
		{
		printf("非常遗憾，你做错了，正确答案是%f\n",x-y);
			return 0;
		}
		break;

	case '*':
		if (x * y == z || (x - (int)x > 0 && t || y - (int)y > 0 && t))

			return 1;
		else
		{
		printf("非常遗憾，你做错了，正确答案是%f\n",x*y);
			return 0;
		}
		break;

	case '/':
		if ((y != 0) && (x / y == z))
			return 1;
		else
		{
		printf("非常遗憾，你做错了，正确答案是%f\n",x/y);
			return 0;
		}
		break;

	default:
		printf("本程序只支持四则运算！\n");
	}

	return 0;
}

int main()
{
	float x, y, z;
	char c, t;
	int i, correct = 0, fault = 0;
	printf("请输入要打分的题目个数\n");
	scanf("%d", &i);
	while (i--)
	{
		printf("请输入一个四则运算表达式，以回车结束\n");
		scanf("%f%c%f%c%f", &x, &c, &y, &t, &z);
		if (cal(x, y, z, c))
			correct++;
		// printf("干得漂亮！你答对了！\n");
		else
			fault++;
		// printf("非常遗憾！你答错了！\n");
	}
	printf
		("打分完毕！\n你总共做对了%d道题目\n做错了%d道题目\n一题10分，总分数是%d分\n",
		 correct, fault, correct * 10);
	printf("程序结束");
	return 0;
}
